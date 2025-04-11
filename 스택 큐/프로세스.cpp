#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    deque<pair<int, int>> dq;
    for(int i=0;i<priorities.size();i++)dq.push_back({priorities[i], i});
    while(!dq.empty()){
        auto f = dq.front(), mx = *max_element(dq.begin(), dq.end()); dq.pop_front();
        if(mx.first==f.first){
            answer++;
            if(f.second==location) break;
        }
        else dq.push_back(f);
    }
    return answer;
}

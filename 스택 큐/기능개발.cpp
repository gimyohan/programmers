#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int cnt=0, origin;
    for(int i=0;i<progresses.size();i++){
        int rem = (100-progresses[i])/speeds[i]+((100-progresses[i])%speeds[i]?1:0);
        if(!cnt||cnt&&origin<rem){
            if(cnt)answer.push_back(cnt);
            cnt = 0;
            origin=rem;
        }
        cnt++;
    }
    answer.push_back(cnt);
    return answer;
}

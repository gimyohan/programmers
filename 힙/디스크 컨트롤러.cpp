#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<int>> jobs) {
    int answer = 0, t = 0;
    priority_queue<pair<pair<int, int>, int>> pq;
    sort(jobs.begin(), jobs.end());
    auto run = [&](){t+=-pq.top().first.first,answer+=t+pq.top().first.second,pq.pop();};
    for(int i=0;i<jobs.size();){
        if(pq.empty()&&jobs[i][0]>t){
            t = jobs[i][0];
        }
        if(jobs[i][0]<=t)pq.push({{-jobs[i][1], -jobs[i][0]}, -i}), i++;
        else run();
    }
    while(!pq.empty()) run();
    
    return answer/jobs.size();
}

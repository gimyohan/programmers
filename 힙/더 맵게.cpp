#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<ll, vector<ll>, greater<ll>> pq(scoville.begin(), scoville.end());
    while(pq.top()<K){
        if(pq.size()<2)return -1;
        answer++;
        ll sum = pq.top(); pq.pop();
        sum += pq.top()<<1;pq.pop();
        pq.push(sum);
    }
    return answer;
}

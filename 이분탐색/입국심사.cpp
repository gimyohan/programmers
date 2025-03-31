#include <bits/stdc++.h>

using namespace std;

long long solution(int n, vector<int> times) {
    auto ok = [&](long long t){
        long long sum = 0;
        for(auto &time:times)sum+=t/time;
        return sum>=n;
    };
    long long lo = 0, hi = 1e18;
    while(lo+1<hi){
        long long mid = lo+hi>>1;
        if(ok(mid))hi = mid;
        else lo = mid;
    }
    return hi;
}

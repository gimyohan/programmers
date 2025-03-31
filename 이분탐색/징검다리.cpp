#include <bits/stdc++.h>

using namespace std;

int solution(int distance, vector<int> rocks, int n) {
    rocks.push_back(0), rocks.push_back(distance);
    sort(rocks.begin(), rocks.end());
    auto ok = [&](int d){
        int m = n, l = 0;
        for(int i=1;i<rocks.size();i++){
            l+=rocks[i]-rocks[i-1];
            if(l>=d)l=0;
            else m--;
        }
        return m>=0;
    };
    int lo = 0, hi = distance + 1;
    while(lo+1<hi){
        int mid = lo+hi>>1;
        if(ok(mid))lo = mid;
        else hi = mid;
    }
    return lo;
}

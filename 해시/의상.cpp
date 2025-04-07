#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string, int> mp;
    for(auto &item:clothes){
        mp[item[1]]++;
    }
    for(auto [f, s]:mp)answer*=s+1;
    return answer-1;
}

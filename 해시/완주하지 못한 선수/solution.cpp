#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    multiset<string> mts;
    for(auto &s: participant)mts.insert(s);
    for(auto &s: completion)mts.erase(mts.find(s));
    return *mts.begin();
}

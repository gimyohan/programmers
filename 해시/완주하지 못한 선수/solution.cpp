#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    multiset<string> mst;
    for(auto &s: participant)mst.insert(s);
    for(auto &s: completion)mst.erase(mst.find(s));
    return *mst.begin();
}

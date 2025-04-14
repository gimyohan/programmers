#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> answer;
    multiset<int> mts;
    for(auto s:operations){
        if(s[0]=='I')mts.insert(stoi(s.substr(2)));
        else if(mts.empty()){}
        else if(s[2]=='1')mts.erase(mts.find(*mts.rbegin()));
        else mts.erase(mts.find(*mts.begin()));
    }
    if(mts.empty())mts.insert(0);
    answer.push_back(*mts.rbegin()), answer.push_back(*mts.begin());
    return answer;
}

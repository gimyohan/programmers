#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> tmp(plays.size()), answer;
    map<string, int> cnt;
    for(int i=0;i<plays.size();i++)cnt[genres[i]]+=plays[i];
    iota(tmp.begin(), tmp.end(), 0);
    sort(tmp.begin(), tmp.end(), [&](int i, int j){
        if(genres[i]!=genres[j])return cnt[genres[i]]>cnt[genres[j]];
        if(plays[i]!=plays[j])return plays[i]>plays[j];
        return i<j;
    });
    for(int i=0;i<plays.size();i++){
        if(!(i>=2&&genres[tmp[i-2]]==genres[tmp[i]]))answer.push_back(tmp[i]);
    }
    return answer;
}

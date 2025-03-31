#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(auto &command:commands){
        vector<int> tmp(array);
        sort(tmp.begin()+command[0]-1, tmp.begin()+command[1]);
        answer.push_back(tmp[command[0]+command[2]-2]);
    }
    return answer;
}

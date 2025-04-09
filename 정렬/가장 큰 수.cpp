#include <bits/stdc++.h>

using namespace std;

string solution(vector<int> numbers) {
    string answer;
    sort(numbers.begin(), numbers.end(), [](int a, int b){
        return stoi(to_string(a)+to_string(b))>stoi(to_string(b)+to_string(a));
    });
    for(auto &n:numbers)answer+=to_string(n);
    reverse(answer.begin(), answer.end());
    while(answer.size()>1&&answer.back()=='0')answer.pop_back();
    reverse(answer.begin(), answer.end());
    return answer;
}

#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> nums)
{
    set<int> st(nums.begin(), nums.end());
    return min(nums.size()>>1, st.size());
}

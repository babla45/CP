/*
//both of the following code
//determines the length of the
//longest increasing subsequence

//code1: using recursion 
#include<bits/stdc++.h>
using namespace std;
const int N=2510;
vector<int> s(N);
int dp[N];

int solve(int a)
{
    if(dp[a]!=-1) return dp[a];
    
    int ans=1;
    for(int b=0; b<a; b++)
    {
        if(s[a]>s[b])
        ans=max(ans, solve(b)+1);
    }
    return dp[a]=ans;
}


int main()
{
    memset(dp,-1,sizeof(dp));
    int n; cin>>n;
    for(int a=0; a<n; a++) cin>>s[a];
    
    int ans=0;
    for(int a=0; a<n; a++)
    ans=max(ans, solve(a));
    
    cout<<ans;
    
    return 0;
}

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> s(n);
    vector<int> dp(n, 1); // Initialize dp array with 1, as the minimum length of subsequence is 1

    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (s[i] >s[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    int ans = *max_element(dp.begin(), dp.end()); // Find the maximum value in the dp array

    cout << ans << endl;

    return 0;
}


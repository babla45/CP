//.....b_a_b_l_a......
//implementation of binary search, UpperBound and LowerBound

#include<bits/stdc++.h>
using namespace std;
#ifndef onliine
#define b_i_b       ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define pam(x)      for(auto ww:x) cout<<ww.ft<<sp<<ww.sd<<nl;
#define file        freopen("input.txt","r",stdin);\
                    freopen("output.txt","w",stdout);
#define pa(x)       for(auto ww:x) cout<<ww<<sp;
#define rforr(x,y)  for(int a=y-1;a>=x;a--)
#define forr(x,y)   for(int a=x; a<y; a++)
#define mem(a,x)    memset(a,x,sizeof(a));
#define all(x)      x.bn,x.ed
#define bss(x,k)    bs(all(x),k)
#define vs          vector<string>
#define bs          binary_search
#define vc          vector<char>
#define vi          vector<int>
#define vll         vector<ll>
#define ub          upper_bound
#define lb          lower_bound
#define pb          push_back
#define bn          begin()
#define ed          end()
#define nl          "\n"
#define sp          " "
#define ft          first
#define sd          second
#define sz          size()
#define nll         cout<<"\n";
#define spc         cout<<" ";
#define pno         cout<<"NO\n";
#define pyes        cout<<"YES\n";
#define p(x)        cout<<x<<"\n";
#define pd(x)       cout<<x<<" ";
#define ll          long long
#define mii         map<int,int>
#define mci         map<char,int>
#define msi         map<string,int>
#define vpii        vector<pair<int,int>>
#define rall(x)     x.rbegin(),x.rend()
#define vpci        vector<pair<char,int>>
#define vpsi        vector<pair<string,int>>
#define pp(x)       cerr<<(#x)<<"="<<x<<"\n";
#define __unique(s) s.resize(unique(all(s))-s.bn);
#endif


// !******************************************************************!
// !*************************Code Begins Here*************************!
// !******************************************************************!




//1st type of implementation(not recommended)
void Binary_Search(int arr[], int n, int target)
{
    int l=0;
    int r=n-1;
    
    while(l<=r)
    {
        int m=(l+r)/2;
        
        if(arr[m]==target)
        {
            cout<<"Target found";
            return;
        }
        if(arr[m]>target)
        {
            r=m-1;
        }
        else l=m+1;
    }
    cout<<"Target not found";
    
}


int UpperBound(int arr[], int n, int target)
{
    int l=0 , r=n;
    
    while(l<r)
    {
        int m=(l+r)/2;
        
        if(arr[m] > target)
        {
            r=m;
        }
        else l=m+1;
    }
    return l;
}


int LowerBound(int arr[], int n, int target)
{
    int l=0 , r=n;
    
    while(l<r)
    {
        int m=(l+r)/2;
        
        if(arr[m] >= target)
        {
            r=m;
        }
        else l=m+1;
    }
    return l;
}




//////////////////////////////////////////
//////////////////////////////////////////




//2nd type of implementation(recommended)

void binary_src(int arr[], int n, int target)
{
    int l = 0;
    int r = n - 1;

    while (l <= r)
    {
        int m = l + (r - l) / 2;

        if (arr[m] == target)
        {
            cout << "target found";
            return;
        }
        if (arr[m] > target)
        {
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    cout << "target not found";
}


int upperBound(int arr[], int n, int target)
{
    int l = 0, r = n - 1;

    while (l <= r)
    {
        int m = l + (r - l) / 2;

        if (arr[m] > target)
        {
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    return l;
}

int lowerBound(int arr[], int n, int target)
{
    int l = 0, r = n - 1;

    while (l <= r)
    {
        int m = l + (r - l) / 2;

        if (arr[m] >= target)
        {
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    return l;
}





int main()
{
    int s[]={1,3,4,7,9,14,30,40};
    pa(s) nll
    
    int n=sizeof(s)/4;
    nll;
    
    
    
    for(int x=0; x<51; x++)
    {
        int p=UpperBound(s,n,x);
        
        if(p<n)
        cout<<"UpperBound of "<<x<<" = "<<s[p]<<nl;
        else
        p("Upper_bound of "<<x<<" doesn't exist!!!")
    } 
    
    nll nll 
    
    for(int x=0; x<51; x++)
    {
        int p=LowerBound(s,n,x);
        
        if(p<n)
        cout<<"lowerBound of "<<x<<" = "<<s[p]<<nl;
        else
        p("lower_bound of "<<x<<" doesn't exist!!!")
    }
    return 0;
}

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<ll> vli; 
typedef vector< vli > vvli;

/////////////////////////
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define loop(i,a,b) for (int i = a; i < b; i++)
//////////////////////////
#define printvector(n) for(int i=0;i<n.size();i++){cout<<n[i]<<" ";}cout<<'\n'
#define printstack(n) for(int i=0;i<n.size();i++){cout<<n[i]<<" ";}cout<<'\n'
#define PI_val 3.14159265359
#define printpair(n) cout<<n.F<<" "<<n.S
#define printvop(n) loop(i,0,n.size()-1){printpair(n[i])<<endl;}
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
ll mod=1000000007;
//////////////////////////
int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("E:/codes/testcases/input.in", "r", stdin);
    // for writing output to output.txt
    freopen("E:/codes/testcases/output.in", "w", stdout);
    #endif
    ll a,b,x,y,p,q,n,m,k,sum=0,ans=0,res=0;
    string s,r;
    cin >> s;
    n=s.length();
    int flag[n]={0};
    for (int i = 0; i < n-1; ++i)
    {
        /* code */if(flag[i]){
        continue;
    }
    else{
        if(ans==0&&s[i]=='A' &&s[i+1]=='B'){
            flag[i]=1;
            flag[i+1]=1;
            ans=1;
        }
        if(sum==0&&s[i]=='B' &&s[i+1]=='A'){
            flag[i+1]=1;
            flag[i]=1;
            sum=1;
        }
    }
    }
    if(sum&&ans){
        cout<<"YES";
    }
    else{
        ans=0;
        sum=0;
        int flag[n]={0};
    for (int i = n-1; i > 0; --i)
    {
        /* code */if(flag[i]){
        continue;
    }
    else{
        if(ans==0&&s[i]=='B' &&s[i+1]=='A'){
            flag[i]=1;
            flag[i-1]=1;
            ans=1;
        }
        if(sum==0&&s[i]=='A' &&s[i+1]=='B'){
            flag[i-1]=1;
            flag[i]=1;
            sum=1;
        }
    }
    }
     if(sum&&ans){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    }
    return 0;
}

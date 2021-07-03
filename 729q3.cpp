#include <iostream>
#define ll long long
#define mod 1000000007
using namespace std;

long long gcd(long long  a, long long b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
long long lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ans=0;
        ll m=n-((n+1)/2);
        ans=(ans+((n+1)/2)*2)%mod;
        ll pre=2;
        ll di=3;
        while(m!=0){
            ll lc=lcm(pre,di);
            ll lcno=n/lc;
            ans=(ans+((m-lcno)*(di)%mod)%mod)%mod;
            m=lcno;
            pre=lc;
            di++;
        }
        cout<<ans<<endl;
    }
    return 0;
}



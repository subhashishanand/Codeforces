#include<iostream>
#include<vector>
#define ll long long
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int m=n-1;
        for(int i=0;i<m;i++){
            arr[i]=arr[i+1]-arr[i];
        }
        vector<ll> mul(m);
        for(ll i=0;i<m;i++){
            mul[i]=m-i+(m-i)*i-1;
        }
        ll ans=0;
        for(int i=0;i<m;i++){
            ans-=mul[i]*arr[i];
        }
        cout<<ans<<endl;
    }
 
    return 0;
}
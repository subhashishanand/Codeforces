// Codeforces Round #728 (Div. 2)
// Question- Pleasant Pairs


#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<ll,ll> > arr(n);
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            arr[i]=make_pair(a,i+1);
        }
        sort(arr.begin(),arr.end());
        int ans=0;
        for(int j=n-1;j>=0;j--){
            for(int i=0;i<j;i++){
                if(arr[j].first*arr[i].first<2*n){
                    if(arr[i].first*arr[j].first==arr[i].second+arr[j].second){
                        ans++;
                    }
                }else{
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
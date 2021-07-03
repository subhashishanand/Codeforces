#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        if(b==1){
            cout<<"Yes"<<endl;
            continue;
        }
        if(a==1){
            if((n-1)%b==0){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
            continue;
        }
        ll first=1;
        bool possi=false;
        while(first<=n){
            if((n-first)%b==0){
                possi=true;
                break;
            }
            first*=a;
        }
        if(possi){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}



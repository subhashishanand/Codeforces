#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int even=0;
        int odd=0;
        n=2*n;
        while(n--){
            int a;
            cin>>a;
            if(a%2==0){
                even++;
            }else{
                odd++;
            }
        }
        
        if(even==odd){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}

// Codeforces Round #728 (Div. 2)
// Question- Pretty Permutations

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=i+1;
        }
        int k=0;
        while(k+1<n){
            int temp=arr[k];
            arr[k]=arr[k+1];
            arr[k+1]=temp;
            k+=2;
        }
        if(k<n){
            int temp=arr[k];
            arr[k]=arr[k-1];
            arr[k-1]=temp;
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
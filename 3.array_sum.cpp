#include<bits/stdc++.h>
using namespace std;
int arr_sum(int t[],int n){
if(n<0)
return 0;

int b=t[n]+arr_sum(t,n-1);
return b;
}
int main(){
    int a;
    cin>>a;
    int b[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    cout<<arr_sum(b,a)<<endl;
}
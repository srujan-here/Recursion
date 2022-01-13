#include<bits/stdc++.h>
using namespace std;
int sum(int a){
    if(a==0)
    return 0;

    int b=a+sum(a-1);
    return b;
}
int main(){
    int a;
    cin>>a;
    cout<<sum(a)<<endl;
}
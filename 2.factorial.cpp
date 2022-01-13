#include<bits/stdc++.h>
using namespace std;
int fact(int a){
    if(a==0)
    return 1;

    int b=a*fact(a-1);
    return b;
}
int main(){
    int a;
    cin>>a;
    cout<<"factorial of "<<a<<" is";
    cout<<fact(a)<<endl;;
}

//top to bottom approach
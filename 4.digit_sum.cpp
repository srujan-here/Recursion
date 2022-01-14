#include<bits/stdc++.h>
using namespace std;
int digit_sum(int a){

if(a<=0)
return 0;
int b=(a%10)+digit_sum(a/10);
return b;
}
int main(){
    int a;
    cin>>a;
    cout<<digit_sum(a)<<endl;

}
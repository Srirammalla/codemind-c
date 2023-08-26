#include<iostream>
using namespace std;
int main(){
    int a=0,b=1;
    int tar;
    cin>>tar;
    while (b<=tar){
        int tem=b;
        b=a+b;
        a=tem;
    }
    if (tar==b){
        cout<<b;
    }
    if ((tar-a)>(b-tar)){
        cout<<b;
    }
    else if((tar-a)<(b-tar)){
        cout<<a;
    }
    else if((tar-a)==(b-tar)){
        cout<<a<<" "<<b;
    }
}
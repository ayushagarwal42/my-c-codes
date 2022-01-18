#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int sum=0;
    for(int c=1;c<=n;c++){
        sum+=c;
    }
    cout<<sum<<endl;

    return 0;
}
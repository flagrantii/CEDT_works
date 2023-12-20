#include<bits/stdc++.h>
using namespace std;

main(){
    int n;
    cin>>n;
    int x=1,y=1,z=1;
    while(n--){
        z=x;
        x=((y*2)+x)%100000007;
        y=(z+y)%100000007;
    }
    cout<<x;
}
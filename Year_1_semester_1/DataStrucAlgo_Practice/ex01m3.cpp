#include<bits/stdc++.h>
using namespace std;

main(){
    long long n,a;
    cin>>n>>a;
    vector<long long> seat(n);
    while(n--){
       cin>>seat[n]; 
    } 

    while(a--){
        long long cust,ans,l=0,r=10000000000000;
        cin>>cust;
        while(l<=r){
            long long m = l+(r-l)/2;
            long long sum = 0;
            for(auto x:seat){
                sum+= 1+m/x;
            } 
            if(sum>=cust){
                ans = m;
                r = m-1;
            }else l = m+1;
        }
        cout<<ans<<"\n";   
    }
}
#include<bits/stdc++.h>
using namespace std;

set<int> number;
void child(int a,int n){
    if(a<n){
        number.insert(a);
        child((a*2)+1,n);
        child((a*2)+2,n);
    }else return;
}
main(){
   int n,a;cin>>n>>a;
   child(a,n);
   cout<<number.size()<<"\n";
   for(auto i:number){
       cout<<i<<" ";
   }
}
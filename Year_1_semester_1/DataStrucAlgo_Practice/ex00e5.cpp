#include<bits/stdc++.h>
using namespace std;
//Permutation
int n,m;
void process(bool valid,vector<bool>& v,int count,int idx){
    if(idx<n){
        v[idx]=false;
        process(valid,v,0,idx+1);
        v[idx]=true;
        process(valid or ((count+1)>=m),v,count+1,idx+1);
    }else if(valid){
        for(int i=0;i<n;i++){
            cout<< v[i];
        }

        cout<<"\n";
    }
}

main(){    
    cin>>n;
    cin>>m;
    vector<bool> v(n);
    bool valid=false;

    if(m==0) valid=true;
    process(valid,v,0,0);
}
    

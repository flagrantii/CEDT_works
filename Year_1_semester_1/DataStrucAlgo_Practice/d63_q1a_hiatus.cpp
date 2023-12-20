#include<bits/stdc++.h>
using namespace std;

main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m,it,numchk,qa,qb;
    cin>>n>>m;
    vector<int> num(n);

    while(n--){
        int a,b;
        cin>>a>>b;
        num[n] = (100*a)+b;
    }
    sort(num.begin(),num.end());

    while(m--){
        cin>>qa>>qb;
        numchk = (100*qa)+qb;

        auto it = lower_bound(num.begin(),num.end(),numchk);
        if(numchk == *it){
            cout<<"0 0 ";
        }else if(numchk < num[0]){
            cout<<"-1 -1 ";
        }else{
            int x = *(--it);
            cout<<x/100<<" "<<x%100<<" ";
        }
    }
}
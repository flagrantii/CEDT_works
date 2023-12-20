#include<bits/stdc++.h>
using namespace std;

main(){
    int n;cin>>n;

    int allhp=0;
    int m,k,w;
    cin>>m>>k>>w;
    int monhp[m],monspace[m];

    for(int i=0;i<m;i++){
        int mon_space;cin>>mon_space;
        monspace[i] = mon_space;
    }

    for(int i=0;i<m;i++){
        int mon_hp;cin>>mon_hp;
        monhp[i] = mon_hp;
        allhp+= mon_hp;
    }

    for(int i=0;i<k;i++){
        int tower;cin>>tower;
        int l=tower-w,r=tower+w;
        for(int i=0;i<m;i++){
            if(monspace[i]>=l and monspace[i]<=r and monhp[i]>=1){
                monhp[i]--;
                allhp--;
                break;
            }
        }

    }
    cout<<allhp;
}
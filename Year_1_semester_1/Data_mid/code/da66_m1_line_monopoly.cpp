#include<bits/stdc++.h>
#include<map>
using namespace std;

map<int,int> m;
map<int,int> chk;

vector<int> back;
void compare(map<int,int> m){
    
    for(auto &x:m){
        cout<<x.first<<x.second;
    }
    
}

main(){
    int n;cin>>n;
    while(n--){
        int a,b;cin>>a>>b;
        m[a]=b;
    }
    while(n--){
        int fuc;cin>>fuc;
        if(fuc==1){
            int a,b;cin>>a>>b;
            map<int,int>::iterator it;
            if((it = m.find(a+1))!=m.end() or (it = m.find(a-1))!=m.end() or (it = m.find(a))!=m.end()){
                m[it->first]=b;
                cout<<"foun";
            }else if((it = chk.find(a+1))!=chk.end() or (it = chk.find(a-1))!=chk.end() or (it = chk.find(a))!=chk.end()){
                m[it->second]=b;
                cout<<"found";
            }else m[a]=b; chk[b]=a;
            sort(m.begin(),m.end());

        }else if(fuc==2){
            compare(m);
        }
    }
}
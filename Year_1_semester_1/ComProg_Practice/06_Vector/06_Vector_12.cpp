#include<bits/stdc++.h>
using namespace std;

vector<int> v;
main(){
    int num;
    cin>>num;
    v.push_back(num);
    while(num!=1){
        if(num%2==0){
            num = num/2;
        }else num = (3*num)+1;
        v.push_back(num);
    }
    auto i = v.begin();
    if(v.size() > 15){
        i = v.end() - 15;
    }
    bool ck=false;
    for(; i<v.end();i++) {
        if(ck){
            cout << "->";
        }
        cout<<*i;
        ck=true;
    }
}
#include<bits/stdc++.h>
using namespace std;

vector<pair<string,string>> v;

string upgrade(string st){
    string allgrade[] = {"F","D","D+","C","C+","B","B+","A","A"};
    for(int i=0;i<9;i++){
        if(st == allgrade[i]){
            return allgrade[i+1];
        }
    }
}

main(){
    string std,grade;

    while (cin>>std){      
        if(std=="q"){
            break;
        }
        cin>>grade;
        v.push_back(make_pair(std,grade));
    }
    string chk_grade;
    while (cin>>chk_grade){
        for(int i=0;i<v.size();i++){
            if(chk_grade==v[i].first){
               v[i].second = upgrade(v[i].second);
            }
        }

    }
    for(auto x:v){
        cout<<x.first<<" "<<x.second<<"\n";
    }
    
    
}
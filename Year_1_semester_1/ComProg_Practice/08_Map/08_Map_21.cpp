#include<bits/stdc++.h>
using namespace std;

map<string,vector<string>> cagalory;
map<int,map<string,vector<string>>> counts;
main(){
    string name,type;
    int i=0;
    while (cin>>name){
        cin>>type;
        if(cagalory.find(type) == cagalory.end()){
            cagalory[type] = vector<string>();
            counts[i] =  cagalory[type]=vector<string>();
            i++;
        }
        cagalory[type].push_back(name);
    }
    
    for(auto e:cagalory){
        cout<<e.first<<": ";
        auto d = e.second;
        for(auto v:d){
            cout<<v<<" ";
        }
        cout<<"\n";
    }
}
#include<bits/stdc++.h>
using namespace std;

map<int,vector<string>> stud;
vector<pair<int,string>> vec;
map<string,int> st;
map<int,vector<string>> newstud;

main(){
    int n;cin>>n;
    
    while (n--)
    {
        string name;
        int score;
        cin>>name>>score;
        vector<string> allname;

        stud[-score].push_back(name);
        auto itr = st.find(name);
        if(itr != st.end() and score<(*itr).second){

        }else st[name]=score;
    }
    for(auto e:st){
        int newscore;
        string newname;
        newname = e.first;
        newscore = e.second;
        newstud[-newscore].push_back(newname);

    }
    sort(vec.begin(),vec.end());
    int num;cin>>num;

    auto itr=newstud.begin();
    int count=0;
    for(auto itr:newstud){
        auto e = itr.second;
        cout<<-itr.first<<" ";
        for(auto v:e){
            cout<<v<<" ";
        }

        cout<<"\n";
        if(count==num-1){
            break;
        }
        count++;
    }
    
}
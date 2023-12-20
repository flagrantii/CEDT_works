#include<bits/stdc++.h>
using namespace std;


main(){
    int n;cin>>n;
    while(n--){
        pair<tuple<string,int,vector<int>>,tuple<string,int,vector<int>>> teams;
        string nation1,nation2;
        cin>>nation1>>nation2;
        
        vector<int> allmatchA;
        vector<int> allmatchB;
        int macthA,macthB;
        char line;
        int count=0;
        while (cin>>macthA)
        {
            if(macthA>0){
                cin>>line;
            cin>>macthB;
            count++;
            allmatchA.push_back(macthA);
            allmatchB.push_back(macthB);
            }
        }
        teams = make_pair(make_tuple(nation1,0,allmatchA),make_tuple(nation2,0,allmatchB));
        for(int i=0;i<count;i++){
            if(get<2>(teams.first)[i]>get<2>(teams.second)[i]){
                get<1>(teams.first)++;
            }else get<1>(teams.second)++;

        }
        if(get<1>(teams.first)>get<1>(teams.second)){
            cout<<"*"<<get<0>(teams.first)<<" "<<get<1>(teams.first);
            cout<<" [ ";
            for(auto e:get<2>(teams.first)){
                cout<<e<<" ";
            }
            cout<<"]"<<"\n";

            cout<<get<0>(teams.second)<<" "<<get<1>(teams.second);
            cout<<" [ ";
            for(auto e:get<2>(teams.second)){
                cout<<e<<" ";
            }
            cout<<"]"<<"\n";

        }else if(get<1>(teams.first)<get<1>(teams.second)){
            cout<<get<0>(teams.first)<<" "<<get<1>(teams.first);
            cout<<" [ ";
            for(auto e:get<2>(teams.first)){
                cout<<e<<" ";
            }
            cout<<"]"<<"\n";

            cout<<"*"<<get<0>(teams.second)<<" "<<get<1>(teams.second);
            cout<<" [ ";
            for(auto e:get<2>(teams.second)){
                cout<<e<<" ";
            }
            cout<<"]"<<"\n";
        }
        allmatchA.clear();
        allmatchB.clear();
    }
    
}
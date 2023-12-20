#include<bits/stdc++.h>
using namespace std;

vector<int> v;
vector<tuple<int,int,int>> range;
main(){
    string num;
    getline(cin,num);

    int number = 0;
     for(int i=0; i<num.length(); i++) {
        if(num[i] == ' ') {
            v.push_back(number);
            number = 0;
        }
        else if(num[i+1] == '\0') {
            number *= 10;
            number += num[i] - '0';
            v.push_back(number);
        }
        else {
            number *= 10;
            number +=num[i] - '0';
        }
    }

    int maxx=-10000,ran=0;
    for(int i=0;i<v.size();i++){
        if(i!=0 and v[i] != v[i-1]){
            maxx = max(maxx,ran);
            ran=0;
        }
        ran++;
    }
    ran=0;
    for(int i=0;i<v.size();i++){
        if(i!=0 and v[i] != v[i-1]){
            if(ran==maxx){
                range.push_back(make_tuple(v[i-1],i-maxx,i));
            }
            ran=0;
        }
        ran++;
        if(i==v.size()-1 and ran==maxx){
            range.push_back(make_tuple(v[i],i-maxx+1,i+1));
        }
    }
    sort(range.begin(), range.end());
    for(auto i:range){
        cout<<get<0>(i)<<" --> x[ "<<get<1>(i)<<" : "<<get<2>(i)<<" ]"<<"\n";
    }


}
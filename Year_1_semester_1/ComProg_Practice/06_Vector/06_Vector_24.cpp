#include<bits/stdc++.h>
using namespace std;

vector<pair<double,string>> items;
vector<pair<double,string>> items_sum;

bool cmp(pair<double, string> a, pair<double, string> b) {
    if(a.first == b.first) return a.second < b.second;
    return a.first > b.first;
}

main(){
    string name;
    double price;
    while(cin >> name){
        if(name=="END"){
            break;
        }
        cin>>price;
        items.push_back(make_pair(price,name));
        items_sum.push_back(make_pair(0,name));
    }
    string num;
    while(cin>>num){
        for(int i=0;i<items.size();i++){
            if(num==items[i].second){
                items_sum[i].first+=items[i].first;
            }
        }
    }

    sort(items_sum.begin(),items_sum.end(),cmp);

    int count = 0;
    for(int i=0;i<items.size();i++){
        if(items_sum[i].first != 0 and count !=3){
            cout<<items_sum[i].second<<" "<<items_sum[i].first<<"\n";
            count++;
        }
    }
    if(count == 0){
        cout<<"No Sales";
    }

}
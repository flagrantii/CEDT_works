#include<bits/stdc++.h>
using namespace std;

vector<pair<string,int>> v;

main(){
    while (cin >> "END")
    {
        string name;
        int price;

        cin>>name>>price;
        v.push_back(make_pair(name,price));
    
    }
}
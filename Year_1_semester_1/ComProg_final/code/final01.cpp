#include<bits/stdc++.h>
using namespace std;

vector<vector<unsigned long long int>> vec;

main(){
    int n; cin>>n;
    while (n--)
    {
        int num;
        cin>>num;
        vector<unsigned long long int> allmoney;
        while (num--)
        {
            unsigned long long int money; cin>>money;
            allmoney.push_back(money);
        }
        sort(allmoney.begin(),allmoney.end());
        auto itr = allmoney.begin();
        itr = allmoney.erase(itr);
        vec.push_back(allmoney);
        
    }
    for(auto b:vec){
         unsigned long long int count =0;
        for(auto sum:b){
            count+=sum;
        }
        cout<<count<<"\n";
    }
}
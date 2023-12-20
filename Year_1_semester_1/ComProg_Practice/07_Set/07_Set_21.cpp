#include<bits/stdc++.h>
using namespace std;

set<int> all;
main(){
    int n; cin>>n;
    int num;
    while (cin>>num)
    {
        if(num<=n) all.insert(num);
    }

    int count = 0;
    auto bng = all.begin();
    auto ed = all.end();

    *(ed--);
    for(auto i:all){
        if(*bng+*ed > n){
            ed--;
        }else if(*bng+*ed < n){
            bng++;
        }else if(*bng+*ed == n){
            count++;
            ed--;
            bng++;
        }
        if(*bng >= *ed){
            break;
        }
    }
    cout<<count;
    
}
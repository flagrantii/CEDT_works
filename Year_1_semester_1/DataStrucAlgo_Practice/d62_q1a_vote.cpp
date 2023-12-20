#include<algorithm>
#include<iostream>
#include<queue>
#include<map>
#include<string>
#include<vector>

using namespace std;

map<string,int> m;
priority_queue<pair<int,string>> q;

main(){
    int n,k;
    cin>>n>>k;
    string name;

    while (n--)
    {
        cin>>name;
        m[name]++;
    }
    for(auto x:m){
        q.push(make_pair(x.second,x.first));
    }
    if(m.size()>k){
        while(k>1){
            q.pop();
            k--;
        }
        cout<<q.top().first;  
    }else{
        while (!q.empty())
        {
           q.pop();
        }
        cout<<q.top().first;
    }
    
    
}
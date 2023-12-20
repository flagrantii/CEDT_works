#include<bits/stdc++.h>
using namespace std;


// 10 5 4
// 1 3 1 4 4 1 1 5 5 5
main(){
    int n,k,v;
    cin>>n>>k>>v;
    list<int> ls;

    for(int i=0;i<n;i++){
        int balls;
        cin>>balls;
        ls.push_back(balls);
    }
    auto it = ls.begin();
    for(int i=0;i<k;i++) it++;
    it = ls.insert(it,1,v);

    if(it != ls.begin() and next(it) != ls.end() and *next(it)==v and *prev(it)!=v) it++;
    if(it != ls.begin() and next(it) != ls.end() and *next(it)!=v and *prev(it)==v) it--;

    while(it != ls.end()){
        v=*it;
        if(it != ls.begin() and next(it) != ls.end() and *next(it)==v and *prev(it)==v){
            while(it != ls.begin() and *prev(it)==v){
                ls.erase(prev(it));
            }
            while(next(it) != ls.end() and *next(it)==v){
                ls.erase(next(it));
            }
            it = ls.erase(it);
            if(it == ls.end() and it != ls.begin()){
                it--;
            }
        }else break;
    }

    for(auto x:ls){
        cout<<x<<" ";
    }


}
#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
using namespace std;

set<int> number;

main(){
    int n;cin>>n;
    bool check=true;
    for(auto i=0;i<n;i++){
        int num;cin>>num;
        
        if(num<1 or num>n ){
            check = false;
            break;
        }

        number.insert(num);
    }

    if(number.size() != n){
        check = false;
    }
    if(check == false){
        cout<<"NO";
    }else "YES";
}
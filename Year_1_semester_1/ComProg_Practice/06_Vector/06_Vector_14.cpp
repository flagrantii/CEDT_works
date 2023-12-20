#include<bits/stdc++.h>
using namespace std;

vector<int> v;

void tovec(int num) {
    bool ck = true;
    for(auto i=v.begin(); i!=v.end(); i++) {
        if(num == *i) {
            ck=false;
            break;
        }
    }
    if(ck){
        v.push_back(num);
    }
}

main(){
    string str;
    getline(cin,str);
    int num=0;

    for(int i=0;i<str.length();i++) {
        if(str[i]==' '){
            tovec(num);
            num=0;
        }
        else{
            num*=10;
            num+=str[i]-'0';
        }
        if(str[i+1]=='\0') {
            tovec(num);
            num = 0;
        }
    }
    sort(v.begin(),v.end());

    int ten = min(10,int(v.size()));
    
    cout<<v.size()<<"\n";

    for(int i=0;i<ten;i++){
        cout<<v[i]<<" ";
    }
}
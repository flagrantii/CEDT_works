#include<bits/stdc++.h>
using namespace std;

vector<string> v;
vector<string> save;

main(){
    string line;
    getline(cin,line);
    line = line+'$';

    for(int i=0;i<line.length();i++){
        v.push_back(line);

        char first = line[0];
        for(int j=0;j<line.length()-1;j++){
            line[j]=line[j+1];
        }
        line[line.length()-1] = first;
    }

    sort(v.begin(),v.end());

    for(auto i:v){
        cout<<i[i.length()-1];
    }
}
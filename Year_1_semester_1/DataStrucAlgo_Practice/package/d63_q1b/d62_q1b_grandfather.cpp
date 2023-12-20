#include<algorithm>
#include<iostream>
#include<map>
using namespace std;

map<string,string> family;

main(){
    int n,m;cin>>n>>m;
    for(int i=0;i<n;i++){
        string f,s;
        cin>>f>>s;
        family.insert({s,f});
    }

    for(int i=0;i<m;i++){
        string sq1,sq2,fq1,fq2,gq1,gq2;
        cin>>sq1>>sq2;
        (family.find(sq1) != family.end()) ? fq1 = family[sq1]:fq1="A";
        (family.find(sq2) != family.end()) ? fq2 = family[sq2]:fq2="B";
       
        (family.find(fq1) != family.end()) ? gq1 = family[fq1]:gq1="C";
        (family.find(fq2) != family.end()) ? gq2 = family[fq2]:gq2="D";
        if(gq1 == gq2 and sq1 != sq2){
            cout<<"YES";
        }else cout<<"NO";
        cout<<"\n";
    }

}
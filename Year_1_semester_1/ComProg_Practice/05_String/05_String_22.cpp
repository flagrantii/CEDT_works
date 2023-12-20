#include<bits/stdc++.h>
using namespace std;
main(){
    string x,y;
    cin>>x>>y;

    string x2=x;
    string y2=y;
    int xlen2=x.length();
    int ylen2=y.length();

    int max=-1;
    string ans;

    int xlen=x.length();
    int ylen=y.length();
    bool check;
    //x check
    for(int i=0;i<y.length();i++){
        int count=0;
        for(int j=0;j<xlen;j++){
            if(x[j]==y[j]){
                count++;
            }
        }
        if(count>max){
            max=count;
            ans=x;
            check=false;
        }
        x="-"+x;
        xlen++;
    }

    //y check
    for(int i=0;i<x2.length();i++){
        int count=0;
        for(int j=0;j<ylen2;j++){
            if(y2[j]==x2[j]){
                count++;
            }
        }
        if(count>max){
            max=count;
            ans=y2;
            check=true;
        }
        y2="-"+y2;
        ylen2++;
    }

    if(check==false){
        cout<<ans<<"\n"<<y<<"\n"<<max<<"\n";
    }else if(check==true) cout<<x2<<"\n"<<ans<<"\n"<<max<<"\n";

}
#include<bits/stdc++.h>
using namespace std;

vector<tuple<double ,int,double,double>> v;
main(){
    int n;
    cin>>n;
    for(int i=1;i<n+1;i++){
        double xvalue,yvalue;
        cin>>xvalue>>yvalue;

        double leng = sqrt(pow(xvalue,2)+pow(yvalue,2));
        v.push_back(make_tuple(leng,i,xvalue,yvalue));
    }
    
    sort(v.begin(),v.end());
    auto ans = v[2];
    cout<<"#"<<get<1>(ans)<<": ("<<get<2>(ans)<<", "<<get<3>(ans)<<")";
}
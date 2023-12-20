#include<bits/stdc++.h>
using namespace std;
main(){
    double u,rad,t;
    cin>>u>>rad>>t;
    rad=rad/360;
    double si_rad=sin(rad);
    double co_rad=cos(rad);

    double h = (t-((u*si_rad)/10))*(u*si_rad+(5*(t-(3*((u*si_rad)/10)))));
    double r = u*co_rad*t;

    cout<<round(h*10)/10<<" "<<round(r*10)/10<<"\n";
    cout<<70.7/100<<" "<<cos(60);
}
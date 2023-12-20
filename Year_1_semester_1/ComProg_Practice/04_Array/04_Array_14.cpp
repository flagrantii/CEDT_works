#include<bits/stdc++.h>
using namespace std;
main(){
    int hei,wei;
    cin>>hei>>wei;
    double arr[hei][wei];

    for(int i=0;i<hei;i++){
        for(int j=0;j<wei;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<hei;i++){
        for(int j=0;j<wei;j++){
            double sum;
            if(i!=0 and i!=hei-1 and j!=0 and j!=wei-1){
                sum=
                arr[i-1][j-1]+arr[i-1][j]+arr[i-1][j+1]+
                arr[i][j-1]+arr[i][j]+arr[i][j+1]+
                arr[i+1][j-1]+arr[i+1][j]+arr[i+1][j+1];
                sum/=9;
                cout<<round(sum*100)/100.0<<" ";
            }
        }
        cout<<"\n";
    }

}
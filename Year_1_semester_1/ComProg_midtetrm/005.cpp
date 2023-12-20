#include<bits/stdc++.h>
using namespace std;
main(){
    int num;
    cin>>num;
    int start[num];
    int end[num];
    int max_time=-1;

    for(int i=0;i<num;i++){
        cin>>start[i]>>end[i];
        max_time = max(max_time,end[i]);
    }

    int max_count=0;
    for(double i=0.5;i<max_time+0.5;i++){
        int count=0;
        for(int j=0;j<num;j++){
            if(i>start[j] and i<end[j]){
                count++;
            }
        }
        max_count = max(max_count,count);
    }
    cout<<max_count;

}
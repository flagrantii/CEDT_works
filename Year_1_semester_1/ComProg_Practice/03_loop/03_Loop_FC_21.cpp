#include<bits/stdc++.h>
using namespace std;

main() {
    int num; 
    cin >> num;

    int arr[num], cornerRigth[num],cornerLeft[num];

    for(int i=0;i<num;i++) {
        cin>>arr[i];
        if(i==0){
           cornerLeft[i] = arr[i]; 
        }else cornerLeft[i] = max(cornerLeft[i-1], arr[i]);
        
    }
    for(int i=num-1;i>=0;i--) {
        if(i==num-1){
            cornerRigth[i] = arr[i];
        }else cornerRigth[i] = max(cornerRigth[i+1], arr[i]);
    }

    int sum=0;

    for(int i=1;i<num-1;i++) {
        sum+=min(cornerLeft[i], cornerRigth[i])-arr[i];
    }
    cout<<sum;

}
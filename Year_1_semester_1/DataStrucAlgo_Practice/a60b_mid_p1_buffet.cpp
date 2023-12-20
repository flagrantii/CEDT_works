#include<bits/stdc++.h>
using namespace std;

main(){
    int f,w,n;
    cin>>f>>w>>n;
    int arr[f];
    for(int i=0;i<f;i++){
        cin>>arr[i];
    }
    sort(arr,arr+f);

    int num=-w,ans=0;
    for(int i=0;i<f;i++){
        if (arr[i] <= num + w) continue;
            num = arr[i] + w;
            ans++; 
    }
    cout<<ans;
}
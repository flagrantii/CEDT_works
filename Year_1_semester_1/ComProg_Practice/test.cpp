#include<bits/stdc++.h>
using namespace std;
main(){
    int n,sum=0;
    cin>>n;
    int arr[n][n];
    int k=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=k;
            k++;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\t";
        for(int j=0;j<n;j++){
            if(i==0 or i==n-1 or j==0 or j==n-1){
                cout<<arr[i][j]<<" ";
                sum+=arr[i][j];
            }else cout<<"  ";
        }
        cout<<"\n";
    }
    cout<<sum;

}

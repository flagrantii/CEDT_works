#include<bits/stdc++.h>
using namespace std;
main(){
    int num;
    cin>>num;
    int arr[num];
    int doub=(((num*num)-1)*((num*num)-2))/2;
    int checkZero;

    for(int i=0;i<num*num;i++){
        cin>>arr[i];
        if(arr[i]==0){
            checkZero=i/num;
        }
    }

    int count=0;
    for(int i=0;i<(num*num);i++){
       for(int j=i;j<(num*num);j++){
            if(arr[i]>arr[j] and arr[i]!=0 and arr[j]!=0){
                count++;
                
            }
            cout<<arr[i]<<" "<<arr[j]<<"\n";
        }
    }

    if(num%2==0){
        if(count%2!=0 and checkZero%2==0){
            cout<<"YES";
        }else if(count%2==0 and checkZero%2!=0){
            cout<<"YES";
        }else cout<<"NO";
    }else if(num%2!=0 and count%2==0){
        cout<<"YES";
    }else cout<<"NO";
    
}
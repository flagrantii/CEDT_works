#include<bits/stdc++.h>
using namespace std;

void Swap(int arr[], int maxIndex) {
    int start=0;
    // Swap the elements within the specified range
    while (start < maxIndex) {
        int temp = arr[start];
        arr[start] = arr[maxIndex];
        arr[maxIndex] = temp;
        start++;
        maxIndex--;
    }
}

main(){
    int num;
    cin>>num;
    int arr[num];
    int check[num];
    for (int i = 0; i <num; i++){
        cin>>arr[i];
        check[i]=arr[i];
    }
    sort(check,check+num);

    for (int i = 0; i <num; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    
    for(int i=num-1;i>=0;i--){
        if(arr[i]!=check[i]){
            int max=-1;
            int maxIndex;
            for(int j=0;j<i;j++){
                if(arr[j]>max){
                    max=arr[j];
                    maxIndex=j;
                }
            }

            if(maxIndex!=0){
                Swap(arr,maxIndex);
                for(int j=0;j<num;j++){
                    cout<<arr[j]<<" ";
                }
                cout<<"\n";
            }

            Swap(arr,i);
            for(int j=0;j<num;j++){
                cout<<arr[j]<<" ";
            }
            cout<<"\n";

        }else if(arr==check){
            for(int j=0;j<num;j++){
                cout<<arr[j]<<" ";
            }
        }

    }
}
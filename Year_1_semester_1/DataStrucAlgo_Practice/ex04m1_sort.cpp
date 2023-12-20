#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int n;cin >> n;
//     int num;
//     int arr[4] = {0};
//     int chk[4][4] = {0,0};
//     int number[n+1];
//     int count=0;
    
//     for(int i = 1; i <= n; i++){
//         cin >> num;
//         number[i] = num;
//         if(num == 1) arr[1]++;
//         else if(num == 2) arr[2]++;
//         else arr[3]++;
//     }

//     for(int i = 1; i <= arr[1]; i++){
//         if(number[i] == 1) chk[1][1]++;
//         else if(number[i] == 2) chk[1][2]++;
//         else chk[1][3]++;
//     }

//     for(int i = arr[1]+1; i <= arr[1] + arr[2]; i++){
//         if(number[i] == 1) chk[2][1]++;
//         else if(number[i] == 2) chk[2][2]++;
//         else chk[2][3]++;
//     }

//     for(int i = arr[1] + arr[2]+1; i <= n; i++){
//         if(number[i] == 1) chk[3][1]++;
//         else if(number[i] == 2) chk[3][2]++;
//         else chk[3][3]++;
//     }

//     if(chk[1][2] >= chk[2][1]){
//         count = chk[1][2] + chk[1][3] + chk[2][3];
//     }else{
//         count = chk[2][1] + chk[2][2] + chk[3][1];
//     }

//     cout << count;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

main(){
    int n, num, ans;
    cin >> n;
    int number[n+1], arr[4]={0}, chk[4][4]={0,0};

    for(int i = 1; i <= n; i++){
        cin >> num;
        number[i] = num;
        if(num == 1) arr[1]++;
        else if(num == 2) arr[2]++;
        else arr[3]++;
    }
    
    for(int i = 1; i <= arr[1]; i++){
        if(number[i] == 1) chk[1][1]++;
        else if(number[i] == 2) chk[1][2]++;
        else chk[1][3]++;
    }
    
    for(int i = arr[1]+1; i <= arr[1]+arr[2]; i++){
        if(number[i] == 1) chk[2][1]++;
        else if(number[i] == 2) chk[2][2]++;
        else chk[2][3]++;
    }
    
    for(int i = arr[1]+arr[2]+1; i <= n; i++){
        if(number[i] == 1) chk[3][1]++;
        else if(number[i] == 2) chk[3][2]++;
        else chk[3][3]++;
    }
    
    if(chk[1][2] >= chk[2][1]){
        ans = chk[1][2] + chk[1][3] + chk[2][3];
    }else ans = chk[2][1] + chk[3][1] + chk[3][2];
    
    cout << ans;
}
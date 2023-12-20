#include<bits/stdc++.h>
using namespace std;

int day[100001];
int daymoney[100001];

int main(){
    std::ios_base::sync_with_stdio(false);std::cin.tie(0);
    int n,m,start;
    cin>>n>>m>>start;
    
    while(n--){
        int a,b;
        cin>>a>>b;
        daymoney[a] = b;
    }
    
    day[0]= start;
    int num = start;
    for(int i=1;i<100001;i++){
        if(daymoney[i] != 0){
            num = daymoney[i];
        }
        day[i] = day[i-1]+num;
    }

    while (m--)
    {
        int price,resetday;
        cin>>price>>resetday;
        int count = price+day[resetday];
        if(price <= day[resetday]){
            count = price;
        }
        cout<<lower_bound(day,day+100001,count)-day<<" ";
    }
    return 0;
}
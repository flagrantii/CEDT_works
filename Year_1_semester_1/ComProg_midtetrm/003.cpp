#include<bits/stdc++.h>
using namespace std;
main(){
    int num;
    cin>>num;
    string grade_point[num];
    int num_grade[num];
    double sum=0;
    double amount_sum=0;

    string check[]={"A", "B+", "B", "C+", "C", "D+", "D", "F"};
    double check_num[]={4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0.0};

    for(int i=0;i<num;i++){
        string grade;
        int num;
        cin>>grade>>num;
        amount_sum+=num;
        for(int j=0;j<8;j++){
            if(grade==check[j]){
                sum+=check_num[j]*num;
            }
        }
    }
    double ans = sum/amount_sum
    cout<<round(ans*100)/100;
}
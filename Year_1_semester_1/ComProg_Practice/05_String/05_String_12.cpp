#include<bits/stdc++.h>
using namespace std;


main() {
    string sum ="0";
    while(1){
        string num; 
        cin>>num;
        if(num=="END") break;

        int k=0;
        if(num.length()>sum.length()) {
            int len=num.length()-sum.length();
            string ch="";
            while(len--) {
                ch.push_back('0');
            }
            sum.insert(0,ch);
        }
        else if(num.length() < sum.length()) {
            int len = sum.length()-num.length();
            string ch = "";
            while(len--) {
                ch.push_back('0');
            }
            num.insert(0, ch);
        }

        for(int i=num.length()-1; i>=0; i--) {
            int plus=(sum[i]-'0')+(num[i]-'0')+k;
            sum[i] = (plus%10 + '0');
            k = plus/10;
            if(k>0 and i == 0) {
                string ch="";
                ch.push_back(k+'0');
                sum.insert(0, ch);
            }
        }
    }
    cout << sum << endl;
}
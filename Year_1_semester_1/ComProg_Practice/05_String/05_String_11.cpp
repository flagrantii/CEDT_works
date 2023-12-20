#include<bits/stdc++.h>
using namespace std;

bool isSpecial(char c) {
    char arr[] =    {'$', '!', '@', '%', '^', '#', '&', '+', '*', '/', '=', '_', ':', ';', '[', ']', '{', '}', '(', ')', '>', 
                    '<', '?'};
    for(auto i : arr) {
        if(c == i) return true;
    }
    return false;
}

main() {

	string str;

	while(getline(cin, str)){
		bool count = false;
		
		for(auto n: str){
			if(isSpecial(n)){
                count = !count;
                continue;
	
			}
            if(count){
            	cout<<n;
        	}
		}
		cout<<"\n";
	}

}
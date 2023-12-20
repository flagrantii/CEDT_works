#include <iostream>
#include <vector>
using namespace std;

vector<string> split(string line, char delimiter) {
    vector<string> v;
    string save_string;
    for(auto i=0;i<line.length();i++){
        if(line[i] == delimiter) continue;
        if(line[i+1] == delimiter or line[i+1] == '\0'){
            save_string.push_back(line[i]);
            v.push_back(save_string);
            save_string.clear();
        }
        else if(line[i]!= delimiter){
            save_string.push_back(line[i]);
        }
    }
    return v;
}
int main() {
 string line;
 getline(cin, line);
 string delim;
 getline(cin, delim);
 for (string e : split(line, delim[0])) {
 cout << '(' << e << ')';
 }
}
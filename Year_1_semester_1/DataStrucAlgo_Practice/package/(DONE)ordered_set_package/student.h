#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v=A;
    for(auto &i:B){
        if(find(v.begin(),v.end(),i)==v.end()){
            v.push_back(i);
        }
    }
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    unordered_set<T> setB(B.begin(), B.end());
    for (auto& i : A) {
        if (setB.count(i)) {
            v.push_back(i);
        }
    }
    return v;
}

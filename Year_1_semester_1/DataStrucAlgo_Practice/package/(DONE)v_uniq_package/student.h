#ifndef __STUDENT_H_
#define __STUDENT_H_
//you can include any other file here
//you are allow to use any data structure
#include <set>
#include <algorithm>
#include <vector>

template <typename T>
void CP::vector<T>::uniq() {
    std::set<T> s;
    CP::vector<T> v;
    for (auto& x : *this) {
        if (s.find(x) == s.end()) {
            v.push_back(x);
        }
    }
    *this = v;
}

#endif

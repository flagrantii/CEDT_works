#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
#include "queue.h"
#include <algorithm>

template <typename T>
void CP::queue<T>::remove_many(std::vector<size_t> pos)
{
  sort(pos.begin(),pos.end());
  queue<T> ans;
  int n = mSize;
  int j=0;
  for(size_t i=0;i<n;i++){
    if(i==pos[j]){
      j++;
    }else{
      ans.push(mData[mFront]);
    }
    this->pop();
  }
  ans.mSize = n-pos.size();

  *this = ans;
}
  // your code here

#endif

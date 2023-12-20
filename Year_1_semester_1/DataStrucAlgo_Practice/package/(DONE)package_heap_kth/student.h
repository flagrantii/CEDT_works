#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
  //write your code here
  //can include anything
  T arr[7];
  int i;
  for(i = 0;i < mSize and i<7;i++){
    arr[i]=mData[i];
  }
  std::sort(arr,arr+i,mLess);
  return arr[i-k];
}

#endif

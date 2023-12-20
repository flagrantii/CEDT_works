#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <cassert>
#include <algorithm>

template <typename T>
void CP::queue<T>::reverse(int a,int b) {
  //write your code here
  while (a<b)
  {
    std::swap(mData[(mFront+a)%mCap],mData[(mFront+b)%mCap]);
    a++;b--;
  }
  
}

#endif

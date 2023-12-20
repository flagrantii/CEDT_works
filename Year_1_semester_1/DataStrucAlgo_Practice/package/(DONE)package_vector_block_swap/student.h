#ifndef __STUDENT_H_
#define __STUDENT_H_
#include<algorithm>

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  if(!(a >= begin() and a <= end() 
  and b >= begin() and b <= end() 
  and a+m-1 >= begin() and a+m-1 < end()
  and b+m-1 >= begin() and b+m-1 < end() 
  and m > 0 
  and (a+m-1 < b or b+m-1 < a))){
    return false;
  }else{
    while (m--){
      std::swap(*a,*b);
      a++;
      b++;
    }
    return true;
  }
}

#endif

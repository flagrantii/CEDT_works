#ifndef __STUDENT_H_
#define __STUDENT_H_
#include<algorithm>


template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  std::sort(data.begin(),data.end());
  auto it = *this;
  this->clear();
  int index=0;

  for(int i=0;i<=it.size();i++){
    if(index < data.size() && data[index].first == i){
      this->push_back(data[index++].second);
    }
    if(i < it.size()){
      this->push_back(it[i]);
    }
  }
}

#endif

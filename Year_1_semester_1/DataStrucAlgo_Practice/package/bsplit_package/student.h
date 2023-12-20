#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename KeyT,
          typename MappedT,
          typename CompareT >
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {
  CP::map_bst<KeyT, MappedT, CompareT> result;
  node *ans = mRoot, *temp, *store;
  while (ans != nullptr) {
    if (mLess(ans->data.first, val)) {
      ans = ans->right;
    } else {
      temp = ans->left;

      if (ans == mRoot) {
        mRoot = temp;
        ans->left = nullptr;
        temp->parent = nullptr;
      } else {
        ans->parent->left = temp;
        temp->parent = ans->parent;
        ans->left = nullptr;
      }

      if (result.mRoot == nullptr) {
        result.mRoot = ans;
        ans->parent = nullptr;
      } else {
        ans->parent = temp;
        store->left = ans;
      }
      store = ans;
      ans = temp;
    }
  }
  return result;
}

#endif

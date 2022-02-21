#include <iostream>
#include "d_tnodel.h"

using namespace std;

template<typename T>
class oneChild{
public:
    void countOneChildt(tnode<T>*parent, int &children);
};

template <typename T>
void countOneChild(tnode<T>*parent, int &children){
if(parent->left == nullptr && parent->right != nullptr){
children++;
countOneChild(parent->right, children);
}
if(parent->left != nullptr && parent->right != nullptr){
countOneChild(parent->right, children);
countOneChild(parent->left, children);
}
if(parent->left != nullptr && parent->right == nullptr){
children++;
countOneChild(parent->left, children);
}
}



#include <iostream>
#include "countOneChild.h"
using namespace std;

int main(){
    srand(time(0));
    int children = 0;
    oneChild<char> one;
    tnode<char> *root = buildTree(2);
    countOneChild(root,children);
    cout << children << endl;
    displayTree(root, 2);
    return 0;
}

#include <iostream>
#include "max.h"
using namespace std;

int main(){
    srand(time(0));
    int highest = 0;
    tnode<int> *head = buildIntTree<int>(2);
    maxVal(head, highest);
    cout << highest << endl;
    displayTree(head, 10);
    return 0;
}

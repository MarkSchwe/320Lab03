#include <iostream>
#include "d_tnodel.h"

void maxVal(tnode<int> *parent, int &highest){
if(parent->nodeValue > highest && parent != nullptr){
    highest = parent->nodeValue;
}
if(parent->left == nullptr && parent->right != nullptr){
maxVal(parent->right, highest);
}
if(parent->left != nullptr && parent->right != nullptr){
maxVal(parent->left, highest);
maxVal(parent->right, highest);
}
if(parent->left != nullptr && parent->right == nullptr){
maxVal(parent->left, highest);
}
}

//USES BUILDTREE AS A TEMPLATE, USES int INSTEAD OF CHAR, posted it here just in case, even if it isnt entirely my own work, it is derivative of a program given to us, 
//but I might as well mention it here to be transparent.

template<typename T>
tnode<int>* buildIntTree(int n){
// 9 tnode pointers; points to the 9 items in the tree
	tnode<int> *root, *b, *c, *d, *e, *f, *g, *h, *i;
	// parameter n specifies a tree in the range 0 - 2
	switch(n)
	{
		// nodes d and e are leaf nodes
		case 0:
			d = new tnode<int> (rand()%50);
			e = new tnode<int> (rand()%50);
			b = new tnode<int> (rand()%50,(tnode<int> *)NULL, d);
			c = new tnode<int> (rand()%50,e, (tnode<int> *)NULL);
			root = new tnode<int> (rand()%50,b, c);
			break;
		// nodes g, h, i, and d are leaf nodes
		case 1:
			g = new tnode<int> ();
			h = new tnode<int> (rand()%50);
			i = new tnode<int> (rand()%50);
			d = new tnode<int> (rand()%50);
			e = new tnode<int> (rand()%50,g, (tnode<int> *)NULL);
			f = new tnode<int> (rand()%50,h, i);
			b = new tnode<int> (rand()%50,d, e);
			c = new tnode<int> (rand()%50,(tnode<int> *)NULL, f);
			root = new tnode<int> (rand()%50,b, c);
			break;
		// nodes g, h, i and f are leaf nodes
		case 2:
			g = new tnode<int> (rand()%50);
			h = new tnode<int> (rand()%50);
			i = new tnode<int> (rand()%50);
			d = new tnode<int> (rand()%50,(tnode<int> *)NULL, g);
			e = new tnode<int> (rand()%50,h, i);
			f = new tnode<int> (rand()%50);
			b = new tnode<int> (rand()%50,d, (tnode<int> *)NULL);
			c = new tnode<int> (rand()%50,e, f);
			root = new tnode<int> (rand()%50,b, c);
			break;
	}
	return root; 
}

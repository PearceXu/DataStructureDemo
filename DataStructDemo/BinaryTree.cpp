#include "stdafx.h"
#include "BinaryTree.h"
#include <stack>


template<class T> BinaryTree<T>::BinaryTree(BinaryTree<T>& tree)
{
}

template<class T>BinaryTree<T>::preOrder(BinTreeNode<T>* subTree, void(*visit)(BinaryTree<T>* p)
{	
	std::stack<BinaryTree<T>> stack;
	stack.push(NULL);
	while (p != NULL)
	{
		if (p->rightChild != Null)
		{
			stack.push(p->rightChild);
		}

		if (p->leftChild != NULL) 
		{
			p = p->leftChild;
		}
		else 
		{
			visit(p);
			stack.pop(p);
		}

	}

	
}
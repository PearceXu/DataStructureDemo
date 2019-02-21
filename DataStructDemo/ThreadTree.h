#pragma once

template <class T> class ThreadNode {
	int lTag, rTag;
	ThreadNode<T> leftChild, rightChild;
	T data;
	ThreadNode(const T item):data(item),leftChild(NULL),rightChild(NULL),lTag(0),rTag(0) {}
};

/**
*
* ÏßË÷¶þ²æÊ÷
*/

template <class T> class ThreadTree
{
public:
	ThreadTree() root(NULL);
	~ThreadTree();
protected:
	ThreadNode<T>* root;
	void createInThread();
	ThreadNode<T> parent(ThreadNode<T>* t);

public:
	void createInThread();
	ThreadNode<T>* First(ThreadNode<T>* current);
	ThreadNode<T>* Last(ThreadNode<T>* current);
	ThreadNode<T>* Next(ThreadNode<T>* current);
	ThreadNode<T>* Prior(ThreadNode<T>* current);

	void inOrder(void(*visit)(ThreadNode<T>* p));
	void preOrder(void(*visit)(ThreadNode<T>* p));
	void postOrder(void(*visit)(ThreadNode<T>* p));

};


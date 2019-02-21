#include "stdafx.h"
#include "ThreadTree.h"

template<class T>
ThreadTree::ThreadTree()
{
}

template<class T>
ThreadTree::~ThreadTree()
{
}

template<class T>
void ThreadTree<T>::createInThread()
{
}

template<class T>
ThreadNode<T>* ThreadTree<T>::First(ThreadNode<T>* current)
{
	return nullptr;
}

template<class T>
ThreadNode<T>* ThreadTree<T>::Last(ThreadNode<T>* current)
{
	return nullptr;
}

template<class T>
ThreadNode<T>* ThreadTree<T>::Next(ThreadNode<T>* current)
{
	return nullptr;
}

template<class T>
ThreadNode<T>* ThreadTree<T>::Prior(ThreadNode<T>* current)
{
	return nullptr;
}

template<class T>
void ThreadTree<T>::inOrder(void(*visit)(ThreadNode<T>*p))
{
}

template<class T>
void ThreadTree<T>::preOrder(void(*visit)(ThreadNode<T>*p))
{
}

template<class T>
void ThreadTree<T>::postOrder(void(*visit)(ThreadNode<T>*p))
{
}

template<class T>
ThreadNode<T> ThreadTree<T>::parent(ThreadNode<T>* t)
{
	return ThreadNode<T>();
}

#pragma once
/**
*
*
* 二叉树结构
*
*/
template<class T> 
struct BinTreeNode
{
	BinTreeNode<T>* leftChild, rightChild;
	T data;
	BinTreeNode() :leftChild(NULL), rightChild(NULL) {};
	BinTreeNode(T data, BinTreeNode<T>* l = NULL, BinTreeNode<T> r = NULL)
		:data(data) : leftChild(l), rightChild(r) {};
}; 

template <class T> class BinaryTree
{

public:
	BinaryTree(T value) :RefValue(value), root(NULL) {};
	BinaryTree(BinaryTree<T>& tree);// 复制构造
	~BinaryTree() {destory(root)};

protected:
	BinTreeNode<T>* root;
	T RefValue;
	int Height(BinTreeNode<T>* current);
	int Size(BinTreeNode<T>* current);

	void inOrder(BinTreeNode<T>* subTree, void(*visit)(BinaryTree<T>* p);
	void preOrder(BinTreeNode<T>* subTree,void(*visit)(BinaryTree<T>* p);
	void postOrder(BinTreeNode<T>* subTree, void(*visit)(BinaryTree<T>* p);
	void levelOrder(BinTreeNode<T>* subTree, void(*visit)(BinaryTree<T>* p);
	
public:
	void destory(BinTreeNode<T>* p);// 删除节点
	bool isEmpty() {return root == NULL};
	BinTreeNode<T>* parent(BinTreeNode<T>* current);
	BinTreeNode<T>* leftChild(BinTreeNode<T>* current);
	BinTreeNode<T>* rightChild(BinTreeNode<T>* current);
	int height() { return Height(root) }
	int size() {Size(root)}
	BinTreeNode<T>* getRoot() { return root; }

	int insert(T t);
	BinTreeNode<T>* find(T& t);

	void delete(T t);
	void inOrder(void(*visit)(BinaryTree<T>* p)) { inOrder(root, visit); }
	void preOrder(void(*visit)(BinaryTree<T>* p)) { preOrder(root, visit); }
	void postOrder(void(*visit)(BinaryTree<T>* p)) { postOrder(root, visit); }
	void levelOrder(void(*visit)(BinaryTree<T>* p)) { levelOrder(root, visit); }


};


#include <iostream>
using namespace std;

struct TreeNode {
	int data;
	TreeNode* leftChild;
	TreeNode* rightChild;
};

class binaryTree {
private:
	TreeNode* root;

	binaryTree(); //������
	~binaryTree(); //�Ҹ���
	void Destroy(TreeNode*& tree);

	void insertItem(int item); //����
	void insert(TreeNode*& tree, int item);

	void deleteItem(int item); //����
	void remove(TreeNode*& tree, int item);

	void inorderTraverse();
	void inorderTraverse();
	void inorderTraverse();

	void inorder(TreeNode* treePtr); 
	void preorder(TreeNode* treePtr);
	void postorder(TreeNode* treePtr);

	int getCount();
	int count(TreeNode* treePtr);

	int getHeight();
	int height(TreeNode* treePtr);

	TreeNode* findMin(TreeNode* tree); //�ּҰ�ã��


};

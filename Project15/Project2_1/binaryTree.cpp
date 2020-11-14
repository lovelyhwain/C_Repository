#include "binaryTree.h"

binaryTree::binaryTree(){
	root = NULL;
}

binaryTree::~binaryTree() {
	Destroy(root);
}

void binaryTree::Destroy(TreeNode*& tree) {
	if (tree != NULL) {
		Destroy(tree->leftChild);
		Destroy(tree->rightChild);
		delete tree;
	}
}

void binaryTree::insertItem(int item) {
	insert(root, item);
}

void binaryTree::insert(TreeNode*& tree, int item) {
	if (tree == NULL) {
		tree = new TreeNode;
		tree->leftChild = tree->rightChild = NULL;
		tree->data = item;
	}
	else if (item < tree->data)
		insert(tree->leftChild, item);
	else 
		insert(tree->rightChild, item);
}

void binaryTree::deleteItem(int item) {
	remove(root, item);
}

void binaryTree::remove(TreeNode*& tree, int item) {
	if (item < tree->data) {
		remove(tree->leftChild, item);
	}
	else if (item > tree->data) {
		remove(tree->rightChild, item);
	}
	else {
		TreeNode* tmpPtr;
		if (tree->leftChild == NULL) {
			tmpPtr = tree;
			tree = tree->rightChild;
			delete tmpPtr;
		}
		else if (tree->rightChild == NULL) {
			tmpPtr = tree;
			tree = tree->leftChild;
			delete tmpPtr;
		}
		else {
			tmpPtr = tree->rightChild;
			while (tree->leftChild != NULL)
				tmpPtr = tmpPtr->leftChild;
			tree->data = tmpPtr->data;
			remove(tree->rightChild, tree->data);
		}
	}	
}


void binaryTree::inorderTraverse() {
	inorder(root);
}
void binaryTree::inorderTraverse() {
	preorder(root);
}
void binaryTree::inorderTraverse() {
	postorder(root);
}

void binaryTree::inorder(TreeNode* treePtr) {
	if (treePtr != NULL) {
		inorder(treePtr->leftChild);
		printf("%d", treePtr->data);
		inorder(treePtr->rightChild);
	}
}

void binaryTree::preorder(TreeNode* treePtr) {
	if (treePtr != NULL) {
		printf("%d", treePtr->data);
		preorder(treePtr->leftChild);
		preorder(treePtr->rightChild);
	}
}

void binaryTree::postorder(TreeNode* treePtr) {
	if (treePtr != NULL) {
		postorder(treePtr->leftChild);
		postorder(treePtr->rightChild);
		printf("%d", treePtr->data);
	}
}


int binaryTree::getCount() {
	return count(root);
}

int binaryTree::count(TreeNode* treePtr) {
	if (treePtr == NULL) {
		return 0;
	}
	else {
		return 1 + count(treePtr->leftChild);
				 + count(treePtr->rightChild);
	}

}

int binaryTree::getHeight() {
	return height(root);
}

int binaryTree::height(TreeNode* treePtr) {
	if (treePtr == NULL) {
		return 0;
	}
	else {
		int hLeft = height(treePtr->leftChild);
		int hRight = height(treePtr->rightChild);
		return (hRight > hLeft) ? hLeft + 1 : hRight + 1;
	}}


TreeNode* binaryTree::findMin(TreeNode* tree) {
	while (tree->leftChild != NULL)
		tree = tree->leftChild;
	return tree;
}
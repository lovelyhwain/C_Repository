#include "Tree.h"

int main(void) {
	BSearchTree bstree;
	
	bstree.insertdata(50);
	bstree.insertdata(30);
	bstree.insertdata(40);
	bstree.insertdata(20);
	bstree.insertdata(25);
	bstree.insertdata(60);
	bstree.insertdata(70);
	bstree.insertdata(58);
	bstree.insertdata(65);
	bstree.insertdata(68);
	bstree.insertdata(80);

	//Node* node = bstree.searchdata(40);
	//printf("찾는데 몇 번 순회?: %d\n", bstree.getVisitCount());

	printf("===================================================\n");
	printf("bstree.preorder() : \n");
	bstree.preorder();
	printf("===================================================\n");
	printf("bstree.inorder() : \n");
	bstree.inorder();
	printf("===================================================\n");
	printf("bstree.postorder() : \n");
	bstree.postorder();

		return 0;
	
}
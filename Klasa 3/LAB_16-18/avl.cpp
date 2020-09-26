#include <iostream>
//#include "bst.h"

using namespace std;


using Data = int;

struct BSTNode
{
	Data data;
	BSTNode * left;
	BSTNode * right;
	int height;
	int count;
};





bool dataLess(Data data_1, Data data_2)
{
	//implementacja dla Data == int

	if (data_1 < data_2)
		return true;

	return false;
}


bool dataLessEqual(Data data_1, Data data_2)
{
	//implementacja dla Data == int

	if (data_1 <= data_2)
		return true;

	return false;
}

Data dataEqual(Data data_1, Data data_2)
{

	if (data_1 == data_2)
		return true;

	return false;
}

Data dataGreater(Data data_1, Data data_2)
{

	if (data_1 > data_2)
		return true;

	return false;
}

Data dataGreaterEqual(Data data_1, Data data_2)
{

	if (data_1 >= data_2)
		return true;

	return false;
}


Data copyData(Data data)
{
	return data;
}




void printData(Data data)
{
	cout << data;
}


void printBST(BSTNode* root, int space)
{
	int step = 10;

	space += step;

	if (root != nullptr)
	{

		if (root->right != nullptr)
			printBST(root->right, space);

		cout << endl;

		for (int i = step; i < space; i++)
			cout << " ";

		printData(root->data);
		cout << "(" << root->count << ")";


		if (root->left != nullptr)
			printBST(root->left, space);

	}
}


BSTNode* searchBST(Data data, BSTNode* root)
{
	if (root != nullptr)
	{
		if (data == root->data)
			return root;
		if (dataLess(data, root->data))
			return searchBST(data, root->left);
		else
			return searchBST(data, root->right);
	}
	else return nullptr;
}



void destroy_tree(BSTNode* root)
{
	if (root != nullptr)
	{
		destroy_tree(root->left);
		destroy_tree(root->right);
		delete root;
	}
}


int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}


int height(BSTNode* root)
{
	if (root == nullptr)
		return 0;
	return root->height;
}

struct BSTNode* rightRotate(BSTNode* y)
{
	struct BSTNode* x = y->left;
	struct BSTNode* T2 = x->right;

	x->right = y;
	y->left = T2;


	y->height = max(height(y->left), height(y->right)) + 1;
	x->height = max(height(x->left), height(x->right)) + 1;

	return x;
}

BSTNode* leftRotate(BSTNode* x)
{
	BSTNode* y = x->right;
	BSTNode* T2 = y->left;

	y->left = x;
	x->right = T2;

	x->height = max(height(x->left), height(x->right)) + 1;
	y->height = max(height(y->left), height(y->right)) + 1;

	return y;
}

int balance(BSTNode* root)
{
	if (root == nullptr)
		return 0;
	return height(root->left) - height(root->right);
}



BSTNode* insertBST(BSTNode* root, Data data)
{
	if (root == nullptr)
	{
		root = new BSTNode;
		root->data = copyData(data); //71
		root->left = nullptr;
		root->right = nullptr;
		root->height = 1;
		root->count = 1;
		return root;
	}

	
	if (data == root->data) 
	{
		(root->count)++;
		return root;
	}

	if (data < root->data)
		root->left = insertBST(root->left, data);
	else
		root->right = insertBST(root->right, data);

	root->height = max(height(root->left), height(root->right)) + 1; //140 //149

	int bal = balance(root); //185

	
	// Left Left Case 
	if (bal > 1 && data < root->left-> data)
		return rightRotate(root);

	// Right Right Case 
	if (bal < -1 && data > root->right->data)
		return leftRotate(root);

	// Left Right Case 
	if (bal > 1 && data > root->left->data) {
		root->left = leftRotate(root->left);
		return rightRotate(root);
	}

	// Right Left Case 
	if (bal < -1 && data < root->right->data) {
		root->right = rightRotate(root->right);
		return leftRotate(root);
	}

	return root;
}




int main()
{



	BSTNode* root = nullptr;


	root = insertBST(root, 10); //194
	root = insertBST(root, 15);
	root = insertBST(root, 7);
	root = insertBST(root, 3);
	root = insertBST(root, 9);
	root = insertBST(root, 17);
	root = insertBST(root, 12);
	root = insertBST(root, 11);
	root = insertBST(root, 10);
	root = insertBST(root, 16);
	root = insertBST(root, 18);
	root = insertBST(root, 20);

	//balance(root);


	printBST(root, 10);

	if (searchBST(11, root))
		cout << "Znalaz³em!\n\n";
	else
		cout << "Nie znalaz³em!\n\n";

	system("PAUSE");

	return 0;
}
#include <iostream>
#include <string>
using namespace std;


struct Osoba
{
	string name; 
	string surname;
	int age;
};


using Data = Osoba;

struct BSTNode
{
	Data data;
	BSTNode * left;
	BSTNode * right;
	int height;
	int count;
};



bool dataLess(int data_1, int data_2)
{
	//implementacja dla Data == int

	if (data_1 < data_2)
		return true;

	return false;
}


bool dataGreater(int data_1, int data_2)
{
	//implementacja dla Data == int

	if (data_1 > data_2)
		return true;

	return false;
}


bool dataEqual(int data_1, int data_2)
{

	if (data_1 == data_2)
		return true;

	return false;
}


int copyData(int data)
{
	return data;
}


void printData(int data)
{
	cout << data;
}


//OSOBA

bool dataLess(Osoba data_1, Osoba data_2)
{
	//implementacja dla Data == Osoba 

	// ewentualnie zamienic wszystkie znaki na male lub duze
	if (data_1.surname < data_2.surname)
	{
		return true;
	}
	else
	{
		if (data_1.surname == data_2.surname)
		{
			if (data_1.name < data_2.name)
			{
				return true;
			}
			else
			{
				if (data_1.name == data_2.name)
				{
					if (data_1.age < data_2.age)
					{
						return true;
					}
				}
			}

		}
	}

	return false;
}


bool dataGreater(Osoba data_1, Osoba data_2)
{
	//implementacja dla Data == Osoba

	// ewentualnie zamienic wszystkie znaki na male lub duze
	if (data_1.surname > data_2.surname)
	{
		return true;
	}
	else
	{
		if (data_1.surname == data_2.surname)
		{
			if (data_1.name > data_2.name)
			{
				return true;
			}
			else
			{
				if (data_1.name == data_2.name)
				{
					if (data_1.age > data_2.age)
					{
						return true;
					}
				}
			}

		}
	}

	return false;
}


bool dataEqual(Osoba data_1, Osoba data_2)
{

	if (data_1.name == data_2.name && data_1.surname == data_2.surname && data_1.age == data_2.age)
		return true;

	return false;
}


Osoba copyData(Osoba data)
{
	return{ data.name, data.surname, data.age };
}


void printData(Osoba data)
{
	cout << data.name << " " << data.surname << " ";
	cout << data.age << " ";
}








//kod drzewa

void printBST(BSTNode* root, int space, int step)
{
	//int step = 50;

	space += step;

	if (root != nullptr)
	{

		if (root->right != nullptr)
			printBST(root->right, space,step);

		cout << endl;

		for (int i = step; i < space; i++)
			cout << " ";

		printData(root->data);
		cout << "(" << root->count << ")";


		if (root->left != nullptr)
			printBST(root->left, space, step);

		cout << endl << endl;

	}
}


BSTNode* searchBST(Data data, BSTNode* root)
{
	if (root != nullptr)
	{
		if (dataEqual(data, root->data))
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
		root->data = copyData(data);
		root->left = nullptr;
		root->right = nullptr;
		root->height = 1;
		root->count = 1;
		return root;
	}


	if (dataEqual(data, root->data)) {
		(root->count)++;
		return root;
	}

	if (dataLess(data, root->data))
		root->left = insertBST(root->left, data);
	else
		root->right = insertBST(root->right, data);

	root->height = max(height(root->left), height(root->right)) + 1;

	int bal = balance(root);


	// Left Left Case 
	if (bal > 1 && dataLess(data, root->left->data))
		return rightRotate(root);

	// Right Right Case 
	if (bal < -1 && dataGreater(data, root->right->data))
		return leftRotate(root);

	// Left Right Case 
	if (bal > 1 && dataGreater(data, root->left->data)) {
		root->left = leftRotate(root->left);
		return rightRotate(root);
	}

	// Right Left Case 
	if (bal < -1 && dataLess(data, root->right->data)) {
		root->right = rightRotate(root->right);
		return leftRotate(root);
	}

	return root;
}


BSTNode* minValueNode(BSTNode* root)
{
	BSTNode* current = root;

	while (current->left != NULL)
		current = current->left;

	return current;
}

BSTNode* deleteNode(BSTNode* root, Data data)
{
	

	if (root == nullptr)
		return root;

	if (dataLess(data,root->data) )
		root->left = deleteNode(root->left, data);

	else if (dataGreater(data,root->data))
		root->right = deleteNode(root->right, data);

	else {
		if (root->count > 1) {
			(root->count)--;
			return root;
		}
	
		if ((root->left == nullptr) || (root->right == nullptr)) {
			BSTNode* temp = root->left ? root->left : root->right;

			
			if (temp == nullptr) {
				temp = root;
				root = nullptr;
			}
			else  
				*root = *temp;  

			delete temp;
		}
		else {
			
			BSTNode* temp = minValueNode(root->right);

			root->data = temp->data;
			root->count = temp->count;
			temp->count = 1;

			root->right = deleteNode(root->right, temp->data);
		}
	}

	if (root == nullptr)
		return root;

	root->height = max(height(root->left), height(root->right)) + 1;

	int bal = balance(root);

	if (bal > 1 && balance(root->left) >= 0)
		return rightRotate(root);

	 
	if (bal > 1 && balance(root->left) < 0) {
		root->left = leftRotate(root->left);
		return rightRotate(root);
	}

	
	if (bal < -1 && balance(root->right) <= 0)
		return leftRotate(root);

	
	if (bal < -1 && balance(root->right) > 0) {
		root->right = rightRotate(root->right);
		return leftRotate(root);
	}

	return root;
}


int main()
{
	BSTNode* root = nullptr;

	/*
	root = insertBST(root, 10);
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

	printBST(root, 10, 30);

	if (searchBST(11, root))
		cout << "Znalaz�em!\n\n";
	else
		cout << "Nie znalaz�em!\n\n";

	
	*/

	
	root = insertBST(root, { "Anna", "Zimna", 15 });
	root = insertBST(root, { "Karolina", "Lubomirska", 53 });
	root = insertBST(root, { "Joanna", "Hudzik", 67 });
	root = insertBST(root, { "Jan", "Kowalski", 17 });
	root = insertBST(root, { "Karol", "Nowak", 21 });
	root = insertBST(root, { "Wojciech", "Koput", 46 });
	root = insertBST(root, { "Bogdan", "Fojut", 77 });
	root = insertBST(root, { "Jan", "Estkowski", 97 });
	root = insertBST(root, { "Dariusz", "Nawolny", 7 });

	
	//printBST(root, 10, 30);


	deleteNode(root,  { "Jan", "Kowalski", 17 });
	deleteNode(root, { "Karolina", "Lubomirska", 53 });


	printBST(root, 10, 30);

	if (searchBST({ "Wojciech", "Koput", 46 }, root))
		cout << "Znalazlem!\n\n";
	else
		cout << "Nie znalazlem!\n\n";

	system("PAUSE");

	return 0;
}
#include<iostream>

void insertBSTNode(Data data, BSTNode* root)
{

	if (dataLess(data, root->data))//wymuszenie ruchu w lewo
	{
		if (root->left != nullptr)//niepusta lewa ga³¹Ÿ
			insertBSTNode(data, root->left); //
		else //pusta lewa ga³¹Ÿ
		{
			root->left = new BSTNode;
			root->left->data = copyData(data);
			root->left->left = nullptr;
			root->left->right = nullptr;
		}
	}
	else // ruch w prawo
	{
		if (root->right != nullptr) // niepusta prawa ga³¹Ÿ
			insertBSTNode(data, root->right);
		else //pusta prawa ga³¹Ÿ
		{
			root->right = new BSTNode;
			root->right->data = copyData(data);
			root->right->left = nullptr;
			root->right->right = nullptr;
		}
	}
}

int main()
{
	return 0;
}
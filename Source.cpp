//#include "Header.h"
#include "Header1.h"

int main()
{
	AvlTree<int> obj;
	/*;
	obj.Insert(5, &obj.root);	obj.R_H();	cout << "\n-------------------------------------\n";
	obj.Insert(3, &obj.root);	obj.R_H();	cout << "\n-------------------------------------\n";
	obj.Insert(4, &obj.root);	obj.R_H();	cout << "\n-------------------------------------\n";
	obj.Insert(2, &obj.root);	obj.R_H();	cout << "\n-------------------------------------\n";
	obj.Insert(1, &obj.root);	obj.R_H();	cout << "\n-------------------------------------\n";
	obj.Insert(6, &obj.root);	obj.R_H();	cout << "\n-------------------------------------\n";
	obj.Insert(7, &obj.root);	obj.R_H();	cout << "\n-------------------------------------\n";
	*/
	for (int i = 1; i <= 7; i++)
	{
		AvlNode<int>* ch;
		ch = new AvlNode<int>;
		ch->data = i;
		
		obj.Insert(ch, &obj.root);	obj.R_H();	cout << "\n-------------------------------------\n"; obj.display(obj.root);
	}
	for (int i = 16; i >= 8; i--)
	{
		if (i == 9) i--;
		AvlNode<int>* ch;
		ch = new AvlNode<int>;
		ch->data = i;

		obj.Insert(ch, &obj.root);	obj.R_H();	cout << "\n-------------------------------------\n"; obj.display(obj.root);
	}

	{
		
		AvlNode<int>* ch;
		ch = new AvlNode<int>;
		ch->data = 8;

		obj.Insert(ch, &obj.root);	obj.R_H();	cout << "\n-------------------------------------\n"; obj.display(obj.root);
	}

	obj.del(obj.root, 11);
	
	
	{

		AvlNode<int>* ch;
		ch = new AvlNode<int>;
		ch->data = 8;

		obj.Insert(ch, &obj.root);	obj.R_H();	cout << "\n-------------------------------------\n"; obj.display(obj.root);
	}


	cout << "\n\n\n";
	obj.display(obj.root);

	return 0;

}
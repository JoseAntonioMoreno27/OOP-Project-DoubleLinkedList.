#include "doubleLinkedList.h"


doubleLinkedList::doubleLinkedList()
{
	begin = NULL;
	end = NULL;

}

void doubleLinkedList::add(int value)
{
	Node* nuevo = new Node();
	nuevo->info = value;
	if (begin == NULL)
	{
		begin = nuevo;
		end = nuevo;
		nuevo->left = NULL;
		nuevo->right = NULL;

	}
	else
	{
		nuevo->left = end;
		end->right = nuevo;
		end = end->right;
		end->right = NULL;

	}
}

void doubleLinkedList::showbeginend()
{
	Node* reco = begin;
	while (reco != NULL)
	{
		cout << reco->info << endl;
		reco = reco->right;

	}
}
void doubleLinkedList::showendbegin()
{
	Node* reco = end;
	while (reco != NULL)
	{
		cout << reco->info << endl;
		reco = reco->left;

	}
}
void doubleLinkedList::showbegin()
{
	cout << "First number: " << begin->info << endl;
}

void doubleLinkedList::showend()
{
	cout << "Last number: " << end->info << endl;

}

void doubleLinkedList::deleteValue(int value)
{
	if (begin == NULL)
	{
		cout << "Cant delete the number" << value << "because the list is empty" << endl;
	}
	
	if (begin->info == value)
	{
		Node* deleteBegin = begin;
		begin = begin->right;
		begin->left = NULL;
		delete deleteBegin;
	}
	else if (end->info == value)
	{
		Node* deleteEnd = end;
		end = end->left;
		end->right = NULL;
		delete deleteEnd;

	}
	else
	{
		Node* reco = begin->right;
		Node* anterior;
		Node* siguiente;
		Node* borrar;
		while (reco->right != NULL)
		{
			if (reco->info == value) {
				anterior = reco->left;
				siguiente = reco->right;
				borrar = reco;
				anterior->right = siguiente;
				siguiente->left = anterior;
				delete borrar;
				break;
			}
			reco = reco->right;
		}
	}
}
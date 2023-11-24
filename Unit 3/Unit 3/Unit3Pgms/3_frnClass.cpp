#include<iostream>
using namespace std;

class Node;

class List
{
	Node *head;
	Node *tail;
	
	public:
	List():head(NULL),tail(NULL){}
	void append(Node*);
	void display();
};
class Node
{
	int info;
	Node *next;
		
	public:
	Node(int i):info(i),next(NULL){}
	friend class List;
};
void List::append(Node *p)
{
	if(head==NULL)
	{
		head=tail=p;
	}
	else
	{
		tail->next=p;
		tail=p;		//tail=tail->next;
	}
}

void List::display()
{
	if(head==NULL)
		cout<<"Empty List"<<endl;
	else
	{
		Node* p=head;
		
		while(p!=NULL)
		{
			cout<<p->info<<" ";
			p=p->next;
		}
		cout<<endl;
	}
}
int main()
{
	List lobj;
	
	Node n1(10),n2(20),n3(30);
	
	lobj.display();
	lobj.append(&n1);
	lobj.append(&n2);
	lobj.append(&n3);
	
	lobj.display();
	
}
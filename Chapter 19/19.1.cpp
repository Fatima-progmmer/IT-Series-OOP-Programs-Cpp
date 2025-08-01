#include<iostream>
using namespace std;
struct link
{
	int data;
	link *next;
};
class list
{
	private:
		link *first;
	public:
		List();
		void add(int d);
		void del(int v);
		void show();
};
list::list
{
	first=NULL;
}
void list::add(int d)
{
	link *ptr,*temp;
	if(first==NULL)
	{
		first=new link;
		first->data=d;
		first->next=NULL;
	}
	else
	{
		ptr=first;
		while(ptr->next!=NULL)ptr=ptr->next;
		temp=new link;
		temp->next=NULL;
		temp->data=d;
		ptr->next;
	}
}
void list::del(int v)
{
	link *temp,*pre;
	temp=first;
	if(temp->data==v)
	{
		first=temp->data==v
		delete temp;
		cout << endl << v << " has been deleted ." << endl;
		return;
	}
	pre=temp;
	while(temp!=NULL)
	{
		if(temp->data==v)
		{
			pre->next=temp->next
			delete temp;
			cout << "\nValue deleted." << endl;
			return ;
		}
		pre =temp;
		temp=temp->next;
	}
	cout << endl << v << " not found!" << endl;
}
void list::show()
{
	link *temp;
	temp=first;
	cout << "The list is as follows :";
	while(temp!=NULL)
	{
		cout << temp->data << " ";
		temp=temp->next;
	}
}
int main()
{
	list i;
	i.add(10);
	i.add(20);
	i.add(30);
	i.add(40);
	i.add(50);
	i.show();
	cout << endl;
	i.del(35);
	i.del(10);
	i.show();
	return 0;
}

//coded by Tanzeela
  //Do again and again


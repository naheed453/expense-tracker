#include<iostream>
using namespace std;
class date_node;
class price_node;
class item_node;
class id_node{
	public:
		int i;
		item_node* next;
		id_node(int id){
		i=id;
		next=NULL;
		}
};
class item_node{
	public:
	string item;
	price_node* next;
	item_node(string m){
	item=m;
	next=NULL;
	}
};
class price_node{
	public:
		int p;
	date_node* next;
	price_node(int pr){
		p=pr;
     next=NULL;
	}
};
class date_node{
public:
	string d;
	date_node* next;
	date_node(string dt){
	d=dt;
	next=NULL;
	}	
};
class linked_list{
	public:
			id_node* head;
	linked_list():head(){
		}
};
void insert_data(id_node* &head,int i,string item,int p,string  d){
	id_node* newnode=new id_node(i);
	head=newnode;
	item_node* newitem=new item_node(item);
    newnode->next=newitem;
	price_node* newprice=new price_node(p);
    newitem->next=newprice;
	date_node* newdate=new date_node(d);
	newprice->next=newdate;
}
void insert_secnode(id_node* &head1,int i,string item,int p,string  d){
	id_node* newnode=new id_node(i);
	head1=newnode;
	item_node* newitem=new item_node(item);
    newnode->next=newitem;
	price_node* newprice=new price_node(p);
    newitem->next=newprice;
	date_node* newdate=new date_node(d);
	newprice->next=newdate;
}
int main(){
	id_node* head=NULL;
	insert_data(head,157,"abaya",4000,"5may2025");
	cout<<  "ID : "<<head->i;
    cout<<  ":Item : "<<head->next->item;
    cout<<  ":Price : "<<head->next->next->p;
    cout<<  ":Date : "<<head->next->next->next->d<<endl;
    id_node* head1=NULL;
    insert_secnode(head1,159,"shoes",3000,"22may2025");
    cout<<  "ID : "<<head->i;
    cout<<  ":Item : "<<head->next->item;
    cout<<  ":Price : "<<head->next->next->p;
    cout<<  ":Date : "<<head->next->next->next->d<<endl;
}


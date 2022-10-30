#include <iostream>
using namespace std;

struct stack{
	int item;
	struct stack*next;
	
};
typedef struct stack node;
node *top = NULL;

void push(){
	int num;
	cout<<"enter element "<<endl;
		cin>>num;
	
	if(top==NULL){
		top = new node;
		
		top->item = num;
		top->next=NULL;
		
		
	}else{
		node * q=new node;
		q->item = num;
		q->next= top;
		top = q;
		
	}
	
}


void pop(){
	if(top==NULL){
		cout<<"Empty stack - underflow";
		return;
	}
	else{
	
		node * q = top;
		cout<<top->item<<endl;
		
		top = top->next;
		delete(q);
		
	}
	
}

void print(){
	
	node *q=top;
	while(q!=NULL){
		cout<<q->item<<" ";
		q=q->next;
		
	}
	cout<<endl;
	
}
int main(){
	
	int ch;
	

    do
    {
        cout << "Enter your choice " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
			print();
			break;
   
    }
	} while (ch != -1);
    return 0;
}

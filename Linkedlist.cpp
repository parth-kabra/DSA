//structural node
stu Node{
	int data;
	stu Node* left;
	stu Node* right;
	Node(int val){
		data = val;
		left=null;
		right=null;
	}
};

// linked list codes

class node{
	public:
		int data;
		node* next;
		node(int val){
			data=val;
			next=null;
		}
};
vd insatTail(node* &head, int val){
	node* n= new node(val);
	if(head==null){
		head=n;
		return;
	}
	node* temp=head;
	while(temp -> next !=null){
		temp=temp->next;
	}
	temp->next=n;
}
vd display(node* head){
	node* temp=head;
	while(temp!=null){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
vd insatHead(node* &head,int val){
	node* n= new node(val);
	n->next=head;
	head=n;
}
bool search(node* head,int key){
	node* temp=head;
	while(temp!=null){
		if(temp->data==key){
			return true;
		}
		temp=temp->next;
	}
	return false;
}
vd delHead(node* &head){
	node* todel=head;
	head=head->next;
	del todel;
}
vd deletion(node* &head, int val){
	if(head==null){
		return;
	}
	if(head->next==null){
		delHead(head);
		return;
	}
	node* temp=head;
	while(temp->next->data != val){
		temp=temp->next;
	}
	node* todel= temp->next;
	temp->next=temp->next->next;
	del todel;
}
node* rev(node* head){
	node* pre=null;
	node* curr=head;
	node* nn;
	while(curr!=null){
		nn=curr->next;
		curr->next=pre;

		pre=curr;
		curr=nn;
	}
	return pre;
}

/*
	*IMPLEMENTAIONS*
		INSERT AT TAIL
			*insatTail(head, value)

		INSERT AT HEAD
			*insatHead(head, value)

		DELETE AN ELEMENT
			*deletion(head, value)

		DELETE THE HEAD
			*delHead(head)
			
		DISPLAY THE HEAD
			*display(head)
*/

//linked list code end

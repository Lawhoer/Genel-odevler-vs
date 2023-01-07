#include <iostream>


using namespace std;


struct node {
	int data;
	node* next;
};

node* rear = NULL; // node pointer'ý gösteren bir deðiþken ve suan null
node* front = NULL;

void enqueue(int key){
	
	if(rear == NULL){
		rear = new node();
		rear->data = key;
		front = rear; // front ilk koyulan rear'i gösteriyor þuan
	}
	else{
		node* temp = new node();
		temp->data = key;
		rear->next = temp;
		rear = temp;
	}	
}

void dequeue() {
	
	if(front->next == NULL){
		delete front;
		front = rear = NULL;
	}
	else{
		node* temp = front;
		front=front->next; // burda bir sonraki node'u göstertiyoruz ama eger önceki node'u temp'e göstertmeseydik onu silemez ve boþa yer kaplardý
		delete temp;
	}
}

int peek(){
	return front->data; // liste basý deðeri döndürüyor
}

void printQ(){
	node* temp = front;
	while(temp != NULL){
		cout << temp->data;
		temp=temp->next;
	}	
}


int main(){
	
	// test aþamasý
	
	enqueue(6);
	enqueue(7);
	enqueue(8);
	enqueue(9);
	
	printQ();
	
	dequeue();
	dequeue();
	
	cout << endl;
	printQ();
	
	cout << endl;
	cout << peek();
	
}

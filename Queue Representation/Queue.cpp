#include<iostream>
using namespace std;

class Queue{
    int *arr, size, front, rear;
    public:
    Queue(int size){
        this->size=size;
        front=rear=-1;
        arr= new int[this->size];
    }

    // IS Empty Operation 
    bool isEmpty(){
        return front==-1 && rear ==-1;
    }

    // Is Full
    bool isFull(){
        return rear==size;
    }

    // ENQUEUE
    void enqueue(int val){
        if(isFull()){
            cout<<endl<<"Queue is already full"<<endl;
            return;
        }
        else if(isEmpty()){
            front=rear=-1;
        }
        else{
            rear++;
        }
        arr[rear]=val;
    }

    // DEQUEUE
    int dequeue(int val){
        int deqval=0;
        if(isEmpty()){
            cout<<endl<<"Queue is already Empty"<<endl;
            return 0;
        }
        else if(front==rear){
            deqval=arr[rear];
            front=rear=-1;
        }
        else{
            deqval=arr[rear];
            front++;
        }
        return deqval;
    }

    // Count
    int count(){
        return rear-front+1;
    }

    // DISPLAY
    void display(){
        for(auto *x=arr){
        cout<<" "<<*x;
        }
    }
};

int main(){
    cout<<"Enter the size of Queue"<<endl;
    int n, option;
    cin>>n;
    Queue A(n);
    
cout<<"=========================================="<<endl;
cout<<"CHOOSE OPTIONS AS PER YOUR NEED"<<endl;
cout<<"=========================================="<<endl<<endl;
cout<<"1. isEmpty()"<<endl;
cout<<"2. isFull()"<<endl;
cout<<"3. enqueue()"<<endl;
cout<<"4. dequeue()"<<endl;
cout<<"5. count()"<<endl;
cout<<"6. display()"<<endl;
cout<<"7. repeat()"<<endl;
cout<<"=========================================="<<endl<<endl;

switch(option){
    case1:{
        if(A.isEmpty()){
            cout<<"Queue is Empty"<<endl;
        }
        else{
            cout<<"Queue is not Empty"<<endl;
        }
    }
    break;
}
return 0;
}
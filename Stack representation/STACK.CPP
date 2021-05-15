#include<iostream>
using namespace std;

class stack{
    int top;
    int arr[5];
    public : 
    stack(){
        top= -1;
        for(auto x:arr)
        x=0;
    }

    bool isEmpty(){
        if(top==-1){
            cout<<"Stack is Empty";
            return true;
        }
        else
            return false;
    }

    bool isFull(){
        if(top==4){
            cout<<"Stack is Full";
            return true;
        }
        else
            return false;
    }

    void push(int val){
        if(isFull()){
            cout<<"Stack Overflow";
        }
        else{
            top++;
            arr[top]=val;
        }
    }

    int pop(){
        if(isEmpty()){
            cout<<"Stack Underflow";
        }
        else{
            int popval = arr[top];
            arr[top]=0;
            top--;
            return popval;
        }
    }

    int peek(int index){
        return arr[index];
    }

    void change(int pos, int val){
        arr[pos]=val;
    }

    int count(){
        return (top+1);
    }

    void display(){
        for(auto x:arr)
        cout<<x<<endl;
    }
};

int main(){
    stack A;
    A.display();
    return 0;
}
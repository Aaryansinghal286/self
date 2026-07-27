// Stack Array implementation

#include <iostream>
using namespace std;
int n=5;
int stack[5];
int top=-1;

bool isEmpty(){
    return top<=-1;
}

bool isFull(){
    return top>=n-1;
}

void push(int ITEM){
    if(isFull())
    {
        cout<<"Overflow"<<endl;
    }
    else
    {
        top++;
        stack[top]=ITEM;
    }
}

void pop(){
    if(isEmpty())
    {
        cout<<"Underflow"<<endl;
    }
    else
    {
        cout<<"The Element is: "<<stack[top]<<endl;
        top--;
    }
}


void traverse()
    {
        int i;
        if(!isEmpty())
        {
            cout<<"Stack Elements are: "<<endl;
            for(i=top;i>=0;i--)
            {
                cout<<stack[i]<<" ";
            }
            cout<<endl;
            cout<<"Top Elements is: "<<stack[top]<<endl;
        }

        else
        {
            cout<<"Stack is empty"<<endl;
        }
    }

int main(){
    int ch, ITEM;
    cout<<"1). Push"<<endl;
    cout<<"2). Pop"<<endl;
    cout<<"3). Traverse"<<endl;
    cout<<"4). Exit"<<endl;

    do{
        cout<<"Enter choice: ";
        cin>>ch;


        switch(ch)
        {
            case 1:
                cout<<"Enter the element to be pushed: ";
                cin>>ITEM;
                push(ITEM);
                break;
            case 2:
                pop();
                break;
            case 3:
                traverse();
                break;
            case 4:
                cout<<"Exit"<<endl;
                break;
            default:
                cout<<"Invalid choice"<<endl;
        }

    } while(ch!=4);
}
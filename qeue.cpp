#include <iostream>
using namespace std;
struct queue
{
   
        int size=100;
        int arr[100];
        int front=0;
        int rear=0;
};
int Isempty(struct queue *q){
    if(q->rear==q->front){
        return 1;
    }
    return 0;
}
int Isfull(queue*q)
{
    if(q->rear==q->size-1)
    {
        
        return 1;
    }
    return 0;
}

void enqeue(queue*q,int val)
{
    if(Isfull(q))
    {
        cout<<"canot perform"<<endl;;
        
    }
    else{
        q->rear++;
        q->arr[q->rear]=val;
        cout<<"enqued element"<<val<<endl;
    }
}
int deqeue(queue*q)
{
    int a=-1;
    if(!Isempty(q))
    {
        q->front++;
        a=q->arr[q->front];
        
    }
    else{

        cout<<"This Queue is empty\n";
    }
        return a;
}



int main(){
    struct queue q;
    // q.size = 100;
    // q.front = q.rear = -1;
    // q.arr = (int*) malloc(q.size*sizeof(int));

 
   


    enqeue(&q,13);
    enqeue(&q,14);
    enqeue(&q,15);
    // enqeue(&q,16);
    // if(Isfull(&q));
    cout<<"removing the number by FIFO " <<deqeue(&q);
    cout<<"\nremoving the number by FIFO " <<deqeue(&q);
    cout<<"\nremoving the number by FIFO " <<deqeue(&q);
    // deqeue(&q);
    
    enqeue(&q,135);
    enqeue(&q,145);
    enqeue(&q,155);
    enqeue(&q,155);
     cout<<"removing the number by FIFO " <<deqeue(&q);
    cout<<"\nremoving the number by FIFO " <<deqeue(&q);
    cout<<"\nremoving the number by FIFO " <<deqeue(&q);
    
    
    return 0;
}
#include<stdio.h>
#define SIZE 5 //size declared
typedef struct {
    int arr[SIZE];
    int front,rear;
 }queue;

void initqueue(queue *q){
    q->front = q ->rear = - 1;
 }

int isEmpty(queue *q){
    return(q->front==-1 || q->front > q->rear);
 }
int isFull(queue* q){
    return(q->rear==SIZE-1);
}

void enqueue(queue *q,int data){//insertion which happens by the rear
       if(isFull(q)){
            printf("Queue overflow\n");
            return ;
       }
       if(isEmpty(q)){
           q->front=0;
           q->rear=0;
       }else{
        q->rear++;
       }
        q->arr[q->rear]=data;
}

int dequeue(queue* q)
{
    if(isEmpty(q)){
        printf("Queue underflow\n");
        return -1;
    }
    int val = q->arr[q->front++];

    if (q->front > q->rear) {
        // Queue became empty after removal
        q->front = q->rear = -1;
    }
    return val;
}
void display(queue* q){
    for(int i=q->front;i<=q->rear;i++){
        printf("%d ",q->arr[i]);
    }
    printf("\n");
}

int main()
{
    queue q;
    initqueue(&q);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50); // Full
    display(&q);

    dequeue(&q);
    dequeue(&q);
    display(&q);

    enqueue(&q, 60);
    enqueue(&q, 70);
    display(&q);

 return 0;
}

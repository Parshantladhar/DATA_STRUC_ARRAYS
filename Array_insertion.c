#include<stdio.h>
#include<conio.h>

int arr[10];
int ele,loc,n,x;
int i;
void insert(int data,int loc){
    x=n;
    while(x>=loc-1){
        arr[x+1]=arr[x];
        x--;
    }
    arr[loc-1]=ele;
    n++;
}

void display(){
    printf("Array Elements");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}

void data(){
    for (i=0;i<n;i++){
        printf("Enter element=");
        scanf("%d",&arr[i]);
    }
}

void main(){
    printf("Enter the size of array=");
    scanf("%d",&n);
    data();
    printf("Enter element you want to insert or location=");
    scanf("%d\t%d",&ele,&loc);
    insert(ele,loc);
    display();
    getch();
}
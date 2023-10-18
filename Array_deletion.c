#include<stdio.h>
#include<conio.h>

int arr[10],i,n,x;
int loc;
void delete(int loc){
    x=loc;
    while(x!=n-1){
        arr[x]=arr[x+1];
        x++;
    }
    n--;
}

void data(){
    for (i=0;i<n;i++){
        printf("Enter element=");
        scanf("%d",&arr[i]);
    }
}

void display(){
    printf("Array Elements\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}

void main(){
    printf("enter the size of Array=");
    scanf("%d",&n);
    printf("Enter array data\n");
    data();
    printf("Array Before Deletion\n");
    display();
    printf("\nEnter the element location you want to delete=");
    scanf("%d",&loc);
    delete(loc-1);
    printf("\nAfter deletion Array\n");
    display();
    getchar();
}
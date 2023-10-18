#include<stdio.h>
#include<conio.h>
void main(){
    int arr[10],i,ele,n;
    printf("Enter the size of array=");
    scanf("%d",&n);
    printf("Enter elements of array\n");
    for(i=0;i<n;i++){
        printf("Enter Element=");
        scanf("%d",&arr[i]);
    }
    printf("--Traversing Array--\n");
    for(i=0;i<n;i++){
        printf("\nElement=%d",arr[i]);
    }
    getch();
}
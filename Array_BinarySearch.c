#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int arr[10],i,n;
int ele;

void Bsearch(int ele){
    int lb=0,ub=n,mid;
    while (lb<=ub){
        mid=(lb+ub)/2;
        if (arr[mid]==ele){
            printf("Search Successful & element Found on location=%d",mid+1);
            getch();
            exit(0);
        }
        else if (arr[mid]<ele){
            lb=mid+1;
        }
        else{
            ub=mid-1;
        }
    }
    printf("Search Unsuccessful Because Element Doesn't Exit in array");
    getch();
    exit(0);
}

void data(){
    for (i=0;i<n;i++){
        printf("Enter element=");
        scanf("%d",&arr[i]);
    }
}

void main(){
    printf("enter the size of Array=");
    scanf("%d",&n);
    printf("Enter array data\n");
    data();
    printf("Enter Element you want to search=");
    scanf("%d",&ele);
    Bsearch(ele);
    getchar();
}
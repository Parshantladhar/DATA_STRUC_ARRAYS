#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int arr[10],i,n;
int ele;
void Lsearch(int ele){
    for(i=0 ; i<n ; i++){
        if(ele==arr[i]){
            printf("Search Successful & Element found on location=%d",i+1);
            getch();
            exit(0);
        }
    }
    printf("Search Unsuccessful" );
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
    Lsearch(ele);
    getchar();
}
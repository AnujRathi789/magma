#include<stdio.h>
int main(){

int rows;
int coloums;
int k=1;
printf("enter the number of rows");
scanf("%d",&rows);
printf("\nEnter the number of columns");
scanf("%d",&coloums);
int a[rows][coloums];
int i=1;
while(i<=rows)
{
    int j=1;
    while (j<=coloums)
    {
        printf("%d\t",k);
        k++;
        j++;
    
    }
    i++;
    printf("\n");

    
}
} 

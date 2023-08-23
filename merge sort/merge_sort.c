#include<stdio.h>
#include<stdlib.h>
void merge(int a[],int start, int mid,int end)
{
    int b[100],j,k;
    int i=start; j= mid+1; k=1;
    while (i<=mid && j<=end)
    {
       if (a[i] < a[j])
       {
              
       }
    }
}
int main()
{
    int a[15],n=15,i;
    for (i = 0; i < n; i++)
        a[i]= rand()%99+1;
        printf("before sorting array is: \n");
    
    for ( i = 0; i < n; i++)
        printf("%d " ,a[i]);
}
#include<stdio.h>
#include<stdlib.h>
#define n 10
int f =-1 , r = -1, i;
int a[n];
int display(){
    for ( i = f; i <= r; i++)
    {
        printf("%d ",a[i]);
    }  
}
int insert(int x)
{
    if (r >= n-1)
    {
       printf("\n array is full....");
    }
    else if (r < 0 )
    {
        f = r = 0;
        a[r] = x;
    }
    else{
        ++r;
        a[r] = x;
    }
}
int main(){
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    display();

}
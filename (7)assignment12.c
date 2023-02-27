#include<stdio.h>
void printSquare(int n)
{
    if(n == 0)
        return;
    printSquare(n-1);
    printf("%d ",n*n);
}
int main()
{
    printSquare(5);
    return 0;
}

#include<stdio.h>
void odd(int n)
{
    if(n==0)
    {
        return;
    }
    odd(n-1);
    if(n %2 == 0)
        printf("%d ",n);
}
int main()
{
    odd(10*2);
    return 0;
}

#include<stdio.h>
void odd(int n)
{
    if(n==0)
    {
        return;
    }
     if(n %2 == 0)
        printf("%d ",n);
    odd(n-1);
}
int main()
{
    odd(10*2);
    return 0;
}

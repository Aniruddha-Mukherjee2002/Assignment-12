#include<stdio.h>
void numdiv(int n)
{
    int mod;
    if(n == 0)
    {
        return;
    }
   printf("%d ",n%10);
   numdiv(n/10);
}
int main()
{
    numdiv(123);
}

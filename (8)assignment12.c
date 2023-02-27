#include<stdio.h>
void decimalTobinary(int n)
{
    if(n == 0)
        return;
     decimalTobinary(n>>1);
     printf("%d",n&1);
}
int main()
{
    decimalTobinary(9);
    return 0;
}

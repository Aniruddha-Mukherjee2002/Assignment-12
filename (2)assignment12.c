#include<stdio.h>
void print_Rev(int n)
{
    if(n == 0)
        return;
    printf("%d ",n);
    print_Rev(n-1);
}
int main()
{
    print_Rev(10);
    return 0;
}

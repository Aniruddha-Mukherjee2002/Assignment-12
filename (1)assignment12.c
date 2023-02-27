#include<stdio.h>
int print(int n)
{
    if(n == 0)
         {
             printf("%d ",0);
             return 0;
         }
         print(n-1);
         printf("%d ",n);

}
int main()
{
    print(10);
    return 0;
}

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two no :\n");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("After swapping value of a = %d\n b =%d\n",a,b);
    
    a = a^b;
    b = a^b;
    a=  a^b;
    printf("\n\nAfter swapping value of a and b : %d,%d\n\n",a,b);
    return 0;
}

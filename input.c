#include<stdio.h>
int main()
{
    int a,b;
    char c;
    float d;
    scanf("%d %d %c %f",&a,&b,&c,&d);
    printf("%d %d %c %.2f",a,b,c,d);
    // %.digit indicate how many digit we want to print after point.
    // remember %,/ can't be printf. 
    // but we print you need to give double % and double //. and then it's print one % and /
    return 0;
}
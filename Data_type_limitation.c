#include<stdio.h>
int main()
{
    long long b=435687980451243;
    double a=22.453465768723457;
    printf("%0.15lf\n%lld", a,b);
    //int and float can give us 10 digit correct value.
    // long long int and double give us 18 correct digit.
    return 0;
}
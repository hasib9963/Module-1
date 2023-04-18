#include<stdio.h>
int main()
{
    
    int hasib = 10;
    // int can access 10^9 digit number menas 10 digit(1000000000)
    // for more digit we use long long int. for printf we use %lld
    float hasan = 10.5;
    // float also acess 10^9 menas highest 10 digit(100000000) digit. for more we use double
    // double access highest 18 digit. for printf we use lf.
    char mahedi ='M';
    // char type variable access alphabet and other charcter
    printf("%d\n%.2f\n%c\n",hasib, hasan, mahedi);
    return 0;
}
#include<stdio.h>

void main(){

    system("cls");

    int base,exp;
    printf("Enter base: ");
    scanf("%d",&base);

    printf("Enter exponent: ");
    scanf("%d",&exp);

    cal_power(base, exp);
}

void cal_power(int b, int e){
    int power = 1;
    int mexp = 0;
    mexp = mexp + e;

    while (e>0)
    {
        power = power * b;
        e--;
    }
    printf("The power of %d ^ %d = %d",b, mexp, power);
    
}
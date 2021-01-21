#include<stdio.h>

void main(){
    system("cls");

    int num_fac, result_fac;

    printf("Enter number of factorial ");
    scanf("%d",&num_fac);

    result_fac = factorial(num_fac);

    printf("Factorial of the number(%d) = %d ",num_fac, result_fac);
}

int factorial(int numf){

    int i, result_f;
    result_f = 1;
    for(i =1 ; i<=numf; i++){
        result_f = result_f * i;
    }
    return result_f;
}
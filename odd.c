// odd.c

// ผลลัพธ์
// enter a no: 6
// Odd no. of 6 terms are :- 
// 1 3 5 7 9 11

#include<stdio.h>
void main(){
    system("cls");

    int i, n;
    printf("Enter a no: ");
    scanf("%d",&n);

    printf("Odd no. of %d terms are :- \n",n);
    for(i=1; i<= 2*n; i++) {
        if(i%2 == 0 )
            continue;
        else
            printf("%d, ", i);
    }
}
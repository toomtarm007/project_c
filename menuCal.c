#include<stdio.h>

void main(){

    system("cls");

    int num1, num2, choose_option;

    do{
        printf("Choose Your Option\n");
        printf("1. Addition\n2. Subtraction\n3. Multtiplication\n4. Division\n5. Exit\n");
        scanf("%d",&choose_option);
        
        if(choose_option == 5 )
            break;

        switch(choose_option)
        {
        case 1:
            printf("Enter num1: "); scanf("%d",&num1);
            printf("Enter num2: "); scanf("%d",&num2);
            printf("Sum of %d + %d = %d\n",num1, num2, num1+num2);
            break;
        case 2:
            printf("Enter num1: "); scanf("%d",&num1);
            printf("Enter num2: "); scanf("%d",&num2);
            printf("Sum of %d + %d = %d\n",num1, num2, num1-num2);
            break; 
        case 3:
            printf("Enter num1: "); scanf("%d",&num1);
            printf("Enter num2: "); scanf("%d",&num2);
            printf("Sum of %d + %d = %d\n",num1, num2, num1*num2);
            break;   
        case 4:
            printf("Enter num1: "); scanf("%d",&num1);
            printf("Enter num2: "); scanf("%d",&num2);

            if(num2 == 0) 
                printf("Not Calculate\n");
            else
            printf("Sum of %d + %d = %d\n",num1, num2, num1/num2);
            break;
        case 5:
            break;
        
        default:
            printf("Invalid Choose Option\n");
        } 
    }while(choose_option !=5);
}
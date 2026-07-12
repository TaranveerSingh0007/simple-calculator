#include<stdio.h>

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define RESET "\033[0m"

int main(){

    // declaration of variables

    float x , y;
    char opr;
    float res;
    int invalid = 0;

    // wokflow explain chart

    printf(YELLOW"\b SIMPLE CALCULATOR"RESET);
    printf("\n welcome , please enter values of both the numbers and assign operator");
    printf("\n= Numbers can be (0-9) and could have decimal value till tenth place");
    printf("\n= Operators are as follows:");
    printf(RED "\n + for addition" RESET);
    printf(GREEN "\n - for subtraction" RESET);
    printf(YELLOW "\n * for multiplication" RESET);
    printf(BLUE "\n / for division" RESET);

    printf("\n__________________\n");

    printf("\n enter number 1 :");
    scanf("%f",&x);

    printf("\n enter operator:");
    scanf("  %c", &opr);

    printf("\n enter number 2 :");
    scanf("%f",&y);

    // structure to calculate values

    switch (opr){
        case '+' : res = x + y;
        break;

        case '-' : res = x - y;
        break;

        case '*' : res = x * y;
        break;

        case '/' : res = x / y;
        break;

        default : invalid =1;
        break;
    }

    // condition print

    if(invalid == 0){
      printf("answer: %.2f",res);
    }
    printf(" \nthank you, developed by Taranveer");
    return 0;
}
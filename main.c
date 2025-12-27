#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char questions[][100] = {
        "What is your name?",
        "How old are you?",
        "What is your favorite programming language?"
    };

    printf("Hello, World!, time is %s\n\n", __TIME__);
    printf("%s \n\n",__DATE__);
    printf("Number of questions is : %ld\n\n", sizeof(questions) / sizeof(questions[0]));


    /*  Ternery operator below to determine if users input is even or odd number
    */

    int a;
    int b = 20;
    int result;
    printf("Enter a number to find out if it's an Even no or Odd no: ");
    scanf("%d", &a);

    printf("\nThe number you entered \(%d\) is an %s number\n\n", a, (a%2 == 0) ? "Even" : "Odd");
    
    return 0;
}
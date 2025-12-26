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


    /*  Ternery operator below
    */

    int a = 10;
    int b = 20;
    int max;    

    max = (a + b == 30) ? printf("a plus b is 30\n\n") : printf("wrong answer not 50\n\n");
    return 0;
}
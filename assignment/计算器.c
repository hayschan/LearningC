#include <stdio.h>

int main() {
    int n1, n2, answer;  // declare
    char op;
    scanf("%d %d %c",&n1,&n2,&op); //input
    // op = getchar( );
    //check invalid input
    if ((n2 == 0) && (op=='/')) {
        printf("Divided by zero!");
    } else if ( (op!='+') && (op!='-') && (op!='*') && (op!='/')  ) {
        printf("Invalid operator!");
    } else {
        //calculation
        switch (op) {
            case '+':
                answer = n1 + n2;
                break;
            case '-':
                answer = n1 - n2;
                break;
            case '*':
                answer = n1 * n2;
                break;
            case '/':
                answer = n1 / n2;
                break;
        }
        //output
        printf("%d", answer);
    }
    return 0;
}

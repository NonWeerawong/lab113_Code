#include <stdio.h>

void cal(char op, float *val, float n){
    switch(op){
        case '+':
            *val += n;
            break;
        case '-':
            *val -= n;
            break;
        case '*':
            *val *= n;
            break;
        case '/':
            *val /= n;
            break;
    }
}

int main(){
    char op;
    float val, n;
    printf("Initial Value: ");
    scanf("%f", &val);
    while(1){
        printf("\nOperator: ");
        scanf("\n%c", &op);
        if(op!='+'&&op!='-'&&op!='*'&&op!='/')
            break;
        printf("Input Value: ");
        scanf("%f", &n);
        cal(op, &val, n);
        printf("Present Value is %.4f\n",val);
    }
    printf("\nFinish Calculation. Final Value is %.4f",  val);
}
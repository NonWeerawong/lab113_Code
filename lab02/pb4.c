#include <stdio.h>
#include <stdlib.h>

int main(){
    char s[10];
    fgets(s,10,stdin);
    float salary = atof(s), tax;
    if(salary<=300000)
        tax = salary*0.05;
    else
        tax = 300000*0.05 + (salary-300000)*0.1;
    
    if(salary>=0)
        printf("%.2f", tax);
    else
        printf("Error: Salary must be greater or equal to 0");

    return 0;
}
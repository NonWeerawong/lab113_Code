#include <stdio.h>
#include <stdlib.h>
int main(){
    char x_str[10], y_str[10];
    fgets(x_str,10,stdin);
    fgets(y_str,10,stdin);
    int x=atoi(x_str), y=atoi(y_str);
    for(int i=0; i<y; i++){
        for(int j=0; j<i; j++)
            printf(" ");
        for(int j=0; j<x; j++)
            if(i==0 || i==y-1 || j==0 || j==x-1)
                printf("*");
            else 
                printf(" ");
        printf("\n");
    }
    return 0;
}




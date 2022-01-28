#include <stdio.h>
#include <stdlib.h>

int main(){
    char x_str[10];
    fgets(x_str,10,stdin);
    int x=atoi(x_str);
    for(int i=0; i<x; i++){
        for(int j=0; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=x-1; i>0; i--){
        for(int j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
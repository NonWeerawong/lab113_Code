#include <stdio.h>
#include <stdlib.h>

int main(){
    char n_str[10], c;
    fgets(n_str, 10, stdin);
    int n = atoi(n_str), k=1;
    if(n<=0 || n>26){
        printf("-");
        return 0;
    }
    for(int i=0; i<n; i++){
        c = 97+n-1;
        for(int j=i; j<n-1; j++)
            printf("--");
        for(int j=0; j<=i*2; j++)
            printf("%c%s",j<i?c--:c++,j==i*2?"":"-");
        for(int j=i; j<n-1; j++)
            printf("--");
        printf("\n");
    }
    for(int i=0; i<n-1; i++){
        c = 97+n-1;
        for(int j=0; j<=i; j++)
            printf("--");
        for(int j=0; j<(n*2-3)-i*2; j++)
            printf("%c%s",j<((n*2-3)-i*2)/2?c--:c++,j==(n*2-3)-i*2-1?"":"-");
        for(int j=0; j<=i; j++)
            printf("--");
        printf("\n");
    }
    return 0;
}
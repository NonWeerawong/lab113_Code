#include <stdio.h>
#include <stdlib.h>

int main(){
    char n_str[10];
    int n;
    fgets(n_str,10,stdin);
    n = atoi(n_str);
    while(n>=0){
        printf("%d\n", n--);
    }
    return 0;
}
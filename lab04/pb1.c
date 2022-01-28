#include <stdio.h>
#include <stdlib.h>

int main(){
    char n_str[10];
    fgets(n_str,10,stdin);
    int n=atoi(n_str), bin=0,m=1,o=n;
    while(n){
        bin+=(n%2)*m;
        m*=10;
        n/=2;
    }
    printf("Binary number of %d is %04d.",o,bin);

}
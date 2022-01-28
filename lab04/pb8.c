#include <stdio.h>
#include <stdlib.h>

long long toBin(long long n, long long m){
    if(!n)
        return 0;
    return n%2*m + toBin(n/2,m*10);
}

int main(){
    char n_str[100];
    fgets(n_str,100,stdin);
    long long n=atoll(n_str);
    printf("%lld",toBin(n,1));

}
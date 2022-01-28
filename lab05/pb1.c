#include <stdio.h>

int main(){
    long long n;
    printf("Input n = ");
    scanf("%lld", &n);
    printf("n^2 = %lld\n", n*n);
    long long k=n, d=1;
    while(k){
        k/=10;
        d*=10;
    }
    if(n*n%d == n)
        printf("Yes. %lld is automorphic number.\n", n);
    else 
        printf("No. %lld is not automorphic number.\n", n);
}
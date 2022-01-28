#include <stdio.h>
#include <stdlib.h>

int main(){
    char n_str[100], m_str[100];
    long long n, m, temp;
    fgets(n_str,100,stdin);
    fgets(m_str,100,stdin);
    n = atoll(n_str);
    m = atoll(m_str);
    long long a=n, b=m;
    if(n>m){
        temp = m;
        m = n;
        n = temp;
    }
    while(m){
        temp = m;
        m = n%m;
        n = temp;
    }
    printf("GCD: %lld\n", n);
    printf("LCM: %lld\n", a*b/n);
    return 0;
}
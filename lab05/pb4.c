#include <stdio.h>

int main(){
    int n;
    double pi, k=1;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        if(i%2==0)
            pi += 4/k;
        else 
            pi -= 4/k;
        k+=2;
    }
    printf("%.10lf", pi);
    return 0;
}
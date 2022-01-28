#include <stdio.h>
#include <math.h>
int main(){
    int n, c;
    scanf("%d", &n);
    for(int a=0; a<n; a++){
        for(int b=a+1; b<n; b++){
            c = n-a-b;
            if(c<=a || c<=b)
                continue;
            if(a*a+b*b == c*c){
                printf("(%d, %d, %d)",a, b, c);
                return 0;
            }
        }
    }
    printf("No triple found.");
}
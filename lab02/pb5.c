#include <stdio.h>
#include <stdlib.h>
int main(){
    char str_a[10], str_b[10], str_c[10];
    int a, b, c;
    printf("Enter length of side A: ");
    fgets(str_a, 10, stdin);
    printf("Enter length of side B: ");
    fgets(str_b, 10, stdin);
    printf("Enter length of side C: ");
    fgets(str_c, 10, stdin);
    a = atoi(str_a);
    b = atoi(str_b);
    c = atoi(str_c);

    if(a==b && b==c && c==a)
        printf("Triangle type is equilateral.");
    else if(a<=0 || b<=0 || c<=0 || a+b<=c|| b+c<=a || c+a<=b)
        printf("Triangle type is invalid.");
    else if((a==b && b!=c && a!=c) || (c==a && b!=a && c!=b) || (c==b && b!=a && c!=a))
        printf("Triangle type is isosceles.");
    else if(a!=b && b!=c && c!=a)
        printf("Triangle type is scalene.");

    return 0;
}
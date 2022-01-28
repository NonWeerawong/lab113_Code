#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char s[3], p[3], c[3], h[3];
    int size, pep, che, mush;
    float extracost, cost, price, d, area;
    printf("Welcome to My Pizza Shop!!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    fgets(s,3,stdin);
    printf("Extra pepperoni? (1=yes, 0=no): ");
    fgets(p,3,stdin);
    printf("Extra cheese? (1=yes, 0=no): ");
    fgets(c,3,stdin);
    printf("Extra mushroom? (1=yes, 0=no): ");
    fgets(h,3,stdin);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    size = atoi(s);
    pep = atoi(p);
    che = atoi(c);
    mush = atoi(h);
    if(size==1) d=10;
    else if (size==2) d=16;
    else d=20;
    extracost = pep*0.5+che*0.25+mush*0.3;
    area = M_PI * d*d / 4;
    cost = 5+(2*area)+(extracost*area);
    printf("Your order costs %.2f baht.\n",1.5*cost);
    printf("Thank you.");
}
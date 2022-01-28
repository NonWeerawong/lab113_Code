#include <stdio.h>
#include <stdlib.h>

int main(){
    char goal[100], collect[100];
    printf("Enter your goal amount: ");
    fgets(goal,100,stdin);
    double g = atof(goal), c, r=g, m=0;
    int d=1;
    while(r>0){
        printf("Enter money collected today: ");
        fgets(collect,100,stdin);
        c=atof(collect);
        r-=c;
        m+=c;
        if(r>0)
            printf("Total money collected up to day %d is %.2lf. You need %.2lf more.\n",d,m,r);
        else
            break;
        d++;
    }
    printf("Congratulations! You take %d day%s to reach your goal.\n",d,(d>1)?"s":"");
}

#include <stdio.h>
void stair(int n, int k){
    for(int i=0; i<n; i++){
        if(i==k)
            printf("|-^-|\n");
        else if(i==k-1)
            printf("|-O-|\n");
        else
            printf("|---|\n");
    }
}

int main(){
    int n, round=1, c;
    printf("Input number of stairs: ");
    scanf("%d", &n);
    int k = n-1;
    printf("---- round %d ----\n", round);
    stair(n, k);
    while(1){
        printf("Input step command: ");
        scanf("%d", &c);
        if(c==0)
            break;
        printf("---- round %d ----\n",++round);
        k = k-c;
        if(k<1)
            k = 1;
        if(k>=n)
            k=n-1;
        stair(n, k);
        
    }
    return 0;
}
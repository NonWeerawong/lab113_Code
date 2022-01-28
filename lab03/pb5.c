#include <stdio.h>
#include <stdlib.h>
int main(){
    char n_str[10];
    int n;
    fgets(n_str,10,stdin);
    n = atoi(n_str);
    char c = (char)(97+n-1);
    if(n<=0 || n>26){
        printf("-");
        return 0;
    }
    for(int i=0; i<n*2-1; i++){
        if(c>'a' && i<n){
            printf("%c-",c);
            c-=1;
        }
        else{
            if (i==n*2-2)
                printf("%c",c);
            else
                printf("%c-",c);
            c+=1;
        }
    }
    return 0;
}
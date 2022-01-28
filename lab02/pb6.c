#include <stdio.h>
#include <stdlib.h>

int main(){
    char c = getchar();
    if(c>='0' && c<='9')
        printf("Output: digit");
    else if(c>='a' && c<='z')
        printf("Output: lower case");
    else if(c>='A' && c<='Z')
        printf("Output: upper case");
    else 
        printf("Output: others");

    return 0;
}
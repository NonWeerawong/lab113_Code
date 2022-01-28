#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
float getWeight(char grade){
    switch(tolower(grade)){
            case 'a':
                return 4;
                break;
            case 'b':
                return 3;
                break;
            case 'c':
                return 2;
                break;
            case 'd':
                return 1;
                break;
            case 'f':
                return 0;
                break;
        }
}

int main(){
    char input[10], str_n[10];
    int n;
    float w, g=0, sum_w = 0, sum=0;
    printf("Enter number of subject(s): ");
    fgets(str_n,10,stdin);
    n = atoi(str_n);
    for(int i=0; i<n; i++){
        printf("Enter credit,grade for subject #%d: ",i+1);
        fgets(input, 10, stdin);
        w = getWeight(input[2]);
        sum_w += (float)(input[0]-'0');
        sum += w*(int)(input[0]-'0');
        
    }
    printf("GPA = %.2f",sum/sum_w);
}

/*
3,b
3,b
4,a
3,a
3,b
3,A
1,A
1,a
*/
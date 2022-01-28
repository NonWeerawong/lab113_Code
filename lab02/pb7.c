#include <stdio.h>
#include <stdlib.h>
int main(){
    char str_x[10], str_y[10];
    int x, y;
    printf("Enter the x coordinate: ");
    fgets(str_x, 10, stdin);
    printf("Enter the y coordinate: ");
    fgets(str_y, 10, stdin);
    x = atoi(str_x);
    y = atoi(str_y);
    if(x==0 && y==0) {
        printf("Center");
    }
    else if(x<0){
        if(y==0) printf("West");
        else if(y>0) printf("North-west");
        else printf("South-west");
    }else if(x>0){
        if(y==0) printf("East");
        else if(y>0) printf("North-east");
        else printf("South-east");
    }else if(y>0){
        if(x==0) printf("North");
        else if(x>0) printf("North-East");
        else printf("Nouth-west");
    }else if(y<0){
        if(x==0) printf("South");
        else if(x>0) printf("South-East");
        else printf("South-west");
    }
}
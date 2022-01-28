#include <stdio.h>
#include <stdlib.h>

int main(){
    char s[10], p[10];
    fgets(s,10,stdin);
    fgets(p,10,stdin);
    int sk = atoi(s), percent, sticker;
    float price = atof(p), amount;
    if (sk==0){
        percent = 0;
        sticker = 0;
    }
    else if(sk==1){
        percent = 10;
        sticker = 0;
    }else if(sk==2){
        percent = 15;
        sticker = 0;
    }else if(sk==3 || sk <6){
        percent = 20;
        sticker = sk-3;
    }else if(sk >=6 && sk<9){
        percent = 30;
        sticker = sk-6;
    }else{
        percent = 40;
        sticker = sk-9;
    }
    amount = price*(100-percent)/100;
    printf("You get %d percents discount.\n", percent);
    printf("Total amount due is %.2f Baht.\n", amount);
    printf("And you have %d stickers left.\n", sticker);

    return 0;
}
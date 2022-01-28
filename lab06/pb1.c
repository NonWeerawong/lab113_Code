#include <stdio.h>

int main(){
    int hour, min;
    char format;
    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    scanf("%d:%d %c",&hour, &min, &format);
    // PM
    if(format=='P' || format=='p'){
        if(hour!=12)
            hour += 12;
    }
    // AM
    else{
        if(hour==12)
            hour = 0;
    }
    // output
    printf("Equivalent 24-hour time: %02d:%02d", hour, min);

    return 0;
}

// (m,n)

/*

1:00 am
2:00 am
3:00 am
4:00 am
5:00 am
6:00 am
7:00 am
8:00 am
9:00 am
10:00 am
11:00 am
12:00 am
01:00 pm
02:00 pm
03:00 pm
04:00 pm
05:00 pm
06:00 pm
07:00 pm
08:00 pm
09:00 pm
10:00 pm
11:00 pm
12:00 pm

11:11:11
*/
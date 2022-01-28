#include <stdio.h>
#include <stdlib.h>
int main()
{
    char hour_str[3], min_str[3];
    int hour, min;

    printf("Enter hour: ");
    gets(hour_str);

    printf("Enter minute: ");
    gets(min_str);

    hour = atoi(hour_str);
    min = atoi(min_str);

    printf("Time is %02d:%02d", hour, min);
}
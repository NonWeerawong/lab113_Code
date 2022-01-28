#include <stdio.h>

int count_target(int n, int target){
    int m, cnt=0;
    while(n){
        m = n%10;
        if(target==m)
            cnt++;
        n/=10;
    }
    return cnt;
}
#include <stdio.h>

void removeTarget(int *array, int size, int target){
    int i, j;
    for(i=j=0; i<size; i++){
        if(array[i]!=target)
            array[j++] = array[i];
    }
    if(j!=i)
        array[size-1] = 0;
}

int main(){
    int num, count, target, i;

    scanf("%d", &num);
    scanf("%d", &count);

    int numbers[num];
    int *numbersPtr = &numbers[0];

    // initialize array numbers from 1 to num by numbersPtr
    for (i=1; i<=num; i++,numbersPtr++) {
       *numbersPtr = i;
    }
    // loop through count
    for (i=0; i<count; i++) {
        scanf("%d", &target);
        removeTarget(&numbers[0], num, target);
    }
    numbersPtr = &numbers[0];
    // print elements in numbers using numberPtr
    for (; numbersPtr<numbers+num; numbersPtr++) {
           printf("%d ", *numbersPtr);
    }
    puts("");
}

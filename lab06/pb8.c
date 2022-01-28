#include <stdio.h>

void removeKilled(int *array, int size, int killedPrisoner);

int main()
{
	int numPrisoners, m, i;

	scanf("%d", &numPrisoners);
	scanf("%d", &m);

	int prisoners[numPrisoners];
	int killed[numPrisoners];

	// generate array 1 to numPrisoners
	for (i = 0; i < numPrisoners; i++) {
		prisoners[i] = i + 1;
	}
    int *killerPtr = &prisoners[0];

	// printf("@@ &prisoners[0] %d\n", (int) &prisoners[0]);
	// printf("@@ &prisoners[%d] %d\n", numPrisoners - 1, (int) &prisoners[numPrisoners - 1]);

	// Select prisoner to be killed
	
    for (i = 0; i < numPrisoners; i++) {
        
		killerPtr = &prisoners[0];
        static int pos=0;
        pos += m-1;
        pos %= numPrisoners-i;
        killerPtr += pos;
        
        // append number of prisoner who is killed to array `killed
        killed[i] = *killerPtr;
		// remove number killed prisoner from array `prisoners`
		removeKilled(&prisoners[0], numPrisoners, *killerPtr);
	}

	for (i = 0; i < numPrisoners; i++) {
		printf("%d ", killed[i]);
	}
}

void removeKilled(int *array, int size, int killedPrisoner)
{
    for(int i=0, j=0; i<size; i++)
        if(array[i]!=killedPrisoner)
            array[j++] = array[i];
}
// 0 1 2 3 4 5 6 7 8 9
// 1 0 0 4 5 0 7 8 0 10
// 1 2 4 5 6 7 8 9 10 10
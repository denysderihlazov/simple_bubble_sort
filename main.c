#include <stdio.h>

void bubbleSort(int *numbers, int arrSize)
{
    int temp;
    for(int i = 0; i < arrSize-1; i++) {
        if(numbers[i] > numbers[i+1]) {
            temp = numbers[i+1];
            numbers[i+1] = numbers[i];
            numbers[i] = temp;

            i = -1;
        }
    }
}

int main()
{
    int numbers[] = {2, 5, 9, 1, 5, 6, 8, 3, 4, 22, 5121, 245, 2, 53, 6};
    int arrSize = sizeof(numbers)/sizeof(numbers[0]);
    bubbleSort(numbers, arrSize);

    for(int i = 0; i < arrSize; i++) {
        printf(" %d\n", numbers[i]);
    }

    return 0;
}
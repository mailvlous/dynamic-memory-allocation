#include <stdio.h>
#include <stdlib.h>

int main() {
    int* array = (int*)malloc(10);

    if (array == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i <0; i++) {
        array[i] = i;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d", array[i]);
    }
    
    free(array);

    return 0;
}
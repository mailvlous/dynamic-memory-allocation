#include <stdio.h>
#include <stdlib.h>

int* createArray(int size) {
    int* array = malloc(sizeof(int) * size);

    if (array == NULL) {
        return NULL;
    }
    
    for (int i = 0; i < size; i++) {
        array[i] = i;
    }

    return array;
}

int main() {

    int size = 10;
    int count = 0;

    int* array = createArray(size); 

    for (int i = 0; i < size; i++) {
        printf("%d\n", array[i]);
        count++;
    }

    free(array);

    // int count = 0;
    // int size = 10;
    // int* array = malloc(sizeof(int) * size);

    // if (array == NULL) {
    //     printf("Memory allocation failed\n");
    //     return 1;
    // }

    // size++;
    // int* temp = realloc(array, sizeof(int) * size);
    // if(temp == NULL) {
    //     printf("Memory reallocation failed\n");
    //     return 1;
    // } else {
    //     array = temp;
    // }

    // for (int i = 0; i < size; i++) {
    //     array[i] = i;
    //     count++;
    // }

    // for (int i = 0; i < count; i++) {
    //     printf("%d", array[i]);
    // }
    
    // free(array);



    return 0;
}



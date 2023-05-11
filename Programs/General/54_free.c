#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int *f;
    f = (int *) malloc(5 * sizeof(int));
    if (f == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &f[i]);
    }
    
    printf("The size of the array: %lu\n", 5 * sizeof(int));
    
    printf("The elements in the array are: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", f[i]);
    }
    printf("\n");

    //freeing the memory
    free(f);
    printf("Memory has been freed!\n");
    
    return 0;
}

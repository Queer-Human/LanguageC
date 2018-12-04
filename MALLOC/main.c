#include <stdio.h>
#include <stdlib.h>

void test(){
//    int *array;
    int size = 10, i;
    int array[size];
//    array = (int*)malloc(size * sizeof(int));
//    if(array == NULL){
//        exit(1);
//    }
    for(i = 0 ; i < size ; i++){
        array[i] = size - i;
    }
    for(i = 0 ; i < size ; i++){
        printf("%d ",array[i]);
    }
//    free(array);
}
int main() {
    printf("Hello, World!\n");
    for (int i = 0; i < 10; ++i) {
        test();
    }
    return 0;
}
#include <stdio.h>


int main(){
    int array1[5];

    for(int i = 0; i < 5; i++){
        array1[i] = i * 2;
        printf("%d\n", array1[i]);
    }
}
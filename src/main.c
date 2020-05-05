#include <stdio.h>
#include "fibonacci.h"

int main(void){
    int n = 10;
    for (int i=0; i < n; i++){
        printf("fib(%d)=%d\n", i, fib(i));
    }
}
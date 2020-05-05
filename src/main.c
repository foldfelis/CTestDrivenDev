#include <stdio.h>
#include "fibonacci.h"
#include "factorial.h"

int main(void){
    int n = 10;
    for (int i=0; i < n; i++){
        printf("fib(%d)=%d\n", i, fib(i));
    }
    for (int i=0; i < n; i++){
        printf("factorial(%d)=%d\n", i, factorial(i));
    }
}

#include <stdio.h>
#include <assert.h>
#include "../src/fibonacci.h"
#include "test_fibonacci.h"

int test_fib(void){
    int n = 10;
    int ans[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};

    for (int i=0; i < n; i++){
        assert(fib(i) == ans[i]);
    }
    puts("\n"
         "##########################\n"
         "# Function 'fib' tested. #\n"
         "##########################");
}

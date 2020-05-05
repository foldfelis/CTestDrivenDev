#include <stdio.h>
#include <assert.h>
#include "../src/factorial.h"
#include "test_factorial.h"

int test_factorial(void){
    int n = 10;
    int ans[] = {1, 1 ,2, 6, 24, 120, 720, 5040, 40320, 362880};

    for (int i=0; i < n; i++){
        assert(factorial(i) == ans[i]);
    }
    puts("\n"
         "################################\n"
         "# Function 'factorial' tested. #\n"
         "################################");
}

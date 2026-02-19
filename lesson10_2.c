#include <stdio.h>

int function(int a; int b) {
    int c = a + b;
    
    return(c);
}

int main() {
    int result = function(3, 4);
    printf("%d \n", result);

    return 0;
}
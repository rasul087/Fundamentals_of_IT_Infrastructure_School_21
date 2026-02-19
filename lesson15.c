#include <stdio.h>
#include <string.h>

int main() {
    int a[4] = {5, 6, 7, 8};
    int b[4];

    memcpy(b, a, 16);

    for (int i = 0; i < 4; i++) {
        printf("%d", b[i]);
    }
    
    return 0;
}
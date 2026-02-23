#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("file.txt", "w");
    
    if (file == NULL) {
        printf("Не удалось открыть или создать файл!\n");
        return 1;
    }
    
    fprintf(file, "%d", 50);
    fclose(file);

    return 0;
}

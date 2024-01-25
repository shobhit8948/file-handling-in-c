#include <stdio.h>

int main() {
    FILE *file = fopen("myfile.txt", "w"); // "w" for write mode
    if (file != NULL) {
        // file created successfully
        fclose(file); // remember to close the file
    } else {
        // failed to create the file
    }
    return 0;
}

#include <stdio.h>
#include "fileIO.c"

int newItem(char* name) {
    printf("newItem");

        if (create_file(name) != 0) {
            printf("Failed to create file\n");
            return 1;
        }

        char data[strlen(name) * 100];

        strcat(data, "name: ");
        strcat(data, name);
        strcat(data, "\n");
        strcat(data, "Quantity: 0");

        //TODO: Substring name. Remove everything before the first / and after the last .

        file_write(name, data);
    return 0;
}

void main() {
    printf("main");
    newItem("Items/John.txt");
    //createFolder();
    printf("Finishing");
}
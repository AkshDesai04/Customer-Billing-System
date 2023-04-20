#include <stdio.h>
#include "fileIO.c"

int newItem(char* name) {
    printf("newItem");

        if (create_file(name) != 0) {
            printf("Failed to create file\n");
            return 1;
        }


        char data[strlen(name)];
//    data = name;
        printf("strcpy");
        strcpy(data, name);
        printf("strcpy");
//    data[strlen(data) - 4] = (char) "\0"; //removing ".txt" from file name

        file_write(name, "Aksh");

    return 0;
}

void main() {
    printf("main");
    newItem("Items/Aksh.txt");
    //createFolder();
    printf("Finishing");
}
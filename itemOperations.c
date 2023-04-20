#include <stdio.h>
#include <sys/stat.h>

int create_file(char* filename);


int createFolder() {
    printf("createFolder");

    int status;

    // Create folder "Items" with 755 permissions
    status = mkdir("Items");

    if (status == 0) {
        printf("Folder created successfully\n");
    } else {
        printf("Failed to create folder\n");
    }

    return 0;
}

int create_file(char* filename) {
    printf("create_file");

    FILE* fp;

    // Open the file in write mode
    fp = fopen(filename, "w");

    if (fp == NULL) {
        printf("Failed to create file\n");
        return -1;
    }

    // Close the file
    fclose(fp);

    printf("File created successfully\n");
    return 0;
}

int newItem(char* name) {
    printf("newItem");

    if (create_file(name) != 0) {
        printf("Failed to create file\n");
        return 1;
    }

    return 0;
}

void main() {
    printf("main");
    newItem("Items/Aksh.txt");
//    createFolder();
}
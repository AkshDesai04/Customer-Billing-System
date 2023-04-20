#include <stdio.h>
#include <string.h>
#include <sys/stat.h>


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

int file_write(char* file, char* data) {
    printf("In file write");
    FILE *fp;

    fp = fopen(file, "w"); // open file for writing

    if (fp == NULL) { // error checking
        printf("Error opening file.");
        return 1;
    }

    fprintf(fp, "%s", data); // write data to file

    fclose(fp); // close file

    return 0;
}
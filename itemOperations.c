#include <stdio.h>
#include <string.h>
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

int addItem(char* name, int quantity) {
    printf("1");
    char filename[strlen(name) * 5], temp[strlen(filename) * 5];
    char buffer[1024];

    temp[0] = '\0';

    strcpy(filename, name);
    strcat(filename, ".txt");
    strcat(temp, "Items/");
    strcat(temp, filename);
    printf("output");
    strcpy(filename, temp);
    printf("output");
    strcpy(filename, temp);
    printf("outputaksh");



    FILE* filePtr;
    filePtr = fopen(filename, "r");

    printf("4");

    if (filePtr == NULL) {
        printf("Error opening file %s\n", filename);
        return 1;
    }
    printf("5");
    printf("\n\n\n\n\n---*\n%s\n*---", fgets(buffer, 1024, filePtr));
    printf("6");

    return 0;
}

int main() {
//    printf("main");
//    newItem("Items/Coffee.txt");
//    addItem("Coffee", 5);
//    //createFolder();
//    printf("Finishing");

//    printf("Hola");
//    printf("Aksh%sAksh", fileNameCleanup("List/AkshDesai.txt"));
//    printf("Holalalala");

    printf("ok");
    addItem("Coffee", 10);
    printf("ok");

}
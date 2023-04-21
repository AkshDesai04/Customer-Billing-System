#include <stdio.h>
#include <string.h>
#include "fileIO.c"

int newItem(char* name, char* quantity, char* price) {
    printf("newItem");

        if (create_file(name) != 0) {
            printf("Failed to create file\n");
            return 1;
        }

        char data[strlen(name) * 100];

        strcat(data, "name: ");
    printf("1");

        strcat(data, name);
    printf("2");

        strcat(data, "\n");
    printf("3");

        strcat(data, "Price: ");
    printf("4");

        strcat(data, price);
    printf("5");

        strcat(data, "\n");
    printf("6");

        strcat(data, "Quantity: ");
    printf("7");

        strcat(data, quantity);
    printf("8");


    printf("9");
    printf("%s", &data);
    printf("10");

        //TODO: Substring name. Remove everything before the first / and after the last .

        file_write(name, data);
    return 0;
}

int addItem(char* name, int quantity) {
    char filename[strlen(name) * 5], temp[strlen(filename) * 5];
    char buffer[1024];

    temp[0] = '\0';

    strcpy(filename, name);
    strcat(filename, ".txt");
    strcat(temp, "Items/");
    strcat(temp, filename);
    strcpy(filename, temp);
    strcpy(filename, temp);

    FILE* filePtr;
    filePtr = fopen(filename, "r");

    if (filePtr == NULL) {
        printf("Error opening file %s\n", filename);
        return 1;
    }
    printf("\n\n\n\n\n---*\n%s\n*---", fgets(buffer, 1024, filePtr)); //Remove Later

    return 0;
}

int main() {
//    printf("main");
//    newItem("Items/Coffee.txt", "10", "69.420");
//    addItem("Coffee", 5);
//    //createFolder();
//    printf("Finishing");

//    printf("Hola");
//    printf("Aksh%sAksh", fileNameCleanup("List/AkshDesai.txt"));
//    printf("Holalalala");

//    printf("ok");
//    addItem("Coffee", 10);
//    printf("ok");
}
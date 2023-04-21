#include <stdio.h>
#include <string.h>
#include <dirent.h>

#include "fileIO.c"

int newItem(char* name, char* quantity, char* price) {
        if (create_file(name) != 0) {
            printf("Failed to create file\n");
            return 1;
        }

        char data[strlen(name) * 100];

        strcat(data, "name: ");
        strcat(data, name);
        strcat(data, "\n");
        strcat(data, "Price: ");
        strcat(data, price);
        strcat(data, "\n");
        strcat(data, "Quantity: ");
        strcat(data, quantity);

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

void printFolderItems(char* folderName) {
    DIR *d;
    int x;
    struct dirent *dir;
    d = opendir(folderName);
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            x = strlen(dir->d_name) - 4;
            for(int i = 0;i < x;i++)
                printf("%c", dir->d_name[i]);
            printf("\n");
        }
        closedir(d);
    }
}

void deleteFile(char* file_name) {
    if(remove(file_name) == 0)
        printf("Removed successfully");
    else
        printf("Error");
}

int main() {
//    printf("main");
//    newItem("Items/Tea.txt", "100", "10");
    deleteFile("Items/Coffee.txt");
//    addItem("Coffee", 5);
//    //createFolder();
//    printf("Finishing");

//    printf("Hola");
//    printf("Aksh%sAksh", fileNameCleanup("List/AkshDesai.txt"));
//    printf("Holalalala");

//    printf("ok");
//    addItem("Coffee", 10);
//    printf("ok");
    printFolderItems("Items");
    return 0;
}
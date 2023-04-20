#include <stdio.h>
#include <string.h>

//char[] readFileContents() {
//
//}

char* listItemsFromFile (char fileName[]) {
    FILE *filePtr = fopen("list.txt", "r");
    char data[1000000] = "";
    if(filePtr == NULL) {
        printf("File not found.");
        return "";
    }

    while(fgets(data, 1000000, filePtr) != NULL) {
        printf("%s", data);
    }
}
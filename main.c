#include <stdio.h>
#include <string.h>
#include "fileIO.c"

void displayAvailableItems();

void main() {
    int cv;

    printf("Enter your choice.\n");
    scanf("%d", &cv);

    switch(cv) {
        case 1:
            displayAvailableItems();
            break;

        case 2:
            printf("Enter the name of item to check price of.");
            showPrices(scanf("%s"));
            break;
//
        case 3:
            deleteItem();
            break;
//
//        case 4:
//            applyDiscount();
//            break;
//
//        case 5:
//            paymentMode();
//            break;

        default:
            printf("Please try again.\n");
    }
}

void displayAvailableItems() {
//    printf(listItemsFromFile("list.txt"));
//    TODO:Print all file names in Items directory without the ".txt" extention
}
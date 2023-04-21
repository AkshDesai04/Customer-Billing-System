#include <stdio.h>
#include "itemOperations.c"

void main() {
    while(1) {
        int cv;

        char item[1000], price[10], quantity[10];     //case 1 variables
        char flag[1000];

        printFolderItems("Items");

        printf("Enter choice\n");

//        add a new item
//        delete an item
//        show price for an item
//        buy something
//            apply a discount



        scanf("%d", &cv);
        switch(cv) {
            case 1:
                printf("Enter item name.\n");
                gets(item);
                gets(item);
                printf("Enter item price.\n");
                gets(price);
                printf("Enter item quantity.\n");
                gets(quantity);

                item[strlen(item)] = '.';
                item[strlen(item) + 1] = 't';
                item[strlen(item) + 2] = 'x';
                item[strlen(item) + 3] = 't';

                newItem(item, price, quantity);

                //TODO: add ".txt" to item name end
                //TODO: add "Items/" to beginning of file name

                break;
            case 2:
                printf("Enter name of item to delete.\n");
                gets(item);

                flag[0] = 'I';
                flag[1] = 't';
                flag[2] = 'e';
                flag[3] = 'm';
                flag[4] = 's';
                flag[5] = '/';

                for(int i = 6;i < strlen(item) + 6;i++)
                    flag[i] = item[i-6];
                flag[strlen(item) + 6] = '.';
                flag[strlen(item) + 7] = 't';
                flag[strlen(item) + 8] = 'x';
                flag[strlen(item) + 9] = 't';
                flag[strlen(flag) + 5] = '\0';

                printf("%s", flag);

                deleteFile(flag);
                break;
            case 3:
                break;
            case 4:
                break;
            default:
                printf("please try again.");
                continue;
        }
    }
}
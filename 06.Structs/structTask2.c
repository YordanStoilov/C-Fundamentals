#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct Item
{
    char* name;
    int quantity;
    double price;
    double amount;
} Item;

void itemConstructor(Item* item);
void printItem(Item *item);

int main()
{
    Item item;
    itemConstructor(&item);
    printItem(&item); // Item: apple, quantity: 3, price: 2.99, amount: 8.97
}

void itemConstructor(Item* item)
{
    char* name = (char*)malloc(15 * sizeof(char));
    int quantity;
    double price;
    double amount;

    printf("Enter name: \n");
    scanf("%s", name);

    printf("Enter quantity: \n");
    scanf("%d", &quantity);

    printf("Enter price: \n");
    scanf("%lf", &price);

    amount = quantity * price;

    item->name = name;
    item->amount = amount;
    item->price = price;
    item->quantity = quantity;
}

void printItem(Item *item)
{
    printf("Item: %s, quantity: %d, price: %.2lf, amount: %.2lf\n", 
        item->name, item->quantity, item->price, item->amount);
}
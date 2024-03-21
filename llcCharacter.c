//
// Created by jeana on 21/03/2024.
//

#include "llcCharacter.h"

Cell *makeCell(char value) {
    Cell *newCell = (Cell *) malloc(sizeof(Cell));
    newCell->value = value;
    newCell->next = NULL;
    return newCell;
}

void addValueToList(char value, List *list) {
    Cell *newCell = makeCell(value);
    if (*list == NULL) {
        *list = newCell;
    } else {
        Cell *tmp = *list;
        while (tmp->next != NULL) {
            tmp = tmp->next;
        }
        tmp->next = newCell;
    }
}

void displayList(List list) {
    Cell *tmp = list;
    while (tmp != NULL) {
        printf("%c", tmp->value);
        tmp = tmp->next;
    }
    printf("\n");
}

int getLengthOfList(List list) {
    Cell *tmp = list;
    int lengthOfList = 0;
    while (tmp != NULL) {
        lengthOfList++;
        tmp = tmp->next;
    }
    return lengthOfList;
}

int insertValueIntoListAt(List *list, char value, int index) {
    Cell *newCell = makeCell(value);
    if (*list == NULL || index <= 0) {
        newCell->next = *list;
        *list = newCell;
        return 0;
    }
    Cell *tmp = *list;
    int currentIndex = 0;
    while (tmp->next != NULL && ++currentIndex + 1 < index) {
        tmp = tmp->next;
    }
    newCell->next = tmp->next;
    tmp->next = newCell;
    return currentIndex;
}
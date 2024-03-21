//
// Created by jeana on 21/03/2024.
//
#include <stdlib.h>
#include <stdio.h>

#ifndef EFREI_LLC_CHARACTER_LLCCHARACTER_H
#define EFREI_LLC_CHARACTER_LLCCHARACTER_H
typedef struct Cell {
    char value;
    struct Cell *next;
} Cell;

typedef Cell *List;

Cell *makeCell(char value);

void addValueToList(char value, List *list);

void displayList(List list);

int getLengthOfList(List list);

int insertValueIntoListAt(List *list, char value, int index);

#endif //EFREI_LLC_CHARACTER_LLCCHARACTER_H

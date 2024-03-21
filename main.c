#include <stdio.h>
#include "llcCharacter.h"

int main() {
    List myList = NULL;
    for (char c = 'A'; c <= 'Z'; c++) {
        addValueToList(c, &myList);
    }
    displayList(myList);
    printf("%d\n", getLengthOfList(myList));
    printf("%d\n", insertValueIntoListAt(&myList, '?', 145));
    displayList(myList);
    return 0;
}

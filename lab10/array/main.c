#include "array.h"

int main() {
    int* array;
    int sz, s;
    printf("arrayiin hemjee: \n");
    scanf("%d", &sz);
    array = createArray(sz);
    read(array, sz);
    print(array, sz);
    printf("min utga: %d\n", minA(array, sz));
    printf("max utga: %d\n", maxA(array, sz));
    printf("dundaj utga: %.2f\n", average(array, sz));
    printf("haih utga: \n");
    scanf("%d", &s);
    int index = searchA(array, sz, s);
    if (index != -1) {
        printf("Oldson utgiin index: %d\n", index);
    } else {
        printf("Utga oldsongui.\n");
    }
    sortA(array, sz);
    printf("Sort hiisnii daraa:\n");
    print(array, sz);
    deleteArray(array);

    return 0;
}


#include <stdio.h>
#define MAX_IDS 5

void populate(int ids[],int i){
    static unsigned int counter = 0; // static value to preserve it on each iteration
    ids[i] = counter;
    printf("Populating array: %d\n", counter);
    counter++;
}

int main(int argc, char *argv[]){
    int ids[MAX_IDS] = {0};
    for (unsigned int i = 0; i <= MAX_IDS; i++){
        populate(ids, i);
    }
    for (int i = 0; i <= MAX_IDS; i++){
        printf("Position: %i, Value: %d\n", i, ids[i]);
    }
    return 0;
}

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
    int i = 0;
    while(i <= MAX_IDS){
        populate(ids, i); 
        i++;
    }
    for (int i = 0; i <= MAX_IDS; i++){
        printf("\nPosition: %i, Value: %d", i, ids[i]);
    }
    return 0;
}
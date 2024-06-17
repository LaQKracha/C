#include <stdio.h>
#define MAX_ID 32

int main(int argc, char *argv[]){
    // if we want to have multiple values with the same variable type
    // int ids[] = {1,2,3};
    int ids[MAX_ID] = {1,2,3};
    // obtaining a value from array
    printf("%d\n", ids[0]);
    ids[3] = 0x6E;
    printf("%d\n", ids[3]);
    return 0;
}
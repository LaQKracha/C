#include <stdio.h>
#define MAX_PERSONS 1024

#define DEBUG // define variables as constants
/* We can control how our function behaves at compile time*/ 

/*
Compilation Process
1. Preprocessor
2. Compilation
3. Assembling
4. Linking
*/

int main(int argc, char *argv[]){

    #ifdef DEBUG
    printf("We are in debug mode: %s:%d", __FILE__, __LINE__);
    #endif

    return 0;
}
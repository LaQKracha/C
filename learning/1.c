#include <stdio.h>

int global = 0; // global variable
// we don't want to use this ones because of the variable tracking

int main(int argc, char *argv[]){
    int id = 0; // local variables
    { // sub local scope
        int id = 0;
    }
}

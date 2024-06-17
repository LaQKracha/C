#include <stdio.h>
#define MAX 32


int main(int argc, char *argv[]){
    int ids[MAX] = {0,1,2};
    // Strings are just arrays of chars
    // char mystr[] = {'s','t','r','i','n','g'};

    /*
    The above way has a vulnerability if you don't use a 0 at the end of the array,
    because it must be null terminated by a 0x00 byte, so it must look like this:
    
    char mystr[] = {'s','t','r','i','n','g', 0};

    If not, there's a chance that the program leaks data after the string, showing us the stack of the program where memory is and show it to us. It could allow us to hack the program
    */

    // printf("%s\n", mystr);
    char *st = "I'm a string, but cool"; // when we use this way with " the compiler by default knows that is null terminated, so it adds the null terminator by itself.
    printf("%s\n", st);

    // strcpy(dest, src); // run the copy operation untill null byte
    // strncpy(dest, src, n);

    return 0;
}
#include <stdio.h>
#include <Windows.h>

int main() {
    PVOID paddr = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, 100);
    CHAR* cString = "Writing on Memory";
    memcpy(paddr, cString, strlen(cString));
    printf("[+] Address of Allocated Memory: 0x%p\n", paddr);
    printf("[+] String in Memory: %s\n", paddr);
    printf("[#] Press Enter to quit ...");
    getchar();
    HeapFree(GetProcessHeap(), 0, paddr);
    paddr = NULL;
    return 0;
}

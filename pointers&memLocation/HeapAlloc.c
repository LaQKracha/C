#include <stdio.h>
#include <Windows.h>

int main() {
    PVOID paddr = HeapAlloc(GetProcessHeap(), 0, 100);
    printf("[+] Base Address: 0x%p\n", paddr);
    printf("[#] Press Enter to quit ...");
    getchar();
    HeapFree(GetProcessHeap(), 0, paddr);
    paddr = NULL;
    return 0;
}

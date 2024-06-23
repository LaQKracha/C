#include <stdio.h>
#include <Windows.h>

int main() {
	// Allocating mamory
	
	// malloc()
	PVOID paddress = malloc(100);
	// HeapAlloc()
	PVOID paddressH = HeapAlloc(GetProcessHeap(), 0, 100);
	//LocalAlloc()
	PVOID paddressL = LocalAlloc(LPTR, 100);



	free(paddress);
	paddress = NULL;
	free(paddressH);
	paddressH = NULL;
	free(paddressL);
	paddressL = NULL;
	return 0;
}

#include <windows.h>
#include <stdio.h>

/*
THIS CREATES OUT FAKE ERROR MESSAGE BOX! COMPILE THIS FIRST AND NAME RESULTING EXECUTABLE "MALICIOUS_APP.exe"
*/

int main(void) {
   MessageBoxW(
      NULL, 
      L"WARNING MESSAGE: Malicious process created !", 
      L"TITLE: See warning message below", 
      MB_YESNOCANCEL | MB_ICONEXCLAMATION
   );
   return EXIT_SUCCESS;

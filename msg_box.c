#include <windows.h>
#include <stdio.h>

/*
INFO ->
*/

int main(void) {
   MessageBoxW(
      NULL, 
      L"WARNING MESSAGE: Malicious process created !", 
      L"TITLE: See warning message below", 
      MB_YESNOCANCEL | MB_ICONEXCLAMATION
   );
   return EXIT_SUCCESS;

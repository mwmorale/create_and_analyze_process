#include <windows.h>
#include <stdio.h>

/*
THIS SPAWNS A PROCESS OF "msg_box.c" AND ANALYZES! COMPILE THIS SECOND AND THEN RUN RESULTING EXECUTABLE 
*/

int main(void) {

   STARTUPINFOW si = { 0 };
   PROCESS_INFORMATION pi = { 0 };

   // The NULL arg's below mean "dw for now"
   if ( !CreateProcessW( 
         L"C:\\Users\\USER\\PATH\\TO\\MALICIOUS_APP.exe",
         NULL,
         NULL,
         NULL,
         FALSE,
         BELOW_NORMAL_PRIORITY_CLASS,
         NULL,
         NULL,
         &si,
         &pi
   )) {

      printf("\n[-] FAILED TO CREATE PROCESS.. ERROR: %ld", GetLastError());
      return EXIT_FAILURE;
   }

   printf("\n[+] PROCESS STARTED...");
   printf("\n...PID: %ld", pi.dwProcessId);
   printf("\n...THREAD ID(?): %ld", pi.dwThreadId);
   printf("\n...hProcess (Process Handler?): %ld", pi.hProcess);
   printf("\n...hThread (Thread Handler?): %ld", pi.hThread);

   return EXIT_SUCCESS; // Same as return 0 !!

}


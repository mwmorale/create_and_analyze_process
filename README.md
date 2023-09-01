# create_and_analyze_process
Create and then analyze this process

Using Windows, I am using C to explore "windows.h" (from Win32 API) in order to create my own process and then analyze this process. 
Our output should include details such as process ID, thread ID, process handler, thread handler etc. 


  
----- Please follow the steps below -----

[1] CREATE OUR APP/PROCESS -> compile "msg_box.c" and choose output executable to be "MALICIOUS_APP.exe" (EXAMPLE: gcc -o MALICIOUS_APP.exe msg_box.c)
[2] ENTER PATH TO "MALICIOUS_APP.exe" WITHIN "create_process.c"
[3] COMPILE "create_process.c" -> output executable name of your choosing (EXAMPLE: "gcc create_process.c" would return a.exe)
[4] RUN APP/EXECUTABLE CREATED ABOVE -> we see a "MALICIOUS_APP.exe" process spawned and analysis printed




----- FILES INVOLVED -----

msg_box.c -> this file creates our app/process (a message box FAKE warning) and will result in an executable 
create_process.c -> this file analyzes our process
* MALICIOUS_APP.exe -> this is what you name the resulting executable after compiling "msg_box.c"
* a.exe -> default executables name after compiling "create_process.c"


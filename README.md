# leetcode
It's not the best but it works...

Setup debugger in Visual Studio Code (Windows):
1. Build .c file as debug version in Visual Studio Developer Command Prompt 2015
    cl /Zi name.c
   An executable file (name.exe) will be created.
2. Configure launch.json as following in Visual Studio Code
  {
    "version": "0.2.0",
    "configurations": [

        {
            "name": "(Windows) Launch",
            "type": "cppvsdbg",
            "request": "launch",
            "program": "${workspaceRoot}/name.exe",
            //"symbolSearchPath": "${workspaceRoot}",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${workspaceRoot}",
            "environment": [],
            "externalConsole": false
        }
    ]
  }
 3. Run, set breakpoints, debug and enjoy :)

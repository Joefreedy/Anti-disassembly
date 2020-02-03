# Anti-disassembly
Anti-disassembly technique

OutputDebugString
```
The kernel32 OutputDebugString() function can demonstrate different behaviour, depending on the version of Windows, and whether or not a debugger is present. The most obvious difference in behaviour that the kernel32 GetLastError() function will return zero if a debugger is present, and non-zero if a debugger is not present. However, this applies only to Windows NT/2000/XP. On Windows Vista and later, the error code is unchanged in all cases. The check can be made using this 32-bit code to examine the 32-bit Windows environment on either the 32-bit or 64-bit versions of Windows.

```
IsDebuggerPresent
```
The kernel32 IsDebuggerPresent() function was introduced in Windows 95. It returns a non-zero value if a debugger is present. The check can be made using this code (identical for 32-bit and 64- bit) to examine either the 32-bit or 64-bit Windows environment.

```
GetTickCount
```
The check can be made for the kernel32 GetTickCount() function using this code (identical for 32-bit and 64-bit) to examine either the 32-bit or 64-bit Windows environment.

```



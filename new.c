#include <windows.h>
#include <stdio.h>
int main()
{

	register int eax asm("%eax"); // register eox to read
	
	OutputDebugString("hayirdir");
	
	if(eax > 1)
	{
		printf("Debugger Detected - OutputDebugString");
		return 0;
	}
 
	if(IsDebuggerPresent())
	{ 
		printf("Debugger Detected - IsDebuggerPresent"); 
		return 0; 
	}

	int count = GetTickCount();
	int count2 = GetTickCount();
	printf("Tick Count #1 = %d\n", count);
	printf("Tick Count #2 = %d\n", count2);
	if(count == count2)
	{
		printf("tamam tamam gectin");
	}
	
	return 0;
}

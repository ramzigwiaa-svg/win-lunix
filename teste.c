#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif
#include <stdlib.h>

int main(void)
{
#ifdef _WIN32
    MessageBoxA(NULL, W"نويرة", "Test", MB_OK);
    system("start CMD");
#else
    printf("Hello from Linux\n");
    sleep(2);
    system("qterminal");

#endif
    return 0;
}
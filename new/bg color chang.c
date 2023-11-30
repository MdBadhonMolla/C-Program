#include<windows.h>
#include<stdio.h>

int main()
{
     printf("%c[%dmHELLO!\n", 0x1B, 42);
     printf("%c[%dmHELLO!\n", 0x1B, 40);
}

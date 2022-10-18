#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	start:
     Beep(391,250);
Beep(0,20);
Beep(391,250);
Beep(440,250);
Beep(391,250);
Beep(523,250);
Beep(493,500);
Beep(0,300);

Beep(391,250);
Beep(0,20);
Beep(391,250);
Beep(440,250);
Beep(391,250);
Beep(587,250);
Beep(523,500);

Beep(391,250);
Beep(391,250);
Beep(783,250);
Beep(659,250);
Beep(523,250);
Beep(493,250);
Beep(440,400);

Beep(698,250);
Beep(698,250);
Beep(659,250);
Beep(523,250);
Beep(587,250);
Beep(523,600);

goto start;

}

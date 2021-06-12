#include "Head.h"//for our user defined functions
#include<windows.h>    
#include "mmsystem.h" 
int main()
{

PlaySound(TEXT("Welcome.wav"), NULL, SND_FILENAME);
 mainHome();

    return 0;
}
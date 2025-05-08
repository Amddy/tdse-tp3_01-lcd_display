//=====[Libraries]=============================================================
#include "display.h"

static void userInterfaceDisplayInit();

//=====[Main function, the program entry point after power on or reset]========

int main()
{
    userInterfaceDisplayInit();
    while (true) {
    }
}


static void userInterfaceDisplayInit()
{
    displayInit( DISPLAY_CONNECTION_GPIO_4BITS );
     
    displayCharPositionWrite ( 0,0 );
    displayStringWrite( "Display.txt" );

}
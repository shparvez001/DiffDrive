#include <DiffDrive.h>


// Motor Control. Change for hardware specific
int M4DIRA = 4;
int M4DIRB = 5;
int M3DIRA = 6;
int M3DIRB = 7;
int M2DIRA = 8;
int M2DIRB = 9;
int M1DIRA = 10;
int M1DIRB = 11;


DiffDrive robot(M4DIRA, M4DIRB, M3DIRA, M3DIRB, M2DIRA, M2DIRB, M1DIRA, M1DIRB);


void setup()
{
    robot.forward();
    delay(200);
    robot.reverse();
    delay(200);
    robot.right();
    delay(200);
    robot.left();
    delay(200);
}

void loop()
{    
    robot.forward();
}



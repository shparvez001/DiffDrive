#include <DiffDrive.h>


// Motor Control. Change for hardware specific
int M2DIRA = 4;
int M2DIRB = 5;
int M1DIRA = 6;
int M1DIRB = 7;

DiffDrive robot(M2DIRA, M2DIRB, M1DIRA, M1DIRB);


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



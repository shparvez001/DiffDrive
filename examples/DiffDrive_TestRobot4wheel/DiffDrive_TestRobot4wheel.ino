#include <DiffDrive.h>


// Motor Control. Change for hardware specific
int M2DIRA = 4;
int M2DIRB = 5;
int M1DIRA = 6;
int M1DIRB = 7;
int M4DIRA = 8;
int M4DIRB = 9;
int M3DIRA = 10;
int M3DIRB = 11;

DiffDrive robot(M2DIRA, M4DIRB, M3DIRA, M3DIRB, M2DIRA, M2DIRB, M1DIRA, M1DIRB);


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

    


    // initialize serial communication at 9600 bits per second:
    //Serial.begin(9600);

}

void loop()
{
 
    
    robot.forward();
}



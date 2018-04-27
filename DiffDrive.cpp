/*
  DiffDrive version 1
  DiffDrive.cpp - Library for Driving differential drive robots easily.
  Created by Shahadat H. Parvez, August 29, 2017.
  Released into the public domain.


*/

/*
Remote control car test as just motor controller
M1 & M3 [odd] is left motor and M2 & M4[even] is right motor
DIRA is forward and DIRB is backward
For 2 motor mode use M1 and M2 only
*/

#include "Arduino.h"
#include "DiffDrive.h"


DiffDrive::DiffDrive(int M4DIRA,int M4DIRB,int M3DIRA,int M3DIRB,int M2DIRA,int M2DIRB,int M1DIRA,int M1DIRB)
{
    _M4DIRA=M4DIRA;
    _M4DIRB=M4DIRB;
    _M3DIRA=M3DIRA;
    _M3DIRB=M3DIRB;
    _M2DIRA=M2DIRA;
    _M2DIRB=M2DIRB;
    _M1DIRA=M1DIRA;
    _M1DIRB=M1DIRB;

    pinMode(_M4DIRA, OUTPUT);
    pinMode(_M4DIRB, OUTPUT);
    pinMode(_M3DIRA, OUTPUT);
    pinMode(_M3DIRB, OUTPUT);
    pinMode(_M2DIRA, OUTPUT);
    pinMode(_M2DIRB, OUTPUT);
    pinMode(_M1DIRA, OUTPUT);
    pinMode(_M1DIRB, OUTPUT);
    _wheel=4;

}

DiffDrive::DiffDrive(int M2DIRA,int M2DIRB,int M1DIRA,int M1DIRB)

{

    _M2DIRA=M2DIRA;
    _M2DIRB=M2DIRB;
    _M1DIRA=M1DIRA;
    _M1DIRB=M1DIRB;

    pinMode(_M2DIRA, OUTPUT);
    pinMode(_M2DIRB, OUTPUT);
    pinMode(_M1DIRA, OUTPUT);
    pinMode(_M1DIRB, OUTPUT);
    _wheel=2;


}


void DiffDrive::forward()
{
    if (_wheel==4)
    {
        digitalWrite(_M1DIRA, HIGH);    //set M1
        digitalWrite(_M1DIRB, LOW);
        digitalWrite(_M3DIRA, HIGH);    //set M3
        digitalWrite(_M3DIRB, LOW);

        digitalWrite(_M2DIRA, HIGH);    //set M2
        digitalWrite(_M2DIRB, LOW);
        digitalWrite(_M4DIRA, HIGH);    //set M4
        digitalWrite(_M2DIRB, LOW);

    }

    else if (_wheel==2)
    {
        digitalWrite(_M1DIRA, HIGH);    //set M1
        digitalWrite(_M1DIRB, LOW);

        digitalWrite(_M2DIRA, HIGH);    //set M2
        digitalWrite(_M2DIRB, LOW);

    }
}

void DiffDrive:: reverse()
{
    if (_wheel==4)
    {
        digitalWrite(_M1DIRA, LOW);    //Reverse M1
        digitalWrite(_M1DIRB, HIGH);
        digitalWrite(_M3DIRA, LOW);    //Reverse M4
        digitalWrite(_M3DIRB, HIGH);

        digitalWrite(_M2DIRA, LOW);    //Reverse M2
        digitalWrite(_M2DIRB, HIGH);
        digitalWrite(_M4DIRA, LOW);    //Reverse M4
        digitalWrite(_M4DIRB, HIGH);


    }

    else if (_wheel==2)
    {
        digitalWrite(_M1DIRA, LOW);    //Reverse M1
        digitalWrite(_M1DIRB, HIGH);

        digitalWrite(_M2DIRA, LOW);    //Reverse M2
        digitalWrite(_M2DIRB, HIGH);
    }
}



void DiffDrive:: left()
{
    if (_wheel==4)
    {
        digitalWrite(_M1DIRA, LOW);    //Off M1
        digitalWrite(_M1DIRB, LOW);
        digitalWrite(_M3DIRA, LOW);    //Off M3
        digitalWrite(_M3DIRB, LOW);


        digitalWrite(_M2DIRA, HIGH);    //set M2
        digitalWrite(_M2DIRB, LOW);
        digitalWrite(_M4DIRA, HIGH);    //set M4
        digitalWrite(_M4DIRB, LOW);
    }

    else if (_wheel==2)
    {
        digitalWrite(_M1DIRA, LOW);    //Off M1
        digitalWrite(_M1DIRB, LOW);


        digitalWrite(_M2DIRA, HIGH);    //set M2
        digitalWrite(_M2DIRB, LOW);
    }
}


void DiffDrive:: hardLeft()
{
    if (_wheel==4)
    {
        digitalWrite(_M1DIRA, LOW);    //Reverse M1
        digitalWrite(_M1DIRB, HIGH);
        digitalWrite(_M3DIRA, LOW);    //Reverse M3
        digitalWrite(_M3DIRB, HIGH);

        digitalWrite(_M2DIRA, HIGH);    //set M2
        digitalWrite(_M2DIRB, LOW);
        digitalWrite(_M4DIRA, HIGH);    //set M4
        digitalWrite(_M4DIRB, LOW);
    }


    else if (_wheel==2)
    {
        digitalWrite(_M1DIRA, LOW);    //Reverse M1
        digitalWrite(_M1DIRB, HIGH);

        digitalWrite(_M2DIRA, HIGH);    //set M2
        digitalWrite(_M2DIRB, LOW);
    }
}

void DiffDrive:: right()
{
    if (_wheel==4)
    {
        digitalWrite(_M1DIRA, HIGH);    //set M1
        digitalWrite(_M1DIRB, LOW);
        digitalWrite(_M3DIRA, HIGH);    //set M3
        digitalWrite(_M3DIRB, LOW);

        digitalWrite(_M2DIRA, LOW);    //Off M2
        digitalWrite(_M2DIRB, LOW);
        digitalWrite(_M4DIRA, LOW);    //Off M2
        digitalWrite(_M4DIRB, LOW);
    }

    else if (_wheel==2)
    {
        digitalWrite(_M1DIRA, HIGH);    //set M1
        digitalWrite(_M1DIRB, LOW);

        digitalWrite(_M2DIRA, LOW);    //Off M2
        digitalWrite(_M2DIRB, LOW);
    }
}

void DiffDrive:: hardRight()
{
    if (_wheel==4)
    {
        digitalWrite(_M1DIRA, HIGH);    //set M1
        digitalWrite(_M1DIRB, LOW);
        digitalWrite(_M3DIRA, HIGH);    //set M3
        digitalWrite(_M3DIRB, LOW);

        digitalWrite(_M2DIRA, LOW);    //Reverse M2
        digitalWrite(_M2DIRB, HIGH);
        digitalWrite(_M4DIRA, LOW);    //Reverse M4
        digitalWrite(_M4DIRB, HIGH);
    }

    else if (_wheel==2)
    {
        digitalWrite(_M1DIRA, HIGH);    //set M1
        digitalWrite(_M1DIRB, LOW);

        digitalWrite(_M2DIRA, LOW);    //Reverse M2
        digitalWrite(_M2DIRB, HIGH);
    }
}

void DiffDrive:: brake()
{
    if (_wheel==4)
    {
        digitalWrite(_M1DIRA, LOW);    //Off M1
        digitalWrite(_M1DIRB, LOW);
        digitalWrite(_M3DIRA, LOW);    //Off M3
        digitalWrite(_M3DIRB, LOW);

        digitalWrite(_M2DIRA, LOW);    //off M2
        digitalWrite(_M2DIRB, LOW);
        digitalWrite(_M4DIRA, LOW);    //off M4
        digitalWrite(_M4DIRB, LOW);
    }

    else if (_wheel==2)
    {
        digitalWrite(_M1DIRA, LOW);    //Off M1
        digitalWrite(_M1DIRB, LOW);

        digitalWrite(_M2DIRA, LOW);    //off M2
        digitalWrite(_M2DIRB, LOW);
    }
}

void DiffDrive:: reverseLeft()
{
    if (_wheel==4)
    {
        digitalWrite(_M1DIRA, LOW);    //Off M1
        digitalWrite(_M1DIRB, LOW);
        digitalWrite(_M3DIRA, LOW);    //Off M3
        digitalWrite(_M3DIRB, LOW);

        digitalWrite(_M2DIRA, LOW);    //Reverse M2
        digitalWrite(_M2DIRB, HIGH);
        digitalWrite(_M4DIRA, LOW);    //Reverse M4
        digitalWrite(_M4DIRB, HIGH);
    }

    else if (_wheel==2)
    {
        digitalWrite(_M1DIRA, LOW);    //Off M1
        digitalWrite(_M1DIRB, LOW);

        digitalWrite(_M2DIRA, LOW);    //Reverse M2
        digitalWrite(_M2DIRB, HIGH);
    }
}

void DiffDrive:: reverseRight()
{
    if (_wheel==4)
    {
        digitalWrite(_M1DIRA, LOW);    //Reverse M1
        digitalWrite(_M1DIRB, HIGH);
        digitalWrite(_M3DIRA, LOW);    //Reverse M3
        digitalWrite(_M3DIRB, HIGH);

        digitalWrite(_M2DIRA, LOW);    //off M2
        digitalWrite(_M2DIRB, LOW);
        digitalWrite(_M4DIRA, LOW);    //off M4
        digitalWrite(_M4DIRB, LOW);
    }

    else if (_wheel==2)
    {
        digitalWrite(_M1DIRA, LOW);    //Reverse M1
        digitalWrite(_M1DIRB, HIGH);

        digitalWrite(_M2DIRA, LOW);    //off M2
        digitalWrite(_M2DIRB, LOW);
    }
}



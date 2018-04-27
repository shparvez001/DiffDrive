/*
  DiffDrive version 1
  DiffDrive.h - Library for Driving differential drive robots easily.
  Created by Shahadat H. Parvez, August 29, 2017.
  Released into the public domain.
*/
#ifndef DiffDrive_h
#define DiffDrive_h

#include "Arduino.h"

class DiffDrive
{
public:
    DiffDrive(int M2DIRA,int M2DIRB,int M1DIRA,int M1DIRB);
    DiffDrive(int M4DIRA,int M4DIRB,int M3DIRA,int M3DIRB,int M2DIRA,int M2DIRB,int M1DIRA,int M1DIRB);
    void forward();
    void reverse();
    void left();
    void hardLeft();
    void right();
    void hardRight();
    void brake();
    void reverseLeft();
    void reverseRight();

private:
    int _M4DIRA;
    int _M4DIRB;
    int _M3DIRA;
    int _M3DIRB;
    int _M2DIRA;
    int _M2DIRB;
    int _M1DIRA;
    int _M1DIRB;
    int _wheel;

};

#endif

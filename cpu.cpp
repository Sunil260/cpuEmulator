/*
CPU class for emu
*/
#include "cpu.h"

CPU:: CPU()
{
    PC=0;
    SP=0;

    //3 core 8 bit registers
    A, X, Y=0;  
    
    //Status Flags
    C = Z = I = D = B = V = N = 0;
}

void CPU:: Reset()
{
    PC = 0xFFFC;
    SP = 0x0100;

    C = Z = I = D = B = V = N = 0;
    A = X = Y = 0;

}


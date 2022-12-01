/*
header file cpu class
*/
class CPU
{
    private:

        using Byte = unsigned char;
        using Word = unsigned short;

        //16 bit Program Counter Stack Pointer
        Word PC;
        Word SP;

        //3 core 8 bit registers
        Byte A, X, Y;

        //Status Flags
        Byte C : 1;
        Byte Z : 1;
        Byte I : 1;
        Byte D : 1;
        Byte B : 1;
        Byte V : 1;
        Byte N : 1;

    public:
        CPU();
        void Reset();
        
};



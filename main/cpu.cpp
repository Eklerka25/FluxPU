#include <iostream>
#include <typedefs.hpp>

struct Cpu {
    Byte A, B, C;
    Word adressptr;

    void Reset() {
        A = B = C = 0;
        adressptr = 0x0000;
    }
};

Cpu cpu;

int main() {
    cpu.Reset();
}

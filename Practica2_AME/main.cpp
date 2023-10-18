#include "mbed.h"

AnalogIn light(A0);
// main() runs in its own thread in the OS
int main()
{
    while (true) {
        float input = light.read_u16();
        
    }
}


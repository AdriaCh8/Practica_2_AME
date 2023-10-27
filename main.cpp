#include "mbed.h"
#include <cstdio>
#include <ThisThread.h>
#include "Luxer.h"


Luxer lux(A0);

// main() runs in its own thread in the OS
int main()
{
    while (true) {
        float luz = lux.calculate_lux();
        printf("LUZ = %f\n", luz);
        ThisThread::sleep_for(2s);
    }
}


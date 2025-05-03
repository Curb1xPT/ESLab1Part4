#include "mbed.h"

#define BLINKING_RATE     200ms


int main()
{
#ifdef LED1
    DigitalOut led(LED1);
    DigitalOut led2(LED2);
    DigitalOut led3(LED3);
#else
    bool led, led2, led3;
#endif

    while (true) {
        led = !led;
        ThisThread::sleep_for(BLINKING_RATE);
        led = !led;
        led2 = !led2;
        ThisThread::sleep_for(BLINKING_RATE);
        ThisThread::sleep_for(BLINKING_RATE);
        led2 = !led2;
        led3 = !led3;
        ThisThread::sleep_for(BLINKING_RATE);
        ThisThread::sleep_for(BLINKING_RATE);
        ThisThread::sleep_for(BLINKING_RATE);
        led3 = !led3;
    }
}

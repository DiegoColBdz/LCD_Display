/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include "TextLCD.h"

TextLCD display(D2, D3, D4, D5, D6, D7, TextLCD::LCD16x2);

int main()
{
    display.cls();
    ThisThread::sleep_for(1ms);
    display.printf("putos");
    display.locate(0,1);
    display.printf("Arq Hard");
}

/* Barely based on "bare metal" sample from Freedom board:
Copyright (c) 2012-2013 Andrew Payne

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights to
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
the Software, and to permit persons to whom the Software is furnished to do so,
subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE. */

#include <stdint.h>

const uint8_t _cfmconfig[16] __attribute__((section(".cfmconfig"))) =
{
    0xFF,  /* NV_BACKKEY3: KEY=0xFF */
    0xFF,  /* NV_BACKKEY2: KEY=0xFF */
    0xFF,  /* NV_BACKKEY1: KEY=0xFF */
    0xFF,  /* NV_BACKKEY0: KEY=0xFF */
    0xFF,  /* NV_BACKKEY7: KEY=0xFF */
    0xFF,  /* NV_BACKKEY6: KEY=0xFF */
    0xFF,  /* NV_BACKKEY5: KEY=0xFF */
    0xFF,  /* NV_BACKKEY4: KEY=0xFF */
    0xFF,  /* NV_FPROT3: PROT=0xFF */
    0xFF,  /* NV_FPROT2: PROT=0xFF */
    0xFF,  /* NV_FPROT1: PROT=0xFF */
    0xFF,  /* NV_FPROT0: PROT=0xFF */
    0x7E,  /* NV_FSEC: KEYEN=1,MEEN=3,FSLACC=3,SEC=2 */
    0xFF,  /* NV_FOPT: ??=1,??=1,FAST_INIT=1,LPBOOT1=1,RESET_PIN_CFG=1,
                        NMI_DIS=1,EZPORT_DIS=1,LPBOOT0=1 */
    0xFF,
    0xFF
};

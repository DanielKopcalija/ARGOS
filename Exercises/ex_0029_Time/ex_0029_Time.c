// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0029_Time.h"

// Function definitions
// TODO: implement ex_0029_InitTime
Time ex_0029_InitTime(int hours, int minutes, int secondes)
{
    Time time;
    time.hh = hours;
    time.mm = minutes;
    time.ss = secondes;
    return time;
}

// TODO: implement ex_0029_PrintTime
void ex_0029_PrintTime(Time time)
{
    printf("%02d:%02d:%02d\n", time.hh, time.mm, time.ss);
}

// TODO: implement ex_0029_Time
void ex_0029_Time()
{
    Time t = ex_0029_InitTime(5, 3, 17);
    ex_0029_PrintTime(t);
}

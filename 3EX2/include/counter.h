#ifndef COUNTER_H
#define COUNTER_H
#include <curses.h>
#include <math.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void* Counter(void* param);
extern double tangents[];
#endif
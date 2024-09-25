#include <curses.h>
#include <math.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "counter.h"

int main() {
  pthread_t first;
  pthread_t second;
  pthread_t third;
  pthread_t fourth;
  pthread_t fifth;
  pthread_attr_t attr;
  pthread_attr_init(&attr);
  for (int i = 0; i < 1000000; i++) {
    tangents[i] = tan(i);
  }

  double* result_1 = 0;
  double* result_2 = 0;
  double* result_3 = 0;
  double* result_4 = 0;
  double* result_5 = 0;
  double final = 0;
  pthread_create(&first, &attr, Counter, (void*)&first_h);
  pthread_create(&second, &attr, Counter, (void*)&second_h);
  pthread_create(&third, &attr, Counter, (void*)&third_h);
  pthread_create(&fourth, &attr, Counter, (void*)&fourth_h);
  pthread_create(&fifth, &attr, Counter, (void*)&fifth_h);

  pthread_join(first, &result_1);
  pthread_join(second, &result_2);
  pthread_join(third, &result_3);
  pthread_join(fourth, &result_4);
  pthread_join(fifth, &result_5);

  final = *result_1 + *result_2 + *result_3 + *result_4 + *result_5;
  printf("%f\n", final);
  return 0;
}
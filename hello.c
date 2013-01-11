/*
 * hello.c
 *
 *  Created on: Jan 10, 2013
 *      Author: preston
 */

#include <stdio.h>
#include <sys/time.h>

int main(int argc, char* argv[])
{
  double sec;
  struct timeval tv;

  gettimeofday(&tv, NULL);
  sec = tv.tv_sec;
  sec += tv.tv_usec / 1000000.0;

  printf("%f\n", sec);

  return 0;
}

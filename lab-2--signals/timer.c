#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <stdbool.h>
#include "timer.h"

void handle_sigint(int sig)
{ 
  printf("Alarms: %d \n", number);
  exit(0);
}
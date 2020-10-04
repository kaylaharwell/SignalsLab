/* hello_signal.c */
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <stdbool.h>
#include "timer.h"

bool execute = true;
void handler(int signum)
{ //signal handler
  execute = false;
  number++;
  alarm(1);
}

int main(int argc, char * argv[])
{
  signal(SIGALRM,handler);//register handler to handle SIGALRM
  signal(SIGINT,handle_sigint);
  number++;
  alarm(1); //Schedule a SIGALRM for 1 second
  while(1){//busy wait for signal to be delivered
    while(execute == true){
      
    }
    printf("Turing correct \n");
    execute = true;
  } 
  printf("Turing correct \n");
  return 0; //never reached
}
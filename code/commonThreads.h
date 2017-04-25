

#include <pthread.h>
#include <stdio.h>

extern char extfilecmd[256];
extern int ttlcmd;

void *createKeyboardThread(int *arg);
void *createTimerThread(int *arg);

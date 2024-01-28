/*Parm Gidda - 301423241 - psg14 - psg14@sfu.ca
*/

#include <stdio.h>
#include "chat.h"
#include "list.h"
#include "threads.h"

#include <pthread.h>

int main(){
	
	pthread_t mainThread;
	pthread_create(&mainThread, NULL, initThreads, NULL);
	pthread_join(mainThread, NULL);
 	pthread_cancel(mainThread);

}


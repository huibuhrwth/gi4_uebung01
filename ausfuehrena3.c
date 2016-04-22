#include <stdio.h>
#include <unistd.h>

int main (int argc, char* argv[],char* envp[]) {

printf("Programm welches ausgefuehrt werden soll: %s\n",argv[1]);

pid_t pid;

if ((pid = fork()) == 0) {
	execv(argv[1], &argv[1]);
	printf("Kindprozess mit der ID: %d\n", pid);
   } else {
	printf("Prozess mit der ID: %d\n", pid);
   }


return 0;

}

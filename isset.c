#include <stdio.h>

int main(int argc, char* argv[], char* envp[]) {
char *erg;

if (!strcmp(argv[1], "-v")) {
const char *name=argv[2]; 
erg=getenv(name);
printf("Umgebnungsvariable %s : %s\n", name , erg );

} else {

const char *name=argv[1];
erg=getenv(name);
}



if (erg == NULL)
 {return 0;}
 else
 {return 1;}

}


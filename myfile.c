#include <stdio.h>

int main(int argc, char *argv[]){
    int i;
    printf("this program has %d arguments\n", argc-1);
    printf("the program name is %s.\n", argv[0]);
    for(i=1;i<argc;i++){
        printf("The %dth argument is %s\n", i, argv[i]);
    }
    printf("end\n");

    return 0;
}
#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    printf("this program has %d arguments\n", argc - 1);
    printf("the program name is %s.\n", argv[0]);
    for (i = 1; i < argc; i++)
    {
        switch (i){
            case 1:
                printf("The %dst argument is %s\n", i, argv[i]);
                break;
            case 2:
                printf("The %dnd argument is %s\n", i, argv[i]);
                break;
            case 3:
                printf("The %drd argument is %s\n", i, argv[i]);
                break;
            default:
                printf("The %dth argument is %s\n", i, argv[i]);
        }
    }
    printf("end\n");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
 #include <unistd.h>

int main(int argc, char * argv[])
{
    if (argc!=2){
        fprintf(stderr,"Usage: ./hello <n>\n");
        exit(1);
    }
    int time = atoi(argv[1]);
    for (int i = 0; i<time; i++)
    {
        printf("Hello\n");
        fflush(stdout);
        sleep(1);
    }
    return 0;
}
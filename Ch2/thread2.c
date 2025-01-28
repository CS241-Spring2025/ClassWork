#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
void * count(void * num);
const int LOOP=100000;
int main()
{
    int counter = 0;
    pthread_t t1, t2;
    pthread_create(&t1, NULL, (void *)count, (void *)&counter);
    pthread_create(&t2, NULL, count, &counter);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    printf("Final value: %d\n", counter);
    return 0;
}

void * count(void * num)
{
    for (int i = 0; i < LOOP; i++){
        (*(int *)num)++;
    }
    return NULL;
}

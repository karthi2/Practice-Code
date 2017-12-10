#include <stdio.h>
#include <pthread.h>

int lock = 0;
pthread_t tid[2];

thread_fn1 () {
    int n = 0;
    while (1) {
        if (lock == 0) {
            printf("%d ", n);
            lock = 1;
            n+= 2;
        }
    }
}

thread_fn2 () {
    int n = 1;
    while (1) {
        if (lock == 1) {
            printf("%d ", n);
            lock = 0;
            n+= 2;
        }
    }
}
int main () {
    int err;

    err = pthread_create(&(tid[0]), NULL, &thread_fn1, NULL);
    if (err) {
        printf("Error creating new thread 1\n");
        exit(1);
    }

    err = pthread_create(&(tid[1]), NULL, &thread_fn2, NULL);
    if (err) {
        printf("Error creating new thread 2\n");
        exit(1);
    }
    sleep(1);
    return 0;
}

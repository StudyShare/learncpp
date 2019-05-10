#include <stdio.h>
#include <dlfcn.h>
#include <time.h>
#include <unistd.h>

int main() {
    printf("Hello, World!\n");
    int (*padd)(int, int);
    /*while(1){
        sleep(1);

        void *handler = dlopen("./Test.so", RTLD_LAZY);
        if (handler != NULL) {
            func = dlsym(handler, "_printf");

            if(func != NULL){
                (*func)();
            }else{
                printf(" dlsym - %s\n",dlerror());
            }
        }else{
            printf("dlopen - %s\n",dlerror());
        }
    }*/

//    void *handler = dlopen("./Test.so", RTLD_LAZY);
    while (1) {

        sleep(10);
        void *handler = dlopen("/data/local/tmp/libJNI.so", RTLD_NOW);
        if (handler) {
            padd = dlsym(handler, "add");

            if (padd) {
                int ret = (*padd)(3, 5);
                printf("ret = %d\n", ret);
            } else {
                printf(" dlsym - %s\n", dlerror());
            }
        } else {
            printf("dlopen - %s\n", dlerror());
        }
    }

    return 0;
}
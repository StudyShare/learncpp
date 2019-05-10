#include <stdio.h>
#include <dlfcn.h>
#include <time.h>
#include <unistd.h>

int main() {
    printf("Hello, World!\n");
    void (*func)();
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

    void *handler = dlopen("./Test.so", RTLD_LAZY);
    handler = dlopen("./Test.so", RTLD_LAZY);
    if (handler) {
        func = dlsym(handler, "_printf");

        if(func){
            (*func)();
        }else{
            printf(" dlsym - %s\n",dlerror());
        }
    }else{
        printf("dlopen - %s\n",dlerror());
    }

    return 0;
}
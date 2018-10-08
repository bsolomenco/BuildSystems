#include <stdio.h>

//--------------------------------------------------------------------------------
void __attribute__ ((constructor)) initLibrary(void){//function called when the library is loaded
    printf("[%s()]]\n", __func__);
}

//--------------------------------------------------------------------------------
void __attribute__ ((destructor)) cleanUpLibrary(void){//function called when the library is »closed«.
    printf("[%s()]]\n", __func__);
}
#include "externalSharedLib/MyLib1.hpp"
#include "externalSharedLib/MyLib2.hpp"
#include <stdio.h>

int main(int argc, char** argv){
    printf("executable linked with a shared library\n");
    func1();
    func2();
    return 0;
}
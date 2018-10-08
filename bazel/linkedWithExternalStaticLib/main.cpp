#include "externalStaticLib/MyLib1.hpp"
#include "externalStaticLib/MyLib2.hpp"
#include <stdio.h>

int main(int argc, char** argv){
    printf("executable linked with a static library\n");
    func1();
    func2();
    return 0;
}
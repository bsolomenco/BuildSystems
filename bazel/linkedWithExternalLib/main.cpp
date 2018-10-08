#include "externalLib/MyLib1.hpp"
#include "externalLib/MyLib2.hpp"
#include <stdio.h>

int main(int argc, char** argv){
    printf("[%s] executable linked with an external library\n", __func__);
    func1();
    func2();
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstdint>

using namespace std;

class Hello{
    public:
      void sayHelllo();
};

int main(int argc, char* argv[]){
    Hello hi;
    hi.sayHello();
    system("pwd");
    getchar();
    return 0;
}

void Hello::sayHello(){
    std::cout<<"Hello World! :) \n"<<endl;
}

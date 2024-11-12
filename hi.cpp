#include<iostream>
#include<cstdlib>
#include<stdint.h>
#include<string.h>

using namespace std;

class Hi{
    public:
        uint8_t* someAdvices(uint8_t*);
};

#ifndef N
#define N 200
#endif

uint8_t* Hi::someAdvices(uint8_t* n1){
    printf("To compile your project by CMD use: \n");
    fflush(stdin);
    char* ptr1 = (char*) malloc(N*sizeof(char));

    strcpy(ptr1, "g++ [file_name] -o [exec_name]");

    *n1 = 5;
    
    return n1;
}
#include "hi.cpp"

typedef int integer;

integer main(integer argc, char* argv[]){
    Hi hi;
    uint8_t n1 = 10;
    uint8_t* ans;
    ans = hi.someAdvices(&n1);
    printf("\n\n[%p];\n [%d];\n [%x];\n", ans, *ans, 6 * (*ans));
    fflush(stdin);
    system("echo 'hello'");
    getchar();
    return 0;
}
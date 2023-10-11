#include <iostream>

using namespace std;

void testStatic() {
    static int testStaticVar=51; 
    static int* p_testStaticVar = &testStaticVar;
    testStaticVar++;            
}                                
                                

void testAuto() {               
    auto testAutoVar='a';   
    testAutoVar++;             
}                             

int main() {
    testStatic();
    testStatic();
    testAuto();
    testAuto();
}
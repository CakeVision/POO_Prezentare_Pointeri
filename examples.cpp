#include <iostream>
#include <string.h>
using namespace std;

class Student{
    private:
        int varsta;
        char nume[50];
    public:
        Student(const int v = 18,const char* s = "NoName"): varsta(v){
            strcpy(nume, s);
        }
};

int main(){

    //const dtype* usage:

    //has size = 2bytes(int) + 50 * 2bytes (string)
    Student s1;
    //has size = 2bytes
    Student* p_s1 = &s1;
//-------------------------------------------------------------------------------------
    //dtype* const usage:

    int* const threadFlagsAccess = new int[8];
    // we use 0 , 1 , 2 to track access to ostream, instream, and fstream
    threadFlagsAccess[1] = 1;
    //thread 1 is now taking data from input, we can modify it
    //threadFlagsAccess = new int[10]; we cant change the address where the info is kept, which is a failsafe.

//----------------------------------------------------------------------------------------------------
    //const dtype const usage:
    const char* const Err404 = "not found";
    const char* const Err405 = "method not allowed";

    //*message = 'h'; Not allowed, can't modify the characters
    // message = "unknown err"; wont work, as we cant change the value message points to
}
#include <iostream>
using namespace std;

//project made with the support of our dear AI overlord gpt
int main(){
    int x;
    int y;
    const int cx = 1;
    const int cy = 0;

    //simple pointers:
    int* p_x = &x;

    // const data pointers:
    //______________________________________________
    {
        
    const int* p_cx = &x;
    int const * p_cy = &y;
    
    //*p_cx = 10; not allowed, data is const int;
    p_cx = p_cy; // change the address is allowed
    
    }
    //_______________________________________________
    
    //const pointers:
    //_______________________________________________
    {
    int* const cp_x = &x;
    int* const cp_y = &y;
    
    // cp_x = cp_y;// not allowed; the address in the variable cant change
    *cp_x = 10;
    }

    //_______________________________________________

    //const^2
    //_______________________________________________
    {
        const int* const cp_cx = &x;
        const int* const cp_cy = &y;

        // cp_cx = cp_cy wont work
        // *cp_cx = 1 wont work
    }
    //_______________________________________________
    
    getchar();
}
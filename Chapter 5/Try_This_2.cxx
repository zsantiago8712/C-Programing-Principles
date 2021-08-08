#include "../Headers/std_lib_facilities.h"



int main(void)
{
    int x0 = arena(7);
    int x1 = area(7);
    int x2 = arena("seven", 2);
}


/*
Try_This_2.cxx:7:14: error: use of undeclared identifier 'arena'
    int x0 = arena(7);
             ^
Try_This_2.cxx:8:14: error: use of undeclared identifier 'area'
    int x1 = area(7);
             ^
Try_This_2.cxx:9:14: error: use of undeclared identifier 'arena'
    int x2 = arena("seven", 2);
             ^
3 errors generated.
*/

//
// This is example code from Chapter 12.3 "A first example" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include "../Headers/Simple_window.h"    // get access to our window library
#include "../Headers/Graph.h"            // get access to our graphics library facilities


/* For run: 
g++ -w -Wall -std=c++11 ../Headers/Graph.cpp ../Headers/Window.cpp ../Headers/GUI.cpp ../Headers/Simple_window.cpp Graficos.cxx `fltk-config --ldflags --use-images` -o Graficos; ./Graficos
Change p.cxx p for the name of the your files you wan a run */

//------------------------------------------------------------------------------

int main()
{
    using namespace Graph_lib;

    Point tl(300, 300);
    Simple_window win(tl, 600, 600, "siiuuuuuuuuuu");
    win.wait_for_button();
}

//------------------------------------------------------------------------------
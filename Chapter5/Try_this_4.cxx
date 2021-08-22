#include "../Headers/std_lib_facilities.h"


int f(int x, int y, int z);
int area(int lenght, int width);
int framed_area(int x, int y);




int main(void)
{
    while(true)
    {
        int x , y, z;
        cin >> x >> y >> z;
        f(x, y, z);
    }
}

int f(int x, int y, int z)
{
    int area1 = area(x, y);
    if (area1 <= 0)
    {
        error("non posisitve area");
        int area2 = framed_area(1, z);
        int area3 = framed_area(y, z);
        double ratio = double(area1) / area3;
        cout << ratio << endl;
    }
}


int area(int lenght, int width)
{
    if(lenght <= 0 || width <= 0)
    {
        return -1;
    }

    return lenght * width;
}

int framed_area(int x, int y)
{
    const int frame_width = 2;
    if(x - frame_width <= 0 || y - frame_width <= 0)
    {
        error("non positive area() argument called by framed area()");
    }
    return area(x - frame_width, y - frame_width);
}
#include <iostream>
#include <math.h>  //ye new use kiya h 
using namespace std;
class point;
class line
{
    float m;
    float c;

public:
    void setline(void);
    friend void distance(line l1, point p1);
};
class point
{
    int x, y;

public:
    void setpoint(void);
    friend void distance(line l1, point p1);
};
void line::setline(void)
{
    cout << "Enter the slop of line" << endl;
    cin >> m;
    cout << "Enter the Y intercept of line " << endl;
    cin >> c;
    cout << "line is y =" << m << "x + " << c << endl;
}
void point::setpoint(void)
{
    cout << "x coordinate of point " << endl;
    cin >> x;
    cout << "y coordinate of point " << endl;
    cin >> y;
    cout << "coordinate of point is (" << x << "," << y << ")" << endl;
}
void distance(line l1, point p1)
{
    // square root ke liye    #include<math.h>   wala likhna pada
    float a = sqrt(((l1.m) * (l1.m)) + 1);
    // float isliye liya taki proper point point mai aae
    float d = (((l1.m) * (p1.x) - (p1.y) + (l1.c)) / a);
    // denominator mai square root chaiye tha or kuch kuch value mai root point mai aata h toh float lena pada
    cout << "distance between line and the point is " << d << endl;
}
int main()
{
    line L1;
    L1.setline();
    point P1;
    P1.setpoint();
    distance(L1, P1);
    return 0;
}
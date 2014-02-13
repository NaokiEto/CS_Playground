#include <iostream>

using namespace std;

class Point
{
    public:
        // set the 
        void set(float x, float y);

        // function for translating the point along the vertical and horizontal
        // directions specified by the first and second arguments
        void translate(float transX, float transY);

        // function for rotating the point 90 degrees clockwise around the origin
        void rotate90();

        float getX();
        float getY();

    private:
        float xcoord;
        float ycoord;
};

int main()
{
    Point a1;

    a1.set(5.0, 6.0);

    a1.translate(3.0, -2.0);

    cout << "The translated coordinate is: " << a1.getX() << ", " << a1.getY() << endl;

    return 0;
}

void Point::set(float x, float y)
{
    xcoord = x;
    ycoord = y;
}

void Point::translate(float transX, float transY)
{
    xcoord += transX;
    ycoord += transY;
}

void Point::rotate90()
{
    float temp = xcoord;

    xcoord = ycoord;

    ycoord = -1.0 * temp;
}

float Point::getX()
{
    return xcoord;
}

float Point::getY()
{
    return ycoord;
}



#ifndef COORDIN_H_INCLUDED
#define COORDIN_H_INCLUDED

struct polar
{
    double distance;
    double angle;
};

struct rect
{
    double x;
    double y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

#endif // COORDIN_H_INCLUDED

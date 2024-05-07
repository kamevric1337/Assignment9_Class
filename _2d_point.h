#ifndef _2D_POINT_H
#define _2D_POINT_H

#include<iostream>
#include<math.h>

class _2d_point{
    private:
        float x, y;
    public:
        void set_coordinates(float _x, float _y);
        void display_coordinates();
        void set_x(float _x);
        void set_y(float _y);
        void set_coordinates_keyboard();
        float get_x();
        float get_y();
        void get_coordinates(float& x_out, float& y_out);
        float distance(_2d_point pointB);
};

#endif
#include<iostream>
#include<math.h>
#include"_2d_point.h" 


void _2d_point::set_coordinates(float _x, float _y)
{
    this->x = _x;
    this->y = _y;
}

void _2d_point::display_coordinates()
{
    std::cout << "Point coordinates: " << '(' << this->x << " , " << this->y << ')' << std::endl;
}

void _2d_point::set_x(float _x)
{
    this->x = _x;
}

void _2d_point::set_y(float _y)
{
    this->y = _y;
}

float _2d_point::get_x()
{
    return this->x;
}

float _2d_point::get_y()
{
    return this->y;
}

void _2d_point::get_coordinates(float& x_out, float& y_out)
{
    x_out = this->x;
    y_out = this->y;
}

void _2d_point::set_coordinates_keyboard(){
    std::cout << "\nEnter x and y";
    std::cin >> this->x;
    std::cin >> this->y;
}

float _2d_point::distance(_2d_point pointB)
{
    return sqrt((this->x - pointB.x)*(this->x - pointB.x) + (this->y - pointB.y)*(this->y - pointB.y));
}

int main(){

    _2d_point A, B;
    A.set_coordinates(0, 0);
    B.set_coordinates(3, 4);
    A.display_coordinates();
    std::cout << "khoang cach giua A va B: " << A.distance(B);
}
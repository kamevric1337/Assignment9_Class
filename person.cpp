#include<iostream>
#include"person.h"

int main()
{
    Person Taixiu;
    Taixiu.set_name("Nguyen Cong Tai");
    Taixiu.set_hometown("36");
    Taixiu.birthday.set_birthday(1, 1, 2005);
    Taixiu.display_info();
}
#include<iostream>

class Date{
    protected:
        int day, month, year;
    public:
        void get_date(int&, int&, int&);
        void set_date(int, int, int);
        void display_date();
        void set_date_keyboard(); 
};

void Date::get_date(int& _day, int& _month, int& _year)
{
    _day = this->day;
    _month = this->month;
    _year = this->year;
}

void Date::set_date(int _day, int _month, int _year)
{
    this->day = _day;
    this->month = _month;
    this->year = _year;
}   

void Date::set_date_keyboard()
{
    std::cout << "\nNhap ngay thang nam sinh: ";
    std::cin >> this->day >> this->month >> this->year;
}  

void Date::display_date()
{
    std::cout << day << "/" << month << "/" << year;
}

class Person{
    private:
        std::string name, home;
        Date birthday;
    public:
        void set_info_keyboard();
        void display_info();
        std::string get_name();
        void set_name(std::string _name);
        std::string get_home();
        void set_home(std::string _home);
        void set_birthday(int, int, int);
};

void Person::set_info_keyboard()
{
    std::cout << "Nhap thong tin: ";
    std::cout << "\nNhap ten: ";
    std::cin >> this->name;
    this->birthday.set_date_keyboard();
    std::cout << "\nNhap que quan";
    std::cin >> this->home;
}

void Person::display_info()
{
    std::cout << "\nTen: " << this->name;
    std::cout << "\nNgay sinh: ";
    this->birthday.display_date();
    std::cout << "\nQue quan: " << this->home;
    
}

std::string Person::get_name()
{
    return this->name;
}

void Person::set_name(std::string _name)
{
    this->name = _name;
}

std::string Person::get_home()
{
    return this->home;
}

void Person::set_home(std::string _home)
{
    this->home = _home;
}

void Person::set_birthday(int _day,int _month, int _year)
{
    this->birthday.set_date(_day, _month, _year);
}
int main()
{
    Person Minh;
    Minh.set_home("Hanoi");
    Minh.set_name("Minh");
    Minh.set_birthday(11, 11, 2005);
    Minh.display_info();
}
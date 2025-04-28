#include "MyString.hpp"
#include <cctype>
#include <cstring>
#include <iostream>

MyString::MyString() : str{nullptr}
{
    std::cout << "No Args Constructor\n";
    str = new char[1];
    *str = '\0';
}

MyString::MyString(const char *other_str) : str{nullptr}
{
    std::cout << "Overload Constructor\n";
    if (other_str == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char[std::strlen(other_str) + 1];
        std::strcpy(str, other_str);
    }
}

MyString::MyString(const MyString &rhs) : str{nullptr}
{
    std::cout << "Deep Copy Constructor\n";
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(str, rhs.str);
}

MyString::MyString(MyString &&rhs) noexcept : str{rhs.str}
{
    std::cout << "Move Constructor\n";
    rhs.str = nullptr;
}

MyString::~MyString()
{
    delete[] str;
}

// overload operators
MyString &MyString::operator=(const MyString &rhs)
{
    std::cout << "operator = copy\n";
    if (this == &rhs)
    {
        return *this;
    }

    delete[] str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(str, rhs.str);
    return *this;
}

MyString &MyString::operator=(MyString &&rhs)
{
    std::cout << "operator = move\n";
    if (this == &rhs)
    {
        return *this;
    }

    delete[] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

bool MyString::operator==(const MyString &rhs) const
{
    std::cout << "operator == comparacao\n";
    return std::strcmp(str, rhs.str);
}

void MyString::operator+()
{
    std::cout << "operator + (Make Upper Case)\n";
    for (int i{0}; i < std::strlen(str); i++)
    {
        str[i] = std::toupper(str[i]);
    }
}

void MyString::operator-()
{
    std::cout << "operator - (Make lower case)\n";
    for (int i{0}; i < std::strlen(str); i++)
    {
        str[i] = std::tolower(str[i]);
    }
}

char *MyString::get_str() const
{
    return str;
}

// friends

std::ostream &operator<<(std::ostream &os, const MyString &rhs)
{
    os << rhs.str;
    return os;
}

std::istream &operator>>(std::istream &in, MyString &rhs)
{
    char buff[1000];
    in >> buff;
    rhs = std::move(MyString{buff});
    return in;
}

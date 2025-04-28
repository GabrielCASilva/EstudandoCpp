#ifndef _MY_STRING_HPP_
#define _MY_STRING_HPP_

#include <ostream>
class MyString
{
    friend std::ostream &operator<<(std::ostream &os, const MyString &rhs);
    friend std::istream &operator>>(std::istream &in, MyString &rhs);

  private:
    char *str;

  public:
    MyString();                        // constructor
    MyString(const char *str);         // constructor overload
    MyString(const MyString &rhs);     // copy constructor
    MyString(MyString &&rhs) noexcept; // move contructor
    ~MyString();                       // destructor

    // overload operators
    MyString &operator=(const MyString &rhs); // Assign copy operator
    MyString &operator=(MyString &&rhs);      // Assign move operator

    bool operator==(const MyString &rhs) const;
    void operator+();
    void operator-();

    char *get_str() const;
};

#endif // !_MY_STRING_HPP_

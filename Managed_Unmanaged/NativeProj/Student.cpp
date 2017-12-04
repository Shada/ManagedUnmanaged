#include "Student.h"
#include <string>

Student::Student()
{
}

Student::~Student()
{
   delete[] _fullname;
}
int Student::RandomValue()
{
   return std::rand();
}
double Student::getGpa()
{
   return _gpa;
}

char* Student::getName()
{

   return _fullname;
}
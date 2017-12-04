#include "StudentWrapper.h"

namespace ManagedWrapper
{

   StudentWrapper::StudentWrapper()
   {
      _stu = new Student();
   }

   StudentWrapper::~StudentWrapper()
   {
      delete _stu;
      _stu = 0;
   }

   int StudentWrapper::RandomValue()
   {
      return _stu->RandomValue();
   }

   double StudentWrapper::add(double a, double b)
   {
      return a + b;
   }
}
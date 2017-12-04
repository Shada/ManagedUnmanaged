#pragma once
// Managed class

#include "Student.h"

#ifdef _MANAGED
#define _CLASS public ref class
#define _USING(x) using namespace x;
#else
#define _CLASS class
#define _USING(x)  
#endif


_USING(System);

namespace ManagedWrapper
{
   _CLASS StudentWrapper
   {
   private:
      Student *_stu;
   public:
      StudentWrapper();
      ~StudentWrapper();

      int RandomValue();

      double add(double a, double b);
   };
}
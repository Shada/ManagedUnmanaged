// native class

#pragma once

class Student
{
private:
   char *_fullname;
   double _gpa;
public:
   Student();

   ~Student();

   int RandomValue();

   double getGpa();

   char *getName();
};
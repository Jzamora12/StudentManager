#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>

using namespace std;

class student
{
  private:
  string first;
  string last; 

  public:
  void setName ( string, string );
  string fullName ();
};

#include "student.h"

#endif 

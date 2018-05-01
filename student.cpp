#include <iostream>
#include <string>
#include "student.h"

using namespace std;

void student :: setName ( string firstName, string lastName )
{
  first = firstName;
  last = lastName;
}

string student :: fullName () 
{
  string name = first;
  name.append(" ");
  name.append(last);
  return name;
}

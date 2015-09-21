#include <iostream>
using std::cout;
using std::endl;

#include "Marksbook.h"
// The scope resolution binary operator "::" links every member function
// with its definition (now separated).
// The constructor initializes Marksbook with the string object 
// as an argument
Marksbook::Marksbook( string name )
{
    setCourseName( name );
}

// This function sets the course name
void Marksbook::setCourseName( string name )
{
    courseName = name;
}

// This function gets the course name
string Marksbook::getCourseName()
{
    return courseName;
}

// This function prints a welcome message
void Marksbook::showMessage()
{
    cout << " Welcome to the Marksbook para\n" << getCourseName() << "!" << endl;
}

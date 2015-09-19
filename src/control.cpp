#include <iostream>
using std::cout;
using std::endl;

#include "Marksbook.h"

int main()
{
    Marksbook myMarksbook1( "Number one" );
    Marksbook myMarksbook2( "Number two" );

    cout << "Attribute of myMarksbook1: " << myMarksbook1.getCourseName() << endl;
    cout << "Attribute of myMarksbook2: " << myMarksbook2.getCourseName() << endl;

    return 0;
}

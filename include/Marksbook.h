#include <iostream>
#include <string>

using std::string;

using std::cout;
using std::endl;


// Class definition
class Marksbook
{
    public:
        // Constructor. It has the same name as the class, and 
        // the necessary parameters.
        Marksbook( string name )
        {
            setCourseName( name );
        }

        // This function sets the course name
        void setCourseName( string name )
        {
            courseName = name;
        }

        // This function gets the course name
        string getCourseName()
        {
            return courseName;
        }

        // This function prints a welcome message
        void showMessage()
        {
            cout << "Welcome to the Marksbook for \n" << getCourseName() << "!" 
                << endl;
        }

    private:
        string courseName;

}; // Don't forget the

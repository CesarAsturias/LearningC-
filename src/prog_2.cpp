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

}; // Don't forget the ;


int main()
{
    //Create two instances of Marksbook class
    
    Marksbook myMarksbook1( "Learning C++"); // Create Marksbook object
    Marksbook myMarksbook2( "Understanding C++");
    // Print the attribute:
    cout << "We are learning: " << myMarksbook1.getCourseName() << endl;
    cout << "\nWe are:" << myMarksbook2.getCourseName() << endl;
  
    cout << endl; // Print blank line
    return 0;

}

#include <iostream>
#include <string>

using std::string;
using std::getline;
using std::cout;
using std::endl;
using std::cin;

// Class definition
class Marksbook
{
    public:
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
    string nameofCourse; //String array
    Marksbook myMarksbook; // Create Marksbook object
    // Shows the initial course name
    cout << "The initial course name is: " << myMarksbook.getCourseName() << endl;
    // Get another course name
    cout << "Write the course name:" << endl;
    getline( cin, nameofCourse ); // Read the name of the course, getline read the characters of 
                                  // the input standar object cin (keyboard), until it finds a new line
    myMarksbook.setCourseName( nameofCourse );

    cout << endl; // Print blank line
    myMarksbook.showMessage();

    return 0;

}

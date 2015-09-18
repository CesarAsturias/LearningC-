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
        void showMessage(string courseName)
        {
            cout << "Welcome to the Marksbook for \n" << courseName << "!" 
                << endl;
        }
}; // Don't forget the ;


int main()
{
    string nameofCourse; //String array
    Marksbook myMarksbook; // Create Marksbook object

    cout << "Write the course name:" << endl;
    getline( cin, nameofCourse ); // Read the name of the course 
    cout << endl; // Print blank line

    myMarksbook.showMessage(nameofCourse);

    return 0;

}

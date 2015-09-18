#include <iostream>

using std::cout;
using std::endl;

// Class definition
class Marksbook
{
    public:
        void showMessage()
        {
            cout << "Welcome to the Marksbook!" << endl;
        }
};


int main()
{
    Marksbook myMarksbook; // Create Marksbook object
    myMarksbook.showMessage();

    return 0;

}

// A reference is a name constant for an address. You need to initialize the reference during declaration
// Once a reference is established to a variable, you cannot change the reference to reference another variable.
//  Reference variable cannot be updated.
//  References cannot be NULL. Pointers are often made NULL to indicate that they are not pointing to any valid thing.
#include <iostream>
using namespace std;
int main(void)
{
    int var = 10;
    // int &reference_varaible;    gives error => 'reference_varaible' declared as reference but not initialized
    int &reference_varaible = var;

    cout << "The value of var is => " << var << endl;
    cout << "The value of reference variable is => " << reference_varaible << endl;

    reference_varaible = 20;
    cout << "The value of var is => " << var << endl;
    cout << "The value of reference variable is => " << reference_varaible << endl;

    var = 30;
    cout << "The value of var is => " << var << endl;
    cout << "The value of reference variable is => " << reference_varaible << endl;

    return 0;
}
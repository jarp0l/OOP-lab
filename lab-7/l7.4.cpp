/* Task #1:
 * WAP in CPP to illustrate the concept of reinterpret_cast operator.
 */

#include <iostream>

using namespace std;

int main(){
    int x = 80;     //'P'
    int *ptr1 = &x;

    char y = 'y';
    char *ptr2 = &y;

    ptr2 = reinterpret_cast< char * >(ptr1);    // converting int pointer to char pointer
    cout << "ptr2 = " << *ptr2 << endl;         // now ptr1 points to the ASCII character having decimal value '80'
    
    return 0;
}

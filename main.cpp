#include "main.h"


// Driver Code
int main()
{
    mac_output("Hello World!\n", BOLDCYAN);  
    return 0;
}

void mac_output(string message, string color) {
    cout << color << message << RESET << endl;
}



#include "main.h"


// Driver Code
int main()
{
    mac_output("Hello World!", BOLD CYAN);  
    windows_output("Hello World!", BOLD CYAN);
    return 0;
}

void mac_output(string message, string color) {
    cout << color << message << RESET << endl;
}

void windows_output(string message, string color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 11);
    cout << message << endl;
}



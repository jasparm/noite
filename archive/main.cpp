#include "main.h"

// Driver Code
int main()
{
    display_header();
    mac_output("What would you like to jot down?", INTENSE_WHITE, 1);
    string jotting = get_input();
    mac_output("\n" + jotting, INTENSE_WHITE, 1);
    //windows_output("Hello World!", BOLD CYAN);
    return 0;
}

void mac_output(string message, string color, bool newline) {
    string newl = newline ? "\n" : "";
    cout << color << message << RESET << newl;
}

void display_header() {
    system("clear");
    mac_output(header, CYAN, 1);
}

string get_input() {
    mac_output("> ", INTENSE_WHITE, 0);
    string input;
    getline(cin, input);
    return input;
}

/*
void windows_output(string message, string color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 11);
    cout << message << endl;
}
*/


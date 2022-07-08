#ifndef NOITE
#define NOITE

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

//the following are UBUNTU/LINUX, and MacOS ONLY terminal color codes.
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */

#define BOLD "\033[1m"
#define UNDERLINE "\033[4m"

#define BACKGROUND_BLACK "\033[40m"      /* Black */
#define BACKGROUND_RED "\033[41m"      /* Red */
#define BACKGROUND_GREEN "\033[42m"      /* Green */
#define BACKGROUND_YELLOW "\033[43m"      /* Yellow */
#define BACKGROUND_BLUE "\033[44m"      /* Blue */
#define BACKGROUND_MAGENTA "\033[45m"      /* Magenta */
#define BACKGROUND_CYAN "\033[46m"      /* Cyan */
#define BACKGROUND_WHITE "\033[47m"      /* White */

#define INTENSE_BLACK "\033[90m"      /* Black */
#define INTENSE_RED "\033[91m"      /* Red */
#define INTENSE_GREEN "\033[92m"      /* Green */
#define INTENSE_YELLOW "\033[93m"      /* Yellow */
#define INTENSE_BLUE "\033[94m"      /* Blue */
#define INTENSE_MAGENTA "\033[95m"      /* Magenta */
#define INTENSE_CYAN "\033[96m"      /* Cyan */
#define INTENSE_WHITE "\033[97m"      /* White */

#define INTENSE_BACKGROUND_BLACK "\033[100m"      /* Black */
#define INTENSE_BACKGROUND_RED "\033[101m"      /* Red */
#define INTENSE_BACKGROUND_GREEN "\033[102m"      /* Green */
#define INTENSE_BACKGROUND_YELLOW "\033[103m"      /* Yellow */
#define INTENSE_BACKGROUND_BLUE "\033[104m"      /* Blue */
#define INTENSE_BACKGROUND_MAGENTA "\033[105m"      /* Magenta */
#define INTENSE_BACKGROUND_CYAN "\033[106m"      /* Cyan */
#define INTENSE_BACKGROUND_WHITE "\033[107m"      /* White */

void mac_output(string message, string color);
void windows_output(string message, string color);

#endif
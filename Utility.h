#include <iostream>
#include <cstdlib> 
#pragma once  // for system()

using namespace std;
void clearConsole()
{
#ifdef _WIN32
    system("cls");   // Windows
#else
    system("clear"); // Linux / Mac
#endif
}
#include <iostream>
using namespace std;
#include "read_char.h"
#include "print_resutl.h"
int main()
{
    char character =ReadChar("Enter a char to search on: \n");
    string vowels ="aeiou"; 
    // First solution 
    cout << "First Solution: \n";
    PrintResut(vowels,character);
    
    cout << "\n--------\n";

    // Second solution 
    cout << "Second Solution: \n";
    PrintResut(vowels, character);
    
    return 0;
}
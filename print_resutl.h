#include <iostream>
using namespace std;
#include "is_vowel.h"
void PrintResut(string text, char character){ 
    if (IsVowel(character))
    {
        cout << "vowel \n";
    }else
        cout << "not vowel\n";
}
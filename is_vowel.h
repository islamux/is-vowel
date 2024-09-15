#include <iostream>
using namespace std;

bool IsVowel(char character){
    character = tolower(character);
    return (character =='a' ) || (character == 'e') || (character == 'i') || (character == 'o') || (character == 'u');
}
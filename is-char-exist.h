#include <iostream>
using namespace std;
#pragma once
bool IsCharExist(string text, char character)
{
    for (size_t i = 0; i < text.length(); i++)
    {
        if (towlower(text[i]) == tolower(character))
        {
            return true;
        }else
            return false;
    } 
    return 0;
}   
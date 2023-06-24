#include <iostream>
using namespace std;

int main()
{
    int Alphabet;
    cout << Alphabet << "Enter a Alphabet";
    cin >> Alphabet;

    if (Alphabet == 'a' || Alphabet == 'e' || Alphabet == 'i' || Alphabet == 'o' || Alphabet == 'u')
        cout << Alphabet << "Alphabet is a vowel";

    else
    {
        cout << Alphabet << "Alphabet is a Consonent";
    }
}
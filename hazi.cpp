#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //volt hiba
    std::cout << "1-100 ertekek duplazasa"; //volt hiba
    for (int i = 0;i<N_ELEMENTS;i++) //volt hiba
    {
        b[i] = (i+1) * 2;
    }
    for (int i = 0; i<N_ELEMENTS; i++) //volt hiba
    {
        std::cout << "Ertek:" << b[i] << "\n"; //volt hiba
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag=0;//volt hiba
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]; //volt hiba
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}

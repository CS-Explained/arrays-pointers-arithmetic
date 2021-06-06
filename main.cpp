#include <iostream>

int main()
{
    int arr [3] = {1,2,3};
    for (int i = 0; i < 3; ++i)
    {
        std::cout << *( arr + i ) << std::endl;
    }
    int * ptr = arr;
    for (int i =0; i < 3; ++i)
    {
         std::cout << *ptr << std::endl;
         ptr = ptr + 1; // ptr++
    }
    return 0;
}


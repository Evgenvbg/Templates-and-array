#include <iostream>

template <typename T, int size>
class Array {
private:

    T array[size];

public:
    T* getLenght();
    T& operator[](T size)
    {
        return array[size];
    }

    

};
    template <typename T, int size>
    T* Array <T, size> :: getLenght()
    {
    return array;
    }

    int main()
    {
        Array<int, 10> arr;
        for (int i = 0; 10 > i; i++)
        {
            arr[i] = i;
        }

        for (int i = 0; 10 > i; i++)
        {
            std::cout << arr[i];
        }

        return 0;
    }


#include <iostream>

template <typename T>
class Array {
private:

    T* array;
    int length;

public:
    Array()
    {
        array = nullptr;
        length = 0;
    }

    Array(int length)
    {
        T* array = new T(length);
        this->length = length;
    }

    

    T& operator[](int size)
    {
        if (size > 0 && size < length)
        return array[size];
    }

    void erase()
    {
        delete[] array;
        array = nullptr;
        length = 0;
    }
    

    ~Array() { delete[] array; }
    int getLength();

};
    template <typename T>
    int Array <T> :: getLength()
    {
    return length;
    }

    int main()
    {
        Array<int> arr(10);
        for (int i = 0; arr.getLength() > i; i++)
        {
            arr[i] = i;
        }

        for (int i = 0; 10 > i; i++)
        {
            std::cout << arr[i];
        }

        return 0;
    }
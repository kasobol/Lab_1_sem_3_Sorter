#pragma once

#include "OutOfRangeException.h"

using namespace std;

template<class T>
class DynamicArray
{
private:
    T* items;
    int size;
public:
    DynamicArray(T* items, int count)
    {
        if (this->items == nullptr)
        {
            size = 0;
            this->items = new T[size];
        }
        int oldSize = size;
        Resize(size + count);
        for (int i = oldSize, j = 0; i < size; i++, j++)
        {
            this->items[i] = items[j];
        }
    }
    DynamicArray(int size)
    {
        items = new T[size];
        this->size = size;
    }
    DynamicArray(const DynamicArray<T> &dynamicArray)
    {
        size = dynamicArray.size;
        this->items = new T[size];
        for (int i = 0; i < size; i++)
        {
            this->items[i] = dynamicArray.items[i];
        }
    }
public:
    T Get(int i)
    {
        try
        {
            if (i < 0)
            {
                throw IndexOutOfRange("Negative index");
            }
            if (i >= size)
            {
                throw IndexOutOfRange("Index out of range");
            }
        }
        catch (IndexOutOfRange &ex)
        {
            cout << "Error: " << ex.what() << endl;
        }
        return items[i];
    }
    int GetSize()
    {
        return size;
    }
public:
    void Set(int index, T value)
    {
        if (index < 0)
        {
            throw IndexOutOfRange("Negative value");
        }
        if (index >= size)
        {
            throw IndexOutOfRange("Index out of range");
        }
        items[index] = value;
    }
    void Resize(int newSize)
    {
        if (newSize == size)
        {
            return;
        }
        if (newSize > size)
        {
            T* help = new T[newSize];
            for (int i = 0; i < size; i++)
            {
                help[i] = items[i];
            }
            delete items;
            items = help;
            //delete help;
            size = newSize;
            return;
        }
        if (newSize < size)
        {
            size = newSize;
        }
    }
    string Show()
    {
        string res = "";
        for (int i = 0; i < size; i++)
        {
            res += std::to_string(items[i]) + " ";
        }
        return res;
    }

    ~DynamicArray()
    {
        delete items;
    }
};
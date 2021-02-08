#pragma once

#include "Sequence.h"

class Sorter
{
private:
    template<class T>
    static void Swap(Sequence<T>* seq, int i, int j)
    {
        T t = seq->Get(j);
        seq->InsertAt(seq->Get(i), j);
        seq->InsertAt(t, i);
    }
public:
    template<class T>
    static Sequence<T>* BubbleSort(Sequence<T>* seq, bool check1 = false)
    {
        bool check = false;
        Sequence<T> *res = seq->Clone();
        for (int i = res->GetLength() - 1; i > 0; i--)
        {
            if (check1)
            {
                std::cout << res->Show() << endl;
            }
            
            for (int j = 0; j < i; j++)
            {
                if (res->Get(j) > res->Get(j + 1))
                {
                    check = true;
                    Swap(res, j, j + 1);
                }
            }
            if (check == false)
            {
                break;
            }
        }
        return res;
    }

    template<class T>
    static Sequence<T>* ShakerSort(Sequence<T>* seq, bool check1 = false)
    {
        bool check = false;
        Sequence<T> *res = seq->Clone();
        for (int left = 0, right = res->GetLength() - 1; left < right; left++, right--)
        {
            if (check1)
            {
                std::cout << res->Show() << endl;
            }

            for (int i = left; i < right; i++)
            {
                if (res->Get(i) > res->Get(i + 1))
                {
                    check = true;
                    Swap(res, i, i + 1);
                }
            }
            if (check == false)
            {
                break;
            }

            if (check1)
            {
                std::cout << res->Show() << endl;
            }

            for (int i = right; i > left; i--)
            {
                if (res->Get(i - 1) > res->Get(i))
                {
                    check = true;
                    Swap(res, i - 1, i);
                }
            }
            if (check == false)
            {
                break;
            }
        }
        return res;
    }

    template<class T>
    static Sequence<T>* InsertionSort(Sequence<T>* seq, bool check1 = false)
    {
        Sequence<T> *res = seq->Clone();
        for (int i = 1; i < res->GetLength(); i++)
        {
            if (check1)
            {
                std::cout << res->Show() << endl;
            }

            for (int j = i; j > 0; j--)
            {
                if (res->Get(j - 1) > res->Get(j))
                {
                    Swap(res, j - 1, j);
                }
                else
                {
                    break;
                }
            }
        }
        if (check1)
        {
            std::cout << res->Show() << endl;
        }
        return res;
    }

    template<class T>
    static Sequence<T>* SelectionSort(Sequence<T>* seq, bool check1 = false)
    {
        Sequence<T> *res = seq->Clone();
        for (int i = 0; i < res->GetLength() - 1; i++)
        {
            if (check1)
            {
                std::cout << res->Show() << endl;
            }

            int min = i;
            for (int j = i + 1; j < res->GetLength(); j++)
            {
                if (res->Get(j) < res->Get(min))
                {
                    min = j;
                }
            }
            Swap(res, i, min);
        }
        return res;
    }

private:
    template<class T>
    static void Merge(Sequence<T>* seq, int i, int j)
    {
        int size;
        T *mas;
        int end;
        if (j + (j - i) - 1 > seq->GetLength() - 1)
        {
            size = seq->GetLength() - i;
            mas = new T[size];
            end = seq->GetLength();
        }
        else
        {
            size = 2 * (j - i);
            mas = new T[size];
            end = j + (j - i);
        }
        int start = i;
        int end_j = j;
        for (int k = 0; true; k++)
        {
            if (i == end_j)
            {
                for ( ; j < end; j++, k++)
                {
                    mas[k] = seq->Get(j);
                }
                break;
            }
            if (j == end)
            {
                for (; i < end_j; i++, k++)
                {
                    mas[k] = seq->Get(i);
                }
                break;
            }
            if (seq->Get(i) > seq->Get(j))
            {
                mas[k] = seq->Get(j);
                j++;
            }
            else
            {
                mas[k] = seq->Get(i);
                i++;
            }
        }
        for (int k = 0; k < size; k++, start++)
        {
            seq->InsertAt(mas[k], start);
        }
        delete mas;
    }
public:
    template<class T>
    static Sequence<T>* MergeSort(Sequence<T>* seq, bool check1 = false)
    {
        Sequence<T> *res = seq->Clone();
        for (int step = 1; step < res->GetLength(); step *= 2)
        {
            if (check1)
            {
                std::cout << res->Show() << endl;
            }

            for (int i = 0; i < res->GetLength() - step; i += 2 * step)
            {
                Merge(res, i, i + step);
            }
        }
        if (check1)
        {
            std::cout << res->Show() << endl;
        }
        return res;
    }
};
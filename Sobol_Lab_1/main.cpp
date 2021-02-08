
#include <ctime>

#include "Tests.h"

using namespace std;

int main()
{
    /*Sequence<Sequence<int>*>* obj = new ArraySequence<Sequence<int>*>(5);
    obj->Append(new LinkedListSequence<int>(5));*/

    Sequence<Sequence<int>*(*)(Sequence<int>*, bool)>* list = new LinkedListSequence<Sequence<int>*(*)(Sequence<int>*, bool)>();
    list->Append(Sorter::BubbleSort);
    list->Append(Sorter::ShakerSort);
    list->Append(Sorter::InsertionSort);
    list->Append(Sorter::SelectionSort);
    list->Append(Sorter::MergeSort);
    

    Test_Sequence();
    Test_BubbleSort();
    Test_ShakerSort();
    Test_InsertionSort();
    Test_SelectionSort();
    Test_MergeSort();

    string str;
    std::cout << "\nIf you want to use - press \"e\", else - press \"p\"\n";
    cin >> str;
    if (str != "e")
    {
        std::cout << "\nGOODbye";
        return 0;
    }

    char fun;

    do
    {
        system("color 7");
        try
        {
            std::cout << "\nEnter: 0 - Just sort random array, 1 - I want to sort my array, 2 - I want to see it on random array, 3 - MyArray and Time, 4 - Random Array and Time";
            std::cin >> fun;

            Sequence<int> *seq;
            Sequence<int> *sort_seq;

            int size;
            cout << "Enter size: ";
            cin >> size;
            int *mas = new int[size];

            switch (fun)
            {
            case '0':
            {
                //for (int i = 0; i < size; i++)
                //{
                //    mas[i] = rand() % 200 - 100;
                //}
                //seq = new ArraySequence<int>(mas, size);
                //cout << "Our array: " << seq->Show() << endl;
                //cout << endl;
                //Sequence<Sequence<int>*(*)(Sequence<int>*, bool)>* obj = new ArraySequence<Sequence<int>*(*)(Sequence<int>*, bool)>(4);
                //obj->Append(&Sorter::BubbleSort);
                //obj->Append(&Sorter::ShakerSort);
                //obj->Append(&Sorter::InsertionSort);
                //obj->Append(&Sorter::SelectionSort);
                ////obj->

                ////Sequence<int>*(*func)(Sequence<int>*, bool);

                //int rand1 = rand() % 5;
                //string str;
                //if (rand1 == 0)
                //{
                //    sort_seq = Sorter::BubbleSort(seq);
                //    str = "Bubble";
                //}
                //else if (rand1 == 1)
                //{
                //    sort_seq = Sorter::ShakerSort(seq);
                //    str = "Shaker";
                //}
                //else if (rand1 == 2)
                //{
                //    sort_seq = Sorter::InsertionSort(seq);
                //    str = "Insert";
                //}
                //else if(rand1 == 3)
                //{
                //    sort_seq = Sorter::SelectionSort(seq);
                //    str = "Select";
                //}
                //else
                //{
                //    sort_seq = Sorter::MergeSort(seq);
                //    str = "Merge";
                //}
                //cout << str << ":" << endl;
                //cout << "Sort array: ";
                //cout << sort_seq->Show() << endl;
                //delete sort_seq;

                //delete seq;
            }
            break;
            case '1':
            {
                for (int i = 0; i < size; i++)
                {
                    cout << "mas[" << i << "] = ";
                    cin >> mas[i];
                    cout << endl;
                }
                seq = new ArraySequence<int>(mas, size);
                cout << "Your array: " << seq->Show() << endl;
                cout << endl;
                cout << "BubbleSort: " << endl;
                sort_seq = list->Get(0)(seq, true);
                delete sort_seq;
                cout << "ShakerSort: " << endl;
                sort_seq = list->Get(1)(seq, true);
                delete sort_seq;
                cout << "InsertionSort: " << endl;
                sort_seq = list->Get(2)(seq, true);
                delete sort_seq;
                cout << "SelectionSort: " << endl;
                sort_seq = list->Get(3)(seq, true);
                delete sort_seq;
                cout << "MergeSort: " << endl;
                sort_seq = list->Get(4)(seq, true);
                delete sort_seq;

                delete seq;
            }
                break;
            
            case '2':
            {
                for (int i = 0; i < size; i++)
                {
                    mas[i] = rand() % 200 - 100;
                }
                seq = new ArraySequence<int>(mas, size);
                cout << "Our array: " << seq->Show() << endl;
                cout << endl;
                cout << "BubbleSort: " << endl;
                sort_seq = list->Get(0)(seq, true);
                delete sort_seq;
                cout << "ShakerSort: " << endl;
                sort_seq = list->Get(1)(seq, true);
                delete sort_seq;
                cout << "InsertionSort: " << endl;
                sort_seq = list->Get(2)(seq, true);
                delete sort_seq;
                cout << "SelectionSort: " << endl;
                sort_seq = list->Get(3)(seq, true);
                delete sort_seq;
                cout << "MergeSort: " << endl;
                sort_seq = list->Get(4)(seq, true);
                delete sort_seq;

                delete seq;
            }
                break;
            case '3':
            {
                for (int i = 0; i < size; i++)
                {
                    cout << "mas[" << i << "] = ";
                    cin >> mas[i];
                    cout << endl;
                }
                seq = new ArraySequence<int>(mas, size);
                cout << "Your array: " << seq->Show() << endl;
                cout << endl;
                cout << "BubbleSort: ";
                clock_t start = clock();
                sort_seq = list->Get(0)(seq, false);
                clock_t end = clock();
                double seconds = (double)(end - start) / CLOCKS_PER_SEC;
                cout << seconds << " seconds\n";
                delete sort_seq;
                cout << "ShakerSort: ";
                start = clock();
                sort_seq = list->Get(1)(seq, false);
                end = clock();
                seconds = (double)(end - start) / CLOCKS_PER_SEC;
                cout << seconds << " seconds\n";
                delete sort_seq;
                cout << "InsertionSort: ";
                start = clock();
                sort_seq = list->Get(2)(seq, false);
                end = clock();
                seconds = (double)(end - start) / CLOCKS_PER_SEC;
                cout << seconds << " seconds\n";
                delete sort_seq;
                cout << "SelectionSort: ";
                start = clock();
                sort_seq = list->Get(3)(seq, false);
                end = clock();
                seconds = (double)(end - start) / CLOCKS_PER_SEC;
                cout << seconds << " seconds\n";
                delete sort_seq;
                cout << "MergeSort: ";
                start = clock();
                sort_seq = list->Get(4)(seq, false);
                end = clock();
                seconds = (double)(end - start) / CLOCKS_PER_SEC;
                cout << seconds << " seconds\n";
                cout << "SortArray: " << sort_seq->Show() << endl;
                delete sort_seq;

                delete seq;
            }
                break;
            case '4':
            {
                for (int i = 0; i < size; i++)
                {
                    mas[i] = rand() % 200 - 100;
                }
                seq = new ArraySequence<int>(mas, size);
                cout << "Our array: " << seq->Show() << endl;
                cout << endl;
                cout << "BubbleSort: ";
                clock_t start = clock();
                sort_seq = list->Get(0)(seq, false);
                clock_t end = clock();
                double seconds = (double)(end - start) / CLOCKS_PER_SEC;
                cout << seconds << " seconds\n";
                delete sort_seq;
                cout << "ShakerSort: ";
                start = clock();
                sort_seq = list->Get(1)(seq, false);
                end = clock();
                seconds = (double)(end - start) / CLOCKS_PER_SEC;
                cout << seconds << " seconds\n";
                delete sort_seq;
                cout << "InsertionSort: ";
                start = clock();
                sort_seq = list->Get(2)(seq, false);
                end = clock();
                seconds = (double)(end - start) / CLOCKS_PER_SEC;
                cout << seconds << " seconds\n";
                delete sort_seq;
                cout << "SelectionSort: ";
                start = clock();
                sort_seq = list->Get(3)(seq, false);
                end = clock();
                seconds = (double)(end - start) / CLOCKS_PER_SEC;
                cout << seconds << " seconds\n";
                delete sort_seq;
                cout << "MergeSort: ";
                start = clock();
                sort_seq = list->Get(4)(seq, false);
                end = clock();
                seconds = (double)(end - start) / CLOCKS_PER_SEC;
                cout << seconds << " seconds\n";
                cout << "SortArray: " << sort_seq->Show() << endl;
                delete sort_seq;

                delete seq;
            }
                break;
            }
        }
        catch (IndexOutOfRange ex)
        {
            system("color 4");
            std::cout << "\n" << "ERROR !!!";
            std::cout << "\n" << ex.what() << endl;
        }
        catch (MyException ex)
        {
            system("color 4");
            std::cout << "\n" << "ERROR !!!";
            std::cout << "\n" << ex.what() << endl;
        }
        catch (exception ex)
        {
            system("color 4");
            std::cout << "\n" << "ERROR !!!";
            std::cout << "\n" << ex.what() << endl;
        }

        std::cout << "\nIf you want to exit - press \"e\", else - press \"p\"" << endl;

        std::cin >> str;

    } while (str != "e");

    std::cout << "\nGOODbye\n" << endl;
}

#pragma once

#include <iostream>
#include "Sorter.h"
#include "LinkedListSequence.h"
#include "ArraySequence.h"

template<class T>
int Equal_Seq(Sequence<T> *seq1, Sequence<T> * seq2)
{
    if (seq1->GetLength() != seq2->GetLength())
    {
        return 0;
    }
    for (int i = 0; i < seq1->GetLength(); i++)
    {
        if (seq1->Get(i) != seq2->Get(i))
        {
            return 0;
        }
    }
    return 1;
}

void Test_BubbleSort()
{
    int check = 0;
    int i = 0;

    Sequence<double> *seq = new ArraySequence<double>(new double[18]{ -334.863, -451.697, -41.451, -441.994, 109.954, 439.330, -19.458, -22.818, -4.923, 295.412, -286.161, -231.144, 719.631, 208.305, -95.622, 154.439, 62.023, -824.558 }, 18);
    Sequence<double> *check_seq = new ArraySequence<double>(new double[18]{ -824.558, -451.697, -441.994, -334.863, -286.161, -231.144, -95.622, -41.451, -22.818, -19.458, -4.923, 62.023, 109.954, 154.439, 208.305, 295.412, 439.330, 719.631 }, 18);
    Sequence<double> *seq_sort = Sorter::BubbleSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new LinkedListSequence<double>(new double[7]{ -187.121, 586.826, 418.748, 313.146, -27.205, 243.532, 358.924 }, 7);
    check_seq = new LinkedListSequence<double>(new double[7]{ -187.121, -27.205, 243.532, 313.146, 358.924, 418.748, 586.826 }, 7);
    seq_sort = Sorter::BubbleSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new LinkedListSequence<double>(new double[18]{ 107.216, -236.561, 15.153, 471.481, 138.677, 4.059, -397.377, -556.029, 90.364, 464.959, -375.540, 258.669, -1.386, 326.132, 172.669, -38.100, -308.370, 135.664 }, 18);
    check_seq = new LinkedListSequence<double>(new double[18]{ -556.029, -397.377, -375.540, -308.370, -236.561, -38.100, -1.386, 4.059, 15.153, 90.364, 107.216, 135.664, 138.677, 172.669, 258.669, 326.132, 464.959, 471.481 }, 18);
    seq_sort = Sorter::BubbleSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new LinkedListSequence<double>(new double[9]{ 459.717, 840.930, -160.122, -407.055, -18.300, 163.201, 82.659, -179.849, 103.651 }, 9);
    check_seq = new LinkedListSequence<double>(new double[9]{ -407.055, -179.849, -160.122, -18.300, 82.659, 103.651, 163.201, 459.717, 840.930 }, 9);
    seq_sort = Sorter::BubbleSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new ArraySequence<double>(new double[17]{ -64.501, -10.525, -377.534, -478.399, -570.869, -127.137, -368.082, -48.467, -113.616, -241.668, -7.617, -654.337, 230.417, -490.146, 48.738, 366.535, 554.447 }, 17);
    check_seq = new ArraySequence<double>(new double[17]{ -654.337, -570.869, -490.146, -478.399, -377.534, -368.082, -241.668, -127.137, -113.616, -64.501, -48.467, -10.525, -7.617, 48.738, 230.417, 366.535, 554.447 }, 17);
    seq_sort = Sorter::BubbleSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new LinkedListSequence<double>(new double[14]{ 254.907, 151.704, -296.300, -74.685, 232.122, -82.475, -273.148, -442.032, 95.634, -13.026, -236.254, -408.941, 58.799, 624.692 }, 14);
    check_seq = new LinkedListSequence<double>(new double[14]{ -442.032, -408.941, -296.300, -273.148, -236.254, -82.475, -74.685, -13.026, 58.799, 95.634, 151.704, 232.122, 254.907, 624.692 }, 14);
    seq_sort = Sorter::BubbleSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new ArraySequence<double>(new double[18]{ -39.244, -172.898, -8.657, -150.644, -262.934, 42.290, 173.331, -26.001, 11.721, 177.481, 69.812, -670.430, 17.681, 294.082, 455.618, 77.257, -628.107, -418.215 }, 18);
    check_seq = new ArraySequence<double>(new double[18]{ -670.430, -628.107, -418.215, -262.934, -172.898, -150.644, -39.244, -26.001, -8.657, 11.721, 17.681, 42.290, 69.812, 77.257, 173.331, 177.481, 294.082, 455.618 }, 18);
    seq_sort = Sorter::BubbleSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new ArraySequence<double>(new double[16]{ 0.818, -5.946, 236.919, 314.152, -12.482, -68.665, 0.839, -422.140, -164.491, -87.683, -159.280, -67.233, -360.182, -9.112, -114.924, -715.888 }, 16);
    check_seq = new ArraySequence<double>(new double[16]{ -715.888, -422.140, -360.182, -164.491, -159.280, -114.924, -87.683, -68.665, -67.233, -12.482, -9.112, -5.946, 0.818, 0.839, 236.919, 314.152 }, 16);
    seq_sort = Sorter::BubbleSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new LinkedListSequence<double>(new double[14]{ -278.482, 472.801, -508.832, -360.705, 475.974, -28.312, -428.104, 9.313, -66.885, -205.445, 178.792, 200.932, 197.774, -547.868 }, 14);
    check_seq = new LinkedListSequence<double>(new double[14]{ -547.868, -508.832, -428.104, -360.705, -278.482, -205.445, -66.885, -28.312, 9.313, 178.792, 197.774, 200.932, 472.801, 475.974 }, 14);
    seq_sort = Sorter::BubbleSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new ArraySequence<double>(new double[5]{ 527.817, -34.244, 66.519, -10.890, 13.843 }, 5);
    check_seq = new ArraySequence<double>(new double[5]{ -34.244, -10.890, 13.843, 66.519, 527.817 }, 5);
    seq_sort = Sorter::BubbleSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    if (check == i)
    {
        std::cout << "Test_BubbleSort: GOOD" << endl;
    }
    else
    {
        std::cout << "Test_BubbleSort: FAIL" << endl;
    }
}

void Test_ShakerSort()
{
    int check = 0;
    int i = 0;

    Sequence<double> *seq = new ArraySequence<double>(new double[1]{ -181.957 }, 1);
    Sequence<double> *check_seq = new ArraySequence<double>(new double[1]{ -181.957 }, 1);
    Sequence<double> *seq_sort = Sorter::ShakerSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new LinkedListSequence<double>(new double[4]{ -115.352, -264.059, 38.716, 172.953 }, 4);
    check_seq = new LinkedListSequence<double>(new double[4]{ -264.059, -115.352, 38.716, 172.953 }, 4);
    seq_sort = Sorter::ShakerSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new LinkedListSequence<double>(new double[19]{ -100.871, -125.995, 356.435, 348.525, -399.633, -306.943, 229.140, 71.041, 98.174, 630.693, -156.083, 817.383, -30.161, 164.133, -327.671, 684.635, -457.508, 40.944, -294.263 }, 19);
    check_seq = new LinkedListSequence<double>(new double[19]{ -457.508, -399.633, -327.671, -306.943, -294.263, -156.083, -125.995, -100.871, -30.161, 40.944, 71.041, 98.174, 164.133, 229.140, 348.525, 356.435, 630.693, 684.635, 817.383 }, 19);
    seq_sort = Sorter::ShakerSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new ArraySequence<double>(new double[6]{ -659.298, -561.170, 200.432, 86.062, 311.130, 258.347 }, 6);
    check_seq = new ArraySequence<double>(new double[6]{ -659.298, -561.170, 86.062, 200.432, 258.347, 311.130 }, 6);
    seq_sort = Sorter::ShakerSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new LinkedListSequence<double>(new double[11]{ 117.090, -178.404, 552.527, 161.294, -256.751, 285.995, 149.545, 277.414, 123.228, 151.743, 182.003 }, 11);
    check_seq = new LinkedListSequence<double>(new double[11]{ -256.751, -178.404, 117.090, 123.228, 149.545, 151.743, 161.294, 182.003, 277.414, 285.995, 552.527 }, 11);
    seq_sort = Sorter::ShakerSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new LinkedListSequence<double>(new double[6]{ -129.249, -31.954, 331.549, 91.337, -5.545, 29.745 }, 6);
    check_seq = new LinkedListSequence<double>(new double[6]{ -129.249, -31.954, -5.545, 29.745, 91.337, 331.549 }, 6);
    seq_sort = Sorter::ShakerSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new LinkedListSequence<double>(new double[1]{ -459.699 }, 1);
    check_seq = new LinkedListSequence<double>(new double[1]{ -459.699 }, 1);
    seq_sort = Sorter::ShakerSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new ArraySequence<double>(new double[15]{ -31.579, 202.879, -102.148, 18.983, -843.166, -593.989, 20.729, -791.192, -412.879, 113.315, -186.565, -288.464, -364.350, -470.033, -262.563 }, 15);
    check_seq = new ArraySequence<double>(new double[15]{ -843.166, -791.192, -593.989, -470.033, -412.879, -364.350, -288.464, -262.563, -186.565, -102.148, -31.579, 18.983, 20.729, 113.315, 202.879 }, 15);
    seq_sort = Sorter::ShakerSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new ArraySequence<double>(new double[19]{ -649.284, -185.968, -186.016, 586.685, 103.813, -189.160, -430.815, 169.424, 113.887, 418.794, -772.061, -121.043, -405.654, -590.320, -393.951, -309.489, -27.586, 0.514, 589.004 }, 19);
    check_seq = new ArraySequence<double>(new double[19]{ -772.061, -649.284, -590.320, -430.815, -405.654, -393.951, -309.489, -189.160, -186.016, -185.968, -121.043, -27.586, 0.514, 103.813, 113.887, 169.424, 418.794, 586.685, 589.004 }, 19);
    seq_sort = Sorter::ShakerSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new ArraySequence<double>(new double[6]{ 373.428, -923.974, 56.005, -121.335, 229.261, 124.222 }, 6);
    check_seq = new ArraySequence<double>(new double[6]{ -923.974, -121.335, 56.005, 124.222, 229.261, 373.428 }, 6);
    seq_sort = Sorter::ShakerSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    if (check == i)
    {
        std::cout << "Test_ShakerSort: GOOD" << endl;
    }
    else
    {
        std::cout << "Test_ShakerSort: FAIL" << endl;
    }
}

void Test_InsertionSort()
{
    int check = 0;
    int i = 0;

    Sequence<double> *seq = new ArraySequence<double>(new double[8]{ -257.786, -464.594, -33.515, 920.209, -27.430, -50.001, -182.370, 67.413 }, 8);
    Sequence<double> *check_seq = new ArraySequence<double>(new double[8]{ -464.594, -257.786, -182.370, -50.001, -33.515, -27.430, 67.413, 920.209 }, 8);
    Sequence<double> *seq_sort = Sorter::InsertionSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new LinkedListSequence<double>(new double[1]{ 598.576 }, 1);
    check_seq = new LinkedListSequence<double>(new double[1]{ 598.576 }, 1);
    seq_sort = Sorter::InsertionSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new ArraySequence<double>(new double[4]{ -118.384, -81.889, -377.739, -262.032 }, 4);
    check_seq = new ArraySequence<double>(new double[4]{ -377.739, -262.032, -118.384, -81.889 }, 4);
    seq_sort = Sorter::InsertionSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new LinkedListSequence<double>(new double[5]{ 126.032, 384.746, -263.684, 274.004, 648.707 }, 5);
    check_seq = new LinkedListSequence<double>(new double[5]{ -263.684, 126.032, 274.004, 384.746, 648.707 }, 5);
    seq_sort = Sorter::InsertionSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new ArraySequence<double>(new double[2]{ 543.674, -330.269 }, 2);
    check_seq = new ArraySequence<double>(new double[2]{ -330.269, 543.674 }, 2);
    seq_sort = Sorter::InsertionSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new ArraySequence<double>(new double[3]{ -125.628, 520.799, 35.885 }, 3);
    check_seq = new ArraySequence<double>(new double[3]{ -125.628, 35.885, 520.799 }, 3);
    seq_sort = Sorter::InsertionSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new LinkedListSequence<double>(new double[8]{ 20.744, 107.318, 126.603, 50.880, 0.892, 35.113, 134.439, -39.572 }, 8);
    check_seq = new LinkedListSequence<double>(new double[8]{ -39.572, 0.892, 20.744, 35.113, 50.880, 107.318, 126.603, 134.439 }, 8);
    seq_sort = Sorter::InsertionSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new LinkedListSequence<double>(new double[13]{ -168.366, 65.287, 556.128, 175.496, 225.057, -47.935, -37.093, 325.623, -61.410, 529.640, -81.727, -106.924, -22.471 }, 13);
    check_seq = new LinkedListSequence<double>(new double[13]{ -168.366, -106.924, -81.727, -61.410, -47.935, -37.093, -22.471, 65.287, 175.496, 225.057, 325.623, 529.640, 556.128 }, 13);
    seq_sort = Sorter::InsertionSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new ArraySequence<double>(new double[17]{ -238.720, 499.007, 86.616, 473.978, -4.608, -29.743, -144.600, 773.490, 249.656, 2.148, -117.996, 635.187, -183.534, -402.243, 215.697, 256.872, 1.498 }, 17);
    check_seq = new ArraySequence<double>(new double[17]{ -402.243, -238.720, -183.534, -144.600, -117.996, -29.743, -4.608, 1.498, 2.148, 86.616, 215.697, 249.656, 256.872, 473.978, 499.007, 635.187, 773.490 }, 17);
    seq_sort = Sorter::InsertionSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new ArraySequence<double>(new double[13]{ 790.753, 314.110, 679.079, -34.014, -631.520, -0.796, -230.272, 670.472, 56.874, -72.897, -806.782, -101.055, 549.597 }, 13);
    check_seq = new ArraySequence<double>(new double[13]{ -806.782, -631.520, -230.272, -101.055, -72.897, -34.014, -0.796, 56.874, 314.110, 549.597, 670.472, 679.079, 790.753 }, 13);
    seq_sort = Sorter::InsertionSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    if (check == i)
    {
        std::cout << "Test_InsertionSort: GOOD" << endl;
    }
    else
    {
        std::cout << "Test_InsertionSort: FAIL" << endl;
    }
}

void Test_SelectionSort()
{
    int check = 0;
    int i = 0;

    Sequence<double> *seq = new ArraySequence<double>(new double[5]{ 302.145, -341.985, 17.067, 8.428, 176.770 }, 5);
    Sequence<double> *check_seq = new ArraySequence<double>(new double[5]{ -341.985, 8.428, 17.067, 176.770, 302.145 }, 5);
    Sequence<double> *seq_sort = Sorter::SelectionSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new ArraySequence<double>(new double[17]{ 4.161, 149.089, 76.385, 2.894, -409.727, -17.959, 536.443, -1.203, 547.772, -38.221, 350.347, -597.979, 34.732, 768.932, 771.413, -56.106, -244.688 }, 17);
    check_seq = new ArraySequence<double>(new double[17]{ -597.979, -409.727, -244.688, -56.106, -38.221, -17.959, -1.203, 2.894, 4.161, 34.732, 76.385, 149.089, 350.347, 536.443, 547.772, 768.932, 771.413 }, 17);
    seq_sort = Sorter::SelectionSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new LinkedListSequence<double>(new double[14]{ 116.112, 246.488, -495.758, -76.449, -112.197, 62.509, 109.162, -349.212, -399.693, -647.835, 844.689, 160.240, 120.065, -428.262 }, 14);
    check_seq = new LinkedListSequence<double>(new double[14]{ -647.835, -495.758, -428.262, -399.693, -349.212, -112.197, -76.449, 62.509, 109.162, 116.112, 120.065, 160.240, 246.488, 844.689 }, 14);
    seq_sort = Sorter::SelectionSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new LinkedListSequence<double>(new double[6]{ 43.661, 342.198, -24.161, -107.803, 240.507, 8.720 }, 6);
    check_seq = new LinkedListSequence<double>(new double[6]{ -107.803, -24.161, 8.720, 43.661, 240.507, 342.198 }, 6);
    seq_sort = Sorter::SelectionSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new ArraySequence<double>(new double[16]{ -447.081, -83.550, 46.334, 547.812, 66.089, 354.837, 311.649, 178.925, 369.163, 135.577, -230.407, -260.311, -57.523, 12.526, -169.356, -650.640 }, 16);
    check_seq = new ArraySequence<double>(new double[16]{ -650.640, -447.081, -260.311, -230.407, -169.356, -83.550, -57.523, 12.526, 46.334, 66.089, 135.577, 178.925, 311.649, 354.837, 369.163, 547.812 }, 16);
    seq_sort = Sorter::SelectionSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new LinkedListSequence<double>(new double[17]{ -275.551, -14.748, 729.252, -22.336, -75.379, 637.559, -536.885, -88.498, -64.485, -129.670, -46.675, -57.264, -294.193, 811.309, 116.943, -695.694, 16.156 }, 17);
    check_seq = new LinkedListSequence<double>(new double[17]{ -695.694, -536.885, -294.193, -275.551, -129.670, -88.498, -75.379, -64.485, -57.264, -46.675, -22.336, -14.748, 16.156, 116.943, 637.559, 729.252, 811.309 }, 17);
    seq_sort = Sorter::SelectionSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new ArraySequence<double>(new double[1]{ 116.512 }, 1);
    check_seq = new ArraySequence<double>(new double[1]{ 116.512 }, 1);
    seq_sort = Sorter::SelectionSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new ArraySequence<double>(new double[13]{ -76.394, -307.093, 431.436, 718.657, 316.123, -66.708, 9.107, -169.110, -339.304, -25.874, 484.166, -28.867, -12.016 }, 13);
    check_seq = new ArraySequence<double>(new double[13]{ -339.304, -307.093, -169.110, -76.394, -66.708, -28.867, -25.874, -12.016, 9.107, 316.123, 431.436, 484.166, 718.657 }, 13);
    seq_sort = Sorter::SelectionSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new LinkedListSequence<double>(new double[1]{ 197.576 }, 1);
    check_seq = new LinkedListSequence<double>(new double[1]{ 197.576 }, 1);
    seq_sort = Sorter::SelectionSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new LinkedListSequence<double>(new double[18]{ -159.814, 59.695, -415.956, 96.712, 0.681, -668.909, -213.848, -175.407, 71.820, 298.893, 94.187, 377.870, 175.736, -205.208, -261.310, -341.727, -65.389, 280.814 }, 18);
    check_seq = new LinkedListSequence<double>(new double[18]{ -668.909, -415.956, -341.727, -261.310, -213.848, -205.208, -175.407, -159.814, -65.389, 0.681, 59.695, 71.820, 94.187, 96.712, 175.736, 280.814, 298.893, 377.870 }, 18);
    seq_sort = Sorter::SelectionSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    if (check == i)
    {
        std::cout << "Test_SelectionSort: GOOD" << endl;
    }
    else
    {
        std::cout << "Test_SelectionSort: FAIL" << endl;
    }
}

void Test_MergeSort()
{
    int check = 0;
    int i = 0;

    Sequence<double> *seq = new ArraySequence<double>(new double[6]{ 61.177, 276.190, 220.427, 166.560, -398.339, 22.636 }, 6);
    Sequence<double> *check_seq = new ArraySequence<double>(new double[6]{ -398.339, 22.636, 61.177, 166.560, 220.427, 276.190 }, 6);
    Sequence<double> *seq_sort = Sorter::MergeSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new ArraySequence<double>(new double[18]{ -48.990, -225.081, -174.039, 105.694, -27.760, -44.560, 109.271, -32.395, 436.078, -92.605, 89.512, 771.764, -20.749, 411.399, 691.071, 111.698, 297.085, -203.245 }, 18);
    check_seq = new ArraySequence<double>(new double[18]{ -225.081, -203.245, -174.039, -92.605, -48.990, -44.560, -32.395, -27.760, -20.749, 89.512, 105.694, 109.271, 111.698, 297.085, 411.399, 436.078, 691.071, 771.764 }, 18);
    seq_sort = Sorter::MergeSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new LinkedListSequence<double>(new double[7]{ -317.382, 63.079, 346.249, -548.862, 153.373, 9.903, 444.042 }, 7);
    check_seq = new LinkedListSequence<double>(new double[7]{ -548.862, -317.382, 9.903, 63.079, 153.373, 346.249, 444.042 }, 7);
    seq_sort = Sorter::MergeSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new ArraySequence<double>(new double[3]{ -264.120, 283.381, -198.946 }, 3);
    check_seq = new ArraySequence<double>(new double[3]{ -264.120, -198.946, 283.381 }, 3);
    seq_sort = Sorter::MergeSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new ArraySequence<double>(new double[1]{ 88.508 }, 1);
    check_seq = new ArraySequence<double>(new double[1]{ 88.508 }, 1);
    seq_sort = Sorter::MergeSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new LinkedListSequence<double>(new double[4]{ -232.243, -9.411, 320.579, 21.407 }, 4);
    check_seq = new LinkedListSequence<double>(new double[4]{ -232.243, -9.411, 21.407, 320.579 }, 4);
    seq_sort = Sorter::MergeSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new LinkedListSequence<double>(new double[13]{ -45.159, 539.345, -214.558, 847.034, 203.313, -44.181, -460.960, -154.533, -492.579, 250.001, 22.350, 90.738, -37.419 }, 13);
    check_seq = new LinkedListSequence<double>(new double[13]{ -492.579, -460.960, -214.558, -154.533, -45.159, -44.181, -37.419, 22.350, 90.738, 203.313, 250.001, 539.345, 847.034 }, 13);
    seq_sort = Sorter::MergeSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new LinkedListSequence<double>(new double[12]{ -221.061, -535.687, 444.156, 597.672, 4.484, 118.471, -596.794, 287.840, 160.480, -235.936, 0.421, -484.617 }, 12);
    check_seq = new LinkedListSequence<double>(new double[12]{ -596.794, -535.687, -484.617, -235.936, -221.061, 0.421, 4.484, 118.471, 160.480, 287.840, 444.156, 597.672 }, 12);
    seq_sort = Sorter::MergeSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new LinkedListSequence<double>(new double[10]{ -269.747, 316.170, -341.046, -39.479, 298.050, -601.776, 509.138, 575.380, -248.353, 453.641 }, 10);
    check_seq = new LinkedListSequence<double>(new double[10]{ -601.776, -341.046, -269.747, -248.353, -39.479, 298.050, 316.170, 453.641, 509.138, 575.380 }, 10);
    seq_sort = Sorter::MergeSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    seq = new ArraySequence<double>(new double[18]{ -59.734, -81.448, -316.659, -173.841, -121.895, -257.687, -104.250, -486.377, -52.636, 259.292, 3.301, 497.777, 11.429, -142.349, 105.439, 772.817, 68.494, 37.659 }, 18);
    check_seq = new ArraySequence<double>(new double[18]{ -486.377, -316.659, -257.687, -173.841, -142.349, -121.895, -104.250, -81.448, -59.734, -52.636, 3.301, 11.429, 37.659, 68.494, 105.439, 259.292, 497.777, 772.817 }, 18);
    seq_sort = Sorter::MergeSort(seq);
    check += Equal_Seq(seq_sort, check_seq);
    i++;
    delete seq;
    delete check_seq;
    delete seq_sort;

    if (check == i)
    {
        std::cout << "Test_MergeSort: GOOD" << endl;
    }
    else
    {
        std::cout << "Test_MergeSort: FAIL" << endl;
    }
}

void Test_Sequence()
{
    std::cout << "Test_Sequence: GOOD" << endl;
}
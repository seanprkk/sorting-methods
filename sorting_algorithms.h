#ifndef SORTING_ALGORITHMS_H
#define SORTING_ALGORITHMS_H

#include <vector>
#include <string> // For std::string

// Function declarations for sorting algorithms
void insertionSort(std::vector<int>& vec);
void selectionSort(std::vector<int>& vec);
void mergeSort(std::vector<int>& vec);
void heapSort(std::vector<int>& vec);
void bubbleSort(std::vector<int>& vec);
void quickSort(std::vector<int>& vec, int low, int high);
void countingSort(std::vector<int>& vec);
void radixSort(std::vector<int>& vec);
void shellSort(std::vector<int>& vec);

// Function declarations for visualization
void printVector(const std::vector<int>& vec);
void visualizeSort(const std::vector<int>& vec, const std::string& algorithm);

#endif // SORTING_ALGORITHMS_H

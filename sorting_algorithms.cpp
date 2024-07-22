#include "sorting_algorithms.h"
#include <algorithm>
#include <iostream>
#include <iomanip> // For std::setw

// Utility function to print a vector
void printVector(const std::vector<int>& vec) {
    for (int num : vec) {
        std::cout << std::setw(3) << num << " ";
    }
    std::cout << std::endl;
}

// Function to visualize sorting process
void visualizeSort(const std::vector<int>& vec, const std::string& algorithm) {
    std::cout << "Sorting using " << algorithm << ":\n";
    printVector(vec);
    std::cout << "-----------------------------------------\n";
}

// Function definitions for sorting algorithms

void insertionSort(std::vector<int>& vec) {
    int n = vec.size();
    for (int i = 1; i < n; ++i) {
        int key = vec[i];
        int j = i - 1;
        while (j >= 0 && vec[j] > key) {
            vec[j + 1] = vec[j];
            --j;
        }
        vec[j + 1] = key;

        visualizeSort(vec, "Insertion Sort");
        // Optionally add delay or user interaction for visualization
        // std::cin.get();
    }
}

void selectionSort(std::vector<int>& vec) {
    int n = vec.size();
    for (int i = 0; i < n - 1; ++i) {
        int min_index = i;
        for (int j = i + 1; j < n; ++j) {
            if (vec[j] < vec[min_index]) {
                min_index = j;
            }
        }
        std::swap(vec[i], vec[min_index]);

        visualizeSort(vec, "Selection Sort");
        // Optionally add delay or user interaction for visualization
        // std::cin.get();
    }
}

void bubbleSort(std::vector<int>& vec) {
    int n = vec.size();
    bool swapped;
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (vec[j] > vec[j + 1]) {
                std::swap(vec[j], vec[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;

        visualizeSort(vec, "Bubble Sort");
        // Optionally add delay or user interaction for visualization
        // std::cin.get();
    }
}

void quickSort(std::vector<int>& vec, int low, int high) {
    if (low < high) {
        int pivot = partition(vec, low, high);
        quickSort(vec, low, pivot - 1);
        quickSort(vec, pivot + 1, high);
    }
}

int partition(std::vector<int>& vec, int low, int high) {
    int pivot = vec[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; ++j) {
        if (vec[j] <= pivot) {
            ++i;
            std::swap(vec[i], vec[j]);
        }
    }
    std::swap(vec[i + 1], vec[high]);
    return i + 1;
}

// Implementations of mergeSort, heapSort, countingSort, radixSort, shellSort are omitted for brevity.
// You can implement them similarly and add visualization logic as needed.

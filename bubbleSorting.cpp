#include <iostream>
using namespace std;

void bubble_sort(int array[], int size);
void bubbleSort(int array[], int size);
void printArr(int array[], int size);

int main(){
  int numbers[] = {10, 1, 9, 2, 8, 3, 4, 5, 7, 6};
  int array_len = sizeof(numbers)/sizeof(int);

  bubble_sort(numbers, array_len);
  printArr(numbers, array_len);

  return 0;
}

void bubble_sort(int array[], int size){
  int temp;

  for(int i = 0; i < size - 1; i++){
    for(int j = 0; j < size - i - 1; j++){
      if(array[j] > array[j + 1]){
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}

void printArr(int array[], int size){
  for(int i = 0; i < size; i++){
    std::cout << array[i] << " ";
  }
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}
  

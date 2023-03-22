#include <stdio.h>

// Consider running Bubble Sort on the array shown below. Write a c program to compute the number of swaps needed for each index in the array. 

void swap(int *xp, int *yp){
  
  int x = *xp; 
  *xp = *yp; 
  *yp = x; 
  
}

void bubbleSort(int arr[], int size) {

  int c = 0; 
  int passNum = 1; 

  for (int j = 0; j<size-1; j++){
    
    for (int i = 0; i<size-j-1; i++) { 
      
      if (arr[i] > arr[i+1]) {

        swap(&arr[i], &arr[i+1]); 

        c++; 
        
      }
    }
    printf("pass #%d: %d\n", passNum, c); 
    c = 0; 
  } 
}

int main(void) {

  int arr[9] = {97,  16,  45,  63,  13,  22,  7,  58,  72};
 
  bubbleSort(arr, 9); 

  // for (int i = 0; i < 9; i++) {
  //   printf("%d ", arr[i]); 
  // }
 
  return 0;
}
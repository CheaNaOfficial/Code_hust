Bài 1.4. Viết hàm countEven(int*, int) nhận một mảng số nguyên và kích thước của mảng, trả về số lượng số chẵn trong mảng???

For example:

Test	Result
int arr[] = {1, 5, 4, 8, 10, 6, 7, 2};
cout << counteven(arr, 8);
5

...........................................................................................................................
...........................................................................................................................

#include <iostream>
using namespace std;
int counteven (int* arr, int size){
   int n=0;
   int i=0;
  for (i=0; i<size; i++){
     if(arr[i]%2 == 0) n++;
  }
   return n;
  }

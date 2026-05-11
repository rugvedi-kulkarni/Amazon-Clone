// DSA Lecture 1

// Arrays: Min and Max of two numbers:
/*
#include <iostream>
using namespace std;
int main()
{
     int smallest = INT_MAX;
     int largest = INT_MIN;

     int arr[] = {15, 22, 8, -78, 32}, i;
     int size = sizeof(arr) / sizeof(int);

     for (i = 0; i < size; i++)
     {
          if (arr[i] < smallest)
          {
               smallest = arr[i];
          }

          if (arr[i] > largest)
          {
               largest = arr[i];
          }

          // Implicit Functions in cpp (Instead of using if)
          // smallest = min(arr[i], smallest); 
          // largest = max(arr[i], largest); 
     }

     cout << "Largest number: " << largest << endl;
     cout << "Smallest number: " << smallest << endl;
    
     // For finding index of largest and smallest number.
     int minIndex = 0, maxIndex = 0; 

     //{15, 22, 8, -78, 32} -> comparing arr[i] = arr[i+1] throughout the loop
     for (int i = 1; i < size; i++)
     {
          if (arr[i] < arr[minIndex])
          {
               minIndex = i;
          }
        
          if (arr[i] > arr[maxIndex])
          {
               maxIndex = i;
          }    
     }
     cout << "Maximum index:" << maxIndex << endl;
     cout << "Minimum index:" << minIndex << endl;     

     return 0;
}
*/

// Linear search Algorithm:
#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
     for (int i = 0; i < size; i++)
     {
          if (arr[i] == target)
          {
               return i;
          }        
     }
   return -1;  
}

int main()
{
     int arr[] = {2, 5, 7, 8, 9, 7, 3};
     int size = 7, target = 8;

     cout << linearSearch(arr, size, target);
     return 0;
}

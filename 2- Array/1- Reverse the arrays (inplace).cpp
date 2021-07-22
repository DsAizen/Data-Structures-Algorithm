/*This needs O(1) extra space for exchanging elements and is an example of an in-place algorithm.
Which Sorting Algorithms are In-Place and which are not? 
In Place: Bubble sort, Selection Sort, Insertion Sort, Heapsort.
Not In-Place: Merge Sort. Note that merge sort requires O(n) extra space.
What about QuickSort? Why is it called In-Place? 
QuickSort uses extra space for recursive function calls. It is called in-place according to broad definition as extra space required is not used to manipulate input,but only for recursive calls. */
// An in-place C++ program to reverse an array
#include <bits/stdc++.h>
using namespace std;

/* Function to reverse arr[] from start to end*/
void revereseArray(int arr[], int n)
{
for (int i=0; i<n/2; i++)
	swap(arr[i], arr[n-i-1]);
}	

/* Utility function to print an array */
void printArray(int arr[], int size)
{
for (int i = 0; i < size; i++)
	cout << arr[i] << " ";
cout << endl;
}

/* Driver function to test above functions */
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
	printArray(arr, n);	
	revereseArray(arr, n);	
	cout << "Reversed array is" << endl;
	printArray(arr, n);	
	return 0;
}

// An Not in-place C++ program to reverse an array
//This needs O(n) extra space and is an example of a not-in-place algorithm.
//An In-Place Implementation of Reversing an array. 
 
#include <bits/stdc++.h>
using namespace std;

/* Function to reverse arr[] from start to end*/
void revereseArray(int arr[], int n)
{
// Create a copy array and store reversed
// elements
int rev[n];
for (int i=0; i<n; i++)
	rev[n-i-1] = arr[i];

// Now copy reversed elements back to arr[]
for (int i=0; i<n; i++)
	arr[i] = rev[i];
}	

/* Utility function to print an array */
void printArray(int arr[], int size)
{
for (int i = 0; i < size; i++)
	cout << arr[i] << " ";
cout << endl;
}

/* Driver function to test above functions */
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6};	
	int n = sizeof(arr)/sizeof(arr[0]);
	printArray(arr, n);	
	revereseArray(arr, n);	
	cout << "Reversed array is" << endl;
	printArray(arr, n);	
	return 0;
}


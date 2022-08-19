/*
 Quick Sort
    1. Correct positions in final, sorted array.
    2. Items to the left are smaller.
    3. Items to the right are larger.
    remeber Pivot.
*/
#include <iostream>

using namespace std;


// Swap two elements - Utility function
void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];  //set pivot.
    int i = (low-1);
    
    for(int j=low; j <= high-1; j++)
    {
        //if current element is smaller than pivot, increment the low element
        //swap elements at i and j
        if(arr[j] <= pivot)
        {
            i++; // increment index of smaller element
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return(i+1);
}

void quickSort(int arr[], int low, int high)
{
    if(low < high)
    {
		//partition the array 
        int pivot = partition(arr,low,high);
		
		//sort the sub arrays independently 
        quickSort(arr, low, pivot-1);
        quickSort(arr, pivot+1,high);
    }
}
void displayArray(int arr[], int size)
{
    for(int i=0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}
int main() {
    
    int arr[] = {3,1,4,6,5,9,10,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    displayArray(arr, n);
    cout<<endl;
    quickSort(arr, 0, n-1);
    displayArray(arr,n);
    
    cin.get();

}
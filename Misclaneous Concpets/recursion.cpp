#include <bits/stdc++.h>
using namespace std;

int power(int n)
{
  //base case --> last leaf of recursion tree
  if(n==0)
  {
    return 1;
  }
  //recursive call to function
  return 2*power(n-1);
}
int fib(int n)
{
  if(n==0)
  {
    return 0;
  }
  else if(n==1)
  {
    return 1;
  }
  
  return fib(n-1)+fib(n-2);
}
bool isSorted(int arr[], int size)
{
  if(size==0||size==1)
  {
    return 1;
  }
  if(arr[0]>=arr[1])
  {
    return 0;
  }
  return isSorted(arr+1, size-1);
}
int sum(int arr[], int size)
{
  if(size==0)
  {
    return 0;
  }
  if(size==1)
  {
    return arr[0];
  }
  arr[1]=arr[0]+arr[1];
  return sum(arr+1, size-1);
}
int binary(int arr[], int start, int end, int key)
{
    int mid=start+(end-start)/2;

  if(start>end)
  {
    return -1;
  }
  else if(key==arr[mid])
  {
    return mid;
  }
  else if(key>arr[mid])
  {
    binary(arr, mid, end, key);
  }
  else if(key<arr[mid])
  {
    binary(arr, start, mid, key);
  }
}
int linear(int arr[], int size, int key)
{
   if(size==0)
  {
    return -1;
  }
  if(key==arr[0])
  {
    return 0;
  }
  int x = linear(arr+1, size-1, key);
  if(x==-1)
  {
    return -1;
  }
  else 
  {
        return x + 1;
  }
}
void reverse(string &str,int start, int end)
{
  if(start>end)
  {
    return ;
  }
  swap(str[start], str[end]);
  start++;
  end--;
  reverse(str, start, end);
}
void printarr(int arr[], int size)
{
  int i=0;
  while(i<size)
  {
    cout<<arr[i]<<" ";
    i++;
  }
}
bool palindrome(string str, int start, int end)
{
  if(start>=end)
  {
    return 1;
  }
  if(str[start]!=str[end])
  {
    return 0;
  }
  return palindrome(str, start+1, end-1);
}
int ModularExponentation(int a, int b)
{
  if(a==1||b==0)
  {
    return 1;
  }
  int ans = ModularExponentation(a, b/2);
  if(b%2==0)
  {
    return ans*ans;
  }
  else if(b%2==1)
  {
    return a*ans*ans;
  }
}
void Bubble(int arr[], int size)
{
  if(size<=1)
  {
    return;
  }
  int i=0;
  while(i<size)
  {
    if(arr[i]>arr[i+1])
    {
      swap(arr[i], arr[i+1]);
    }
    i++;
  }
  Bubble(arr, size-1);
}
void merge(int arr[], int left, int mid, int right) {
    int len1 = mid - left + 1;
    int len2 = right - mid;
    // Temporary arrays to hold the two halves
    int leftArray[len1];
    int rightArray[len2];

    // Copy data into the temporary arrays
    for (int i = 0; i < len1; i++)
        leftArray[i] = arr[left + i];
    for (int i = 0; i < len2; i++)
        rightArray[i] = arr[mid + 1 + i];

    // Merging the temporary arrays back into the original array
    int i = 0, j = 0, k = left;
    while (i < len1 && j < len2) {
        if (leftArray[i] <= rightArray[j]) {
            arr[k] = leftArray[i];
            i++;
        } else {
            arr[k] = rightArray[j];
            j++;
        }
        k++;
    }
    while (i < len1) {
        arr[k] = leftArray[i];
        i++;
        k++;
    }
    while (j < len2) {
        arr[k] = rightArray[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int left, int right)//variations in interview
 {
    if (left >= right) return; // Base case: single element or empty array

    int mid = left + (right - left) / 2; // Find the middle point

    // Recursively sort the two halves
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    // Merge the two sorted halves
    merge(arr, left, mid, right);
}
int partition(int *arr, int start, int end)//sometimes, direct in interview
{
  int pivot = arr[start];
  int index=0;
  for(int i=start; i<=end; i++)
  {
    if(pivot>arr[i])
    {
      index++;
    }
  }
  int pivotindex= start + index;
  swap(arr[pivotindex], arr[start]);
  int i=start, j=end; 
  while(i<pivotindex && j>pivotindex)
  {
    while(arr[i]<=pivot)
    {
      i++;
    }
    while(arr[j]>pivot)
    {
      j--;
    }
    if(i<pivotindex && j>pivotindex)
    {
      swap(arr[i++], arr[j--]);
    }
  }
  return pivotindex;
}
void quickSort(int arr[], int s, int e)
{
  if(s>=e)
  {
    return;
  }
  int p = partition(arr, s, e);
  quickSort(arr, s, p-1);
  quickSort(arr, p+1, e);
}
int main()
{
  // cout<<power(4);
  // cout<<fib(7);
  // int arr[]={1,2,3,4,5};
  // isSorted(arr, 5)?cout<<"yes":cout<<"no";
  // cout<<sum(arr, 5);
  //  if(binary(arr, 0, 5, 4)==-1)
  //   {
  //     cout<<"Not found"<<endl;
  //   }
  //   else
  //   {
  //     cout<<"found"<<binary(arr,0,  5, 4)<<endl;
  //   } 
  // string str = "aibohphobia";
  // reverse(name, 0, name.length()-1);
  // palindrome(str, 0, str.length()-1)?cout<<"yes":cout<<"no";
  // cout<<ModularExponentation(3, 3);
  int arr[7]={2,3,7,2,9,5,17};
  // Bubble(arr, 7);
  // mergeSort(arr, 0, 7);
  quickSort(arr, 0, 6);
  printarr(arr, 7);
  exit(0);
}
//selection sort
//get the minimum from the array and swap the minimum with the first element
// and iterate the loop for the remaining elements
// #include<bits/stdc++.h>
// using namespace std;
// void sol(vector<int> &anmol)
// {
//   int mini;
//   for(int i=0;i<=anmol.size()-2;i++)
//   {
//     mini=i;
//     for(int j=i;j<=anmol.size()-1;j++)
//     {
//       if(anmol[j]<anmol[mini]){
//         mini=j;
//       }
//     }
//     swap(anmol[mini],anmol[i]);
//
//   }
// }
// int main()
// {
//   vector<int> anmol={13,46,24,52,20,9};
//   sol(anmol);
//   for(int i=0;i<anmol.size();i++)
//   {
//     cout<<anmol[i]<<endl;
//   }
// }
//done and dusted lol
//time complexity is big of n square
//bubble sort
//pushes the maximum to the last by the adjacent swaps
// #include<bits/stdc++.h>
// using namespace std;
// void sol(vector<int> &anmol)
// {
//   for(int i=anmol.size()-1;i>=0;i--)
//   {
//     for(int j=0;j<=i-1;j++)
//     {
//       if(anmol[j]>anmol[j+1])
//       {
//         swap(anmol[j],anmol[j+1]);
//       }
//     }
//   }
// }
// int main()
// {
//   vector<int> anmol={13,46,24,52,20,9};
//   sol(anmol);
//   for(int i=0;i<anmol.size();i++)
//   {
//     cout<<anmol[i]<<endl;
//   }
// }
//done and dusted lol
//worst time complexity is o of n square
//but the best case is of o of n if its already sorted lol
//insertion sort
//takes an element and place it in the correct position
// #include<bits/stdc++.h>
// using namespace std;
// void sol(vector<int> &anmol)
// {
//
//   for(int i=0;i<anmol.size();i++)
//   {
//     int j=i;
//     while(j>0 && anmol[j]<anmol[j-1])
//     {
//       swap(anmol[j],anmol[j-1]);
//       j--;
//     }
//   }
// }
// int main()
// {
//   vector<int> anmol={13,46,24,52,20,9};
//   sol(anmol);
//   for(int i=0;i<anmol.size();i++)
//   {
//     cout<<anmol[i]<<endl;
//   }
// }
//done and dusted
//its time complexity is o of n swuare
//but the best case is o(n)
//merge sort
// //divide and merge
// #include <bits/stdc++.h>
// using namespace std;
//
// void merge(vector<int> &arr, int low, int mid, int high) {
//     vector<int> temp; // temporary array
//     int left = low;      // starting index of left half of arr
//     int right = mid + 1;   // starting index of right half of arr
//
//     //storing elements in the temporary array in a sorted manner//
//
//     while (left <= mid && right <= high) {
//         if (arr[left] <= arr[right]) {
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else {
//             temp.push_back(arr[right]);
//             right++;
//         }
//     }
//
//     // if elements on the left half are still left //
//
//     while (left <= mid) {
//         temp.push_back(arr[left]);
//         left++;
//     }
//
//     //  if elements on the right half are still left //
//     while (right <= high) {
//         temp.push_back(arr[right]);
//         right++;
//     }
//
//     // transfering all elements from temporary to arr //
//     for (int i = low; i <= high; i++) {
//         arr[i] = temp[i - low];
//     }
// }
//
// void mergeSort(vector<int> &arr, int low, int high) {
//     if (low >= high) return;
//     int mid = (low + high) / 2 ;
//     mergeSort(arr, low, mid);  // left half
//     mergeSort(arr, mid + 1, high); // right half
//     merge(arr, low, mid, high);  // merging sorted halves
// }
//
// int main() {
//
//     vector<int> arr = {9, 4, 7, 6, 3, 1, 5}  ;
//     int n = 7;
//
//     cout << "Before Sorting Array: " << endl;
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " "  ;
//     }
//     cout << endl;
//     mergeSort(arr, 0, n - 1);
//     cout << "After Sorting Array: " << endl;
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " "  ;
//     }
//     cout << endl;
//     return 0 ;
// }
//time complexity-o(nlogn)
//quick sort
//pick up pivot and place it in the corract position in the sorted Array

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
#include<bits/stdc++.h>
using namespace std;
void sol(vector<int> &anmol)
{
  for(int i=anmol.size()-1;i>=0;i--)
  {
    for(int j=0;j<=i-1;j++)
    {
      if(anmol[j]>anmol[j+1])
      {
        swap(anmol[j],anmol[j+1]);
      }
    }
  }
}
int main()
{
  vector<int> anmol={13,46,24,52,20,9};
  sol(anmol);
  for(int i=0;i<anmol.size();i++)
  {
    cout<<anmol[i]<<endl;
  }
}

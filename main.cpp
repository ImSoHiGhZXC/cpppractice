#include <iostream>

using namespace std;

int main()
{
   int row, col;
   cout << "row" << endl;
   cin >> row;
   cout << "col" << endl;
   cin >> col;
   
   int **arr = new int*[row];

   for (int i = 0; i < row; i++)
   {
      arr[i] = new int[col];
   }

   for (int i = 0; i < row; i++)
   {
      for (int j = 0; j < col; j++)
      {
         arr[i][j] = rand()%20;
      }
   }

   for (int i = 0; i < row; i++)
   {
      for (int j = 0; j < col; j++)
      {
         cout << i + 1 << " , " << j + 1 << " = " << arr[i][j] << "\t";
      }
      cout << endl;
   }

   for (int i = 0; i < row; i++)
   {
      delete [] arr[i];
   }
   
   delete [] arr;
} 
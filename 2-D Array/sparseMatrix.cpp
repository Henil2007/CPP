#include <iostream>
using namespace std;
int main()
{
    int a[50][50], row, col, i, j;
    int zero = 0;
    cout << "enter the rows   : ";
    cin >> row;
    cout << "enter the cols   : ";
    cin >> col;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> a[i][j];
        } // End of inner loop
    } // End of outter loop

    cout << "matrix : \n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
        } // End of inner loop
        cout << "\n";
    }// End of outter loop

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (a[i][j] == 0)
            {
                zero++;
            }
        } // End of inner loop
    } // End of outer loop
    
    cout << "No. of Zero = " << zero;

    if (zero > (row * col) / 2)
    {
        cout<<"\nMatrix is Sparse Matrix";
    }
    else
    {
        cout<<"\nMatrix is not Sparse Matrix";
    }
    return 0;
} // End of main()
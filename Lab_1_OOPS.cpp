#include <iostream>
using namespace std;

int matrix[10][10];
void enter_value(int rows, int columns)
{
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            cout <<"Enter element in matrix at position ["<<i<<"]["<<j<<"]: ";       
            cin >> matrix[i][j];
        }
        cout << endl;
    }    
}

void print_matrix(int rows, int columns)
{
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++)
        {
            cout << matrix[i][j] << "\t";       
        }
        cout<<endl;
    }  
}

int main()
{
    int m, n;
    cout << "Enter the number Of rows: ";
    cin >> m;
    cout << "Enter the number Of columns: ";
    cin >> n;
    enter_value(m,n);
    cout << "Printing the matrix with entered elements:" << endl;
    print_matrix(m,n);
    return 0;
}
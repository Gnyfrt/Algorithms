#include<iostream>


using namespace std;

void _swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}


void printMat(int mat[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void matTranspose(int mat[3][3]) {

    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; j < 3; j++)
        {
            _swap(mat[i][j], mat[j][i]);
        }
    }

}



int main()
{
    int mat[3][3] = { 3,4,5,6,7,8,9,5,3 };
    printMat(mat);
    cout << endl;
    matTranspose(mat);
    printMat(mat);

}
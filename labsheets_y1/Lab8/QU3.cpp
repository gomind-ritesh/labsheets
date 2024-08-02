#include <iostream> 
using namespace std;

void printMatrix(int arg[][5], int rnum)

{

    for (int n = 0; n < rnum; n++)

    {
    cout<<arg[n][0]<<" "<<arg[n][1]<<" "<<arg[n][2]<<" "<<arg[n][3]<<" "<<arg[n][4]<<endl;
    }
}

void inputMatrix(int M[][5], int n1)

{

    for (int n = 0; n < n1; n++)

    {
        for(int c=0; c<5 ;c++)
        {
            cout << "input "<< (n+1)<<","<< (c+1) <<" position value"<<endl;
            cin>> M[n][c];
        }

    }
    

}

void sumMatrix(int Ma1[][5],int Ma2[][5],int Sum[][5],int nrows)
{
    for(int n = 0; n < nrows; n++)

    {
        for(int c=0; c<5 ;c++)
        {
           (Sum[n][c])=(Ma1[n][c]+Ma2[n][c]);
        }

    }
}



int main()

{
    const int row= 3;
    int A[row][5];
    inputMatrix(A,row);

    int B[row][5];
    inputMatrix(B,row);

    int sumM[row][5];
    //printMatrix(A,row);
    //printMatrix(B,row);


    sumMatrix(A,B,sumM,row);
    printMatrix(sumM,row);

    return 0;
}




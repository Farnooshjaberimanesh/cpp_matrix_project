#include"matrix_library.h"
#include <iostream>
using namespace std;

int main()
{
    int A[max_size][max_size];
    int rowA, colA;
    cout << "Enter number of rows and columns : ";
    cin >> rowA >> colA;
    if (rowA > max_size || colA > max_size)
    {
        cout << "Error: Maximum size is " << max_size << endl;
        return 1;
    }
    cout << "Enter elements for matrix A:" << endl;
    inputmatrix1(A, rowA, colA);
    printmatrix1(A, rowA, colA);
    int B[max_size][max_size];
    int rowB, colB;
    cout << "Enter number of rows and columns : ";
    cin >> rowB >> colB;
    if (rowB > max_size || colB > max_size){
        cout << "Error: Maximum size is " << max_size << endl;
        return 1;
    }
    cout << "Enter elements for matrix B:" << endl;
    inputmatrix2(B, rowB, colB);
    printmatrix2(B, rowB, colB);
    int C[max_size][max_size];
    cout<<"sum matix is :"<<endl;
    summatrix(A, B,C,rowA,colA, rowB,colB);
    cout<<endl;
    cout<<"tafrigh matrix is :"<<endl;
    tafrighmatrix(A, B, C, rowA, colA, rowB ,colB);
    cout<<endl;
    int k;
    cout<<"zarb matrix is :"<<endl;
    zarbmatrix(A, B, C,rowA,colA,rowB,colB);
    cout<<endl;
    int scaler;
    cout << "Enter your scaler for matrix scalermatrix";
    cin >> scaler;
    cout<<" scaler matrix is :"<<endl;
    scalermatrix(A, C, rowA, colA, scaler);
    cout<<endl;
    cout<<" tranahade matrix is :"<<endl;
    tranahadematrix(A, C,colA , rowA);
    cout<<endl;
    cout<<" determinan matrix is :"<<endl;
    determinanmatrix(A , rowA , colA);
    cout<<endl;
    cout<<"makous matrix is:"<<endl;
    makousmatrix(A, rowA,colA);
    cout<<endl;
    int D[max_size], n;
    cout << "Enter number for row bordar D";
    cin >> n;
    if (n > max_size)
    {
        cout << "eror:maximum size is" << max_size << endl;
        return 1;
    }
    cout << "Enter elements for bordar D " << endl;
    inputbordar1(D, n);
    printbordar1(D, n);
    int G[max_size], m;
    cout << "Enter numbers for row bordar G";
    cin >> m;
    if (m > max_size)
    {
        cout << "Eror:muximum size is" << max_size << endl;
        return 1;
    }
    cout << "Enter elements for bordar B" << endl;
    inputbordar2(G, m);
    printbordar2(G, m);
    int F[max_size];
    cout<<" sum bordar is :"<<endl;
    sumbordar(D, G, F, n, m);
    cout<<endl;
    cout<<" tafrigh bordar is :"<<endl;
    tafrighbordar(D, G, F, n, m);
    cout<<endl;
    cout << "Enter your scaler number for scaler bordar";
    cin >> scaler;
    cout<<" scaler bordar is :"<<endl;
    scalerbordar(D, F, n, scaler);
    cout<<endl;
    cout<<"zarb dakheli bordar is :"<<endl;
    zarbdakhelibordar(D, G, F, n, m);
    cout<<endl;
    cout<<" zarb khareji bordar is :"<<endl;
    zarbkharejiboradr(D,G,F,n,m );
    cout<<endl;
    cout<<"size bordar D brabar ast ba:"<<endl;
    sizebordar(D,n);
    cout<<endl;
    cout<<"normalsazi bordar D brabar ast ba:"<<endl;
    normalsazibordar(D,n);
    cout<<endl;

    
    return 0;
} 
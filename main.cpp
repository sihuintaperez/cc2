#include <iostream>
using namespace std;
void multimatrices(int (*a)[20],int (*b)[20],int (*c)[20],int k,int m,int n){
    for(int i=0; i<k; ++i)
        for(int j=0; j<n; ++j)
            *(*(c+i)+j) = 0;


    for(int i=0; i<k; ++i)
        for(int j=0; j<n; ++j)
            for(int z=0; z<m; ++z)
                *(*(c+i)+j) += (*(*(a+i)+z))*(*(*(b+z)+j));
}
void mostrar(int (*a)[20],int (*b)[20],int (*c)[20],int k,int m,int n){
    cout<<"Matriz A: "<<endl;
    for(int i=0; i<k; ++i)
    {
        for(int j=0; j<m; ++j)
        {
            cout<<*(*(a+i)+j)<<" ";
        }
        cout<<endl;
    }
    cout<<"Matriz B: "<<endl;
    for(int i=0; i<m; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            cout<<*(*(b+i)+j)<<" ";
        }
        cout<<endl;
    }
    cout<<"Matriz C: "<<endl;
    for(int i=0; i<k; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            cout<<*(*(c+i)+j)<<" ";
        }
        cout<<endl;
    }

}
int main()
{
 int A[20][20], B[20][20] ,C[20][20];
    int k, m, n;


    cout<<"Lectura de matriz A."<<endl;
    cout<<"Filas de A: "; cin>>k;
    cout<<"Columnas de A: "; cin>>m;
    cout<<endl;
    for(int i=0; i<k; ++i)
        for(int j=0; j<m; ++j)
        {
            cout<<"Ingrese valor para A["<<i<<"]["<<j<<"]: ";
            cin>>*(*(A+i)+j);
        }

    cout<<"Lectura de matriz B."<<endl;
    cout<<"Filas de B: "<<m<<" (ya esta definido y es necesario)."<<endl;
    cout<<"Columnas de B: "; cin>>n;
    cout<<endl;
    for(int i=0; i<m; ++i)
        for(int j=0; j<n; ++j)
        {
            cout<<"Ingrese valor para B["<<i<<"]["<<j<<"]: ";
            cin>>*(*(B+i)+j);
        }

    multimatrices(A,B,C,k,m,n);
    mostrar(A,B,C,k,m,n);
    cout<<A,B,C;
}

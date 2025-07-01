#include <iostream>

using namespace std;

const int n=3;
//generate values for the two matrices
int Random (int)
{
int i =rand () %20;
return i;
}

// add matrices
void MatrixAdd( int myarray1[n][n], int myarray2[n][n], int myarray3[n][n] )
{
	for( int i = 0; i < n; i++ )
	{
		for( int j = 0; j < n; j++ )
		{
			myarray3[i][j] = myarray1[i][j] + myarray2[i][j];
		}
	}
}


int main ()
{
srand (time(NULL));
int myarray1 [n][n];
int myarray2 [n][n];
int m3 [n][n];
//show matrix 1
for (int i = 0; i < n ; i++)
	{
	for (int j = 0; j < n; j++)
		{
		myarray1[i][j] = Random (0);	
		cout << myarray1 [i][j] << "\t";
		}
		cout << endl;
	}
cout << endl;
// show matrix 2
for (int i = 0; i < n ; i++)
	{
	for (int j = 0; j < n; j++)
		{	
		myarray2[i][j] = Random (0);	
		cout << myarray2 [i][j] << "\t";
		}
		cout << endl;
	}
cout << endl;
// show sum
MatrixAdd (myarray1, myarray2, m3);
for (int i = 0; i < n; i++) {
       for (int j = 0; j < n; j++) {
           cout<<m3[i][j]<<" ";
	   }
           cout<<"\n"; 
    }

return 0;
}

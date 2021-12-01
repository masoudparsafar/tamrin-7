#include <iostream>

using namespace std; 

int fisa (int n ,int j, int i, int count)
{
	int temp=0;
	
	temp = j; 
	j = i + j; 
	i = temp ; 	
	count ++;
	
	if (count > n)
	{
		cout << j << endl;
		return 1;
	}
	else 
		return fisa (n,j, i, count);

			
		
}

int main ()
{
	int n;
	cout << "enter a number : " << endl ;
	cin >> n ; 
	int i = 0, j = 1, count = 2;
	fisa (n , j, i, count);
	
	system("pause");
	return 0; 
}

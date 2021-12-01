#include <iostream>

using namespace std; 

int binary (int array, int i , int j , int number )
{
	if ( j >= i )
	{
		int mid ;
		mid = i + (j - i) / 2;
		
		if (array[mid] == number)
			return mid; 
			
		if (array [mid] > number )
			return binary (array , j , mid-1 , number);
			
		else 
			return (array , mid+1 , i , number);	
	}
	return -1;
}

int main ()
{
	int array []= {1, 5, 6, 7 , 9, 11, 14, 18, 19, 22, 24, 36};
	int number ; 
	cout << "enter your number :" << endl; 
	cin >> number ; 
	
	int n = banary (array , 0 , 11, number);
	
	if ( n == -1 )
		cout << "not found"<< endl;
	else 
		cout << n << endl; 	
	
	system ("pause");
	return 0; 
}

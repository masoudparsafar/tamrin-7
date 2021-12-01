#include <iostream>

using namespace std; 

int fisa (int j, int i)
{
	int temp=0;
	
	cout << j << " ";
		
	temp = j; 
	j = i + j; 
	i = temp ; 	
	

	if (j > 1000)
		return 1; 
	else 
		return fisa (j, i);	
		
}

int main ()
{
	int j = 1; 
	int i = 0;
	fisa (j, i);
	
	system("pause");
	return 0; 
}

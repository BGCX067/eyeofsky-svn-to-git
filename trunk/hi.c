#include <stdio.h>
#include <assert.h>


#define UI_ASSERT(x) 

int main() 
{
	int i = 3;
	int arr[3];
	
	UI_ASSERT(i < 3);
	arr[i] = 3;
	
	return 1;
}
/**/
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n];
	int z = n;
	for( int i = 0 ; i < n ; i++){
		cin >> arr[i];
	} 
	for(int i = 0 ; i != n ; i++ ){
		arr[i]=arr[z];
		z--;
		cout << arr[i] << " ";
	}
	return 0;
}
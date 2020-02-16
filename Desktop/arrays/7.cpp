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
	arr[0]=arr[n];
    cout << arr[0];
	for(int i = 0 ; i < n-1 ; i++ ){
		arr[i+1]=arr[i];
		cout << arr[i+1];
	}
	return 0;
}
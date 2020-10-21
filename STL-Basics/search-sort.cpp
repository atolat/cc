#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;
int main()
{
	int arr[] = { 1, 10, 9, 9, 100, 11, 33 };
    int n = sizeof(arr)/sizeof(int);

    // Search in unsorted container
    int key;
    cout<<"Enter key: "<<endl;
    cin>>key;
    auto it = find(arr, arr+n, key);
    int index = it - arr;
    if (index == n) {
        cout<<"Not Present"<<endl;
    } else {
    cout<<"Present at:: "<<index<<endl;
    }

    // Search in sorted container
    int arr2[] = { 1, 2, 3, 4, 4, 4, 4, 5, 5, 9, 11, 13 };
    int n2 = sizeof(arr2)/sizeof(int);
    int key2;
    cout<<"Enter key: "<<endl;
    cin>>key2;
    bool present = binary_search(arr2, arr2+n2, key2);
    if(present){
        cout<<"Present"<<endl;
    }

    // Find lower/upper bounds and frequency
    

	return 0;
}
#include <iostream>
using namespace std;
class BS
{
public:
    /*
     * Binary Search function
     */
    void BinarySearch(int array[], int keynum, int num)
    {
        int low = 1;
        int high = num;
        int mid;
    do
    {
        mid = (low + high) / 2;
        if (keynum < array[mid])
        {
            high = mid - 1;
        }
   	else if (keynum > array[mid])
        {
            low = mid + 1;
        }
	}
	while (keynum != array[mid] && low <= high);
        if (keynum == array[mid])
        {
            cout<<"Element is present in the array at position \n"<<mid+1;
        }
        else
        {
            cout<<"Element is not present in the array \n";
        }
    }
};
int main()
{
    int array[100];
    int i, j, num, temp, keynum;
    int low, mid, high;
    cout<<"Enter the value of number of elements in array \n";
    cin>>num;
    cout<<"Enter the elements one by one in ascending order\n";
    for (i = 0; i < num; i++)
    {
        cin>>array[i];
    }

    cout<<"Enter the element to be searched \n";
    cin>>keynum;
    // Binary searching begins
    BS b1;
    b1.BinarySearch(array, keynum, num);
    return 0;
}

#include <iostream>
using namespace std;


void fillArrayWithPowersOfTwo(int arr[], int size) 
{
    for (int i = 0; i < size; ++i) 
    {
        arr[i] = 1 << i;
    }
}


int binarySearch(const int arr[], int size, int search_num) 
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] < search_num)
        {
            low = mid + 1;
        }
        else if (arr[mid] > search_num) 
        {
            high = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1; 
}

int main()
{
    const int array_size = 25;
    int array[array_size];

    
    fillArrayWithPowersOfTwo(array, array_size);

    int search_num;
    cout << "Введіть елемент, який необхідно знайти в масиві: ";
    cin >> search_num;

   
    int result = binarySearch(array, array_size, search_num);

    
    if (result != -1) 
    {
        cout << "Елемент " << search_num << " має індекс " << result << endl;
    }
    else {
        cout << "Елемента немає в масиві" << endl;
    }

    return 0;
}

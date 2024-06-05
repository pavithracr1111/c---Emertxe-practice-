#include <iostream>
using namespace std;

void read(int *arr, int size);
void print(int *arr, int size);
int main()
{
    int size;
    cin >> size;

    int arr[size];
    read(arr, size);
    print(arr, size);
}
void read(int *arr, int size)
{
    cout << "Enter the array of elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
void print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)

            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
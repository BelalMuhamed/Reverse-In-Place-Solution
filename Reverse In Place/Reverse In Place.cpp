#include <iostream>
using namespace std;
void Reverse(int arr[], int size)
{
    for (int i = 0; i < size / 2;i++)
    {
        swap(arr[i], arr[size - i - 1]);
    }
}
bool Test()
{
    const int size= 10;
    bool flag = true;
    int arr[size];
    int cpy[size];
    for (int i = 0; i < 1000;i++)
    {
        for (int k = 0; k < size;k++)
        {
            cpy[k]=arr[k] = rand() % 100;
        }
      Reverse(arr, size);
      reverse(cpy, cpy + size);
      for (int n = 0;n < size; n++)
      {
          flag &= (arr[n] == cpy[n]);
      }
    }
    return flag;
}
int main()
{
    int arr[5] = { 1,2,3,4,5 };
    Reverse(arr, 5);
    for (int i = 0;i < 5; i++)
    {
        cout << arr[i];
    }
    cout << '\n';
    cout << "*****************************"<<'\n';
    bool flag = Test();
    cout << flag;
}


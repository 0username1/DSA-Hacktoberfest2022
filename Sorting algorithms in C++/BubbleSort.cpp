#include <bits/stdc++.h>  

using namespace std;

void bubbleSort(int v[],int size)
{
    

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (v[j] > v[j + 1]) //swapping
            {
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
         
    }

    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    int size,v[100];
    cin >> size;

    

    for (int i=0; i< size; i++)
    {
        cin >> v[i];
    }

    bubbleSort(v,size);

    return 0;
}

#include <iostream>
#include <cstdlib>
using namespace std;


int getRandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

void swapTwoNumbers(int &num1, int &num2)
{
    int temp = 0;

    temp = num1;
    num1 = num2;
    num2 = temp;
}

void readArray(int arr[100], int& length)
{
    cout << "How many elements of the array?\n";
    cin >> length;

    for (int i = 0; i < length; i++)
    {
        arr[i] = i+1;
    }
}

void printArray(int arr[100], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout<<arr[i] <<" ";
    }
    cout << endl;
}

void shuffleArrayOfElements(int arr[100], int length)
{
        
    for (int i = 0; i < length; i++)
    {
        swapTwoNumbers(arr[getRandomNumber(0, (length - 1))], arr[getRandomNumber(0, (length - 1))]);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100]; int shuffledArr[100]; int length;
    
    readArray(arr, length);
    cout << "Array Before shuffling: "; printArray(arr, length);
    
    shuffleArrayOfElements(arr, length);
    cout << "Array After shuffling:  "; printArray(arr, length);


    return main();
}

/**/
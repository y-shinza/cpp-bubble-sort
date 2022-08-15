#include <iostream>
#include <time.h>

void initArray(int* array);
void bubbleSort(int* array);

const int ARRAY_SIZE = 10;
const int MAX_NUMBER = 99;

int main()
{
    int array[ARRAY_SIZE];

    initArray(array);
    bubbleSort(array);
    
    return 0;
}

void printArray(int array[])
{
    for (int i = 0; i < ARRAY_SIZE; i++)
        std::cout << array[i] << ", ";

    std::cout << std::endl;
}

void initArray(int* array)
{
    srand((unsigned int)time(NULL));

    for (int i = 0; i < ARRAY_SIZE; i++)
        array[i] = rand() % MAX_NUMBER + 1;

    std::cout << "初期値" << std::endl;
    printArray(array);
}

void bubbleSort(int* array)
{
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        for(int j = ARRAY_SIZE - 1; j > i; j--)
        {
            if(array[j] < array[j - 1])
            {
                int tmp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = tmp;
            }
        }

        std::cout << i + 1 << "回目のソート" << std::endl;
        printArray(array);
    }
}
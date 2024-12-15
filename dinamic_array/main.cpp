#include <iostream>

void print_dynamic_array(int* arr, int logical_size, int actual_size)
{
    std::cout << "ƒинамический массив: ";
    for (int i = 0; i < actual_size; ++i)
    {
        if (i < logical_size)
        {
            std::cout << arr[i] << " ";
        }
        else {
            std::cout << "_ ";
        }
    }
    std::cout << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int actual_size;
    std::cout << "¬ведите фактический размер массива: ";
    std::cin >> actual_size;

    int* arr = new int[actual_size];

    int logical_size;
    std::cout << "¬ведите логический размер массива: ";
    std::cin >> logical_size;


    if (logical_size > actual_size)
    {
        std::cout << "ќшибка! Ћогический размер не может превышать фактический размер." << std::endl;
        delete[] arr;
        return 1;
    }

    for (int i = 0; i < logical_size; ++i)
    {
        std::cout << "¬ведите arr[" << i << "]: ";
        std::cin >> arr[i];
    }
    print_dynamic_array(arr, logical_size, actual_size);
    delete[] arr;

    return 0;
}

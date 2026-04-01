#include <iostream>
using namespace std;

class vector 
{
private:
    int *arr = nullptr;
    int size = 0;

public:

    vector(int size) : size(size)
    {
        if (size < 0)
            size = 1;
        arr = new int[size] {};
    }
    ~vector()
    {
        delete[] arr;
        arr = nullptr;
    }
    int get_size(int indx)
    {
        return size;
    }

    int get(int indx)
    {
        return arr[indx];
    }   

    void set(int indx, int val)
    {
        arr[indx] = val;
    }

    void print()
    {
        for ( int i=0; i<size; i++)
            cout<< arr[i]<<" ";
    }
    
    int find(int value)
    {
        for (int i=0; i<size; i++)
            if (arr[i]==value)
                return i;
        return -1;
    }
    
}

int main()
{
    vector v(10);

    for (int i=0; i<10;  i++)
        v.set(i, i);
    v.print();
    cout<<v.find(5)<<" "<<v.find(55); // 5 -1

}

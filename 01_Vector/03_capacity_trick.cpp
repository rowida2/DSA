#include<iostream>
using namespace std;

class Vector
{
private:
    int *arr = nullptr;
    int size = 0;
    int capacity {};
    
    void expand_capacity()
    {
        capacity *=2;
        arr2 = new int[capacity]{};
        for (int i=0; i<size; i++)
            arr2[i] = arr[i];
        swap(arr, arr2);
        delete[] arr2;
    }
public:
    Vector(size): size(size)
    {
        if(size<0)
          size = 1;
        capacity = size + 10;
        arr = new int[capacity]{};
    }
    
    ~Vector()
    {
        delete [] arr;
        arr = nullptr;
    }
    
    int get_size()
    {
        return size;
    }
    
    int get(int idx)
    {
        while (idx >= 0 && idx < size)
        return arr[idx];
    }
    
    void set(int idx, int value)
    {
        while (idx >= 0 && idx < size)
        arr[idx]==value;
    }
    
    void print()
    {
        for (int i=0; i<size; i++)
            cout << arr[i] << " ";
		cout << "\n";
        
    }
    
    int find(int value)
    {
        for (int i=0; i<size; i++)
            if(arr[i]==value)
              return i;
        return -1;
    }
    
    int find_front()
    {
        return arr[0];
    }
    
    int find_back()
    {
        return arr[size-1]
    }
    
    void push_back(int value)
    {
        if(size== capacity)
          expand_capacity()
        arr[size++] = value;
    }

};

int main()
{
    int n = 5;
    Vector v(n)
    for (int i = 0; i < n; ++i)
		v.set(i, i);

	for (int i = 0; i < 15; ++i)
		v.push_back(i + 10);

	v.print();

	return 0;
}

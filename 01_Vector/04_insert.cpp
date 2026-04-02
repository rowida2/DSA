#include<iostream>
using namespace std;

class Vector {
private:
    int *arr = nullptr;
    int size = 0;
    int capacity = 0;

    void expand_capacity() {
        capacity *= 2;
        int *arr2 = new int[capacity]{};

        for(int i = 0; i < size; i++)
            arr2[i] = arr[i];

        swap(arr, arr2);
        delete[] arr2;
    }

public:
    Vector(int size) : size(size) {
        if(size <= 0)
            size = 1;

        capacity = size + 10;
        arr = new int[capacity]{};
    }

    ~Vector() {
        delete[] arr;
        arr = nullptr;
    }

    int get_size() {
        return size;
    }

    int get(int idx) {
        return arr[idx];
    }

    void set(int idx, int value) {
        arr[idx] = value;
    }

    int find(int value) {
        for(int i = 0; i < size; i++)
            if(arr[i] == value)
                return i;
        return -1;
    }

    int get_front() {
        return arr[0];
    }

    int get_back() {
        return arr[size-1];
    }

    void push_back(int value) {
        if(size == capacity)
            expand_capacity();
        arr[size++] = value;
    }

    void insert(int idx, int value) {
        if(size == capacity)
            expand_capacity();

        for(int p = size - 1; p >= idx; --p)
            arr[p+1] = arr[p];

        arr[idx] = value;
        ++size;
    }

    void print() {
        for(int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }
};

int main() {
    int n = 5;
    Vector v(n);

    for (int i = 0; i < n; ++i)
        v.set(i, i);

    v.insert(0, 25);
    v.print();

    v.insert(5, 13);
    v.print();

    return 0;
}

class Vector 
{
private:
    int *arr = nullptr;
    int size = 0 
public:
   Vector(size) : size(size)
   {
       if(size < 0)
          size = 1 
       arr = new int[size] {};
       
   }
   
   ~Vector
   {
       delete [] arr;
       arr = nullptr;
   }
   
   int get_size()
   {
       return size;
   }
   
   int get(int indx)
   {
       while(0 <= indx && indx < size);
       return arr[indx];
   }
   
   void set(int indx, int value)
   {
       while (0 <= indx && indx < size);
       arr[indx] = value
   }
   
   void print()
   {
       for(int i=0, i < size, i++)
           cout<< arr[i]<<" ";
       
   }
   
   int find(int value)
   {
       for(int i=0, i<size, i++)
          if(arr[i]==value)
             return i;
        return -1;
   }
   
   int get_front()
   {
       return arr[0];
   }
   
   int get_back()
   {
       return arr[size-1]
   }
   
   void push_back(int value)
   {
       // 1- create new array with bigger size
       int *arr2 = new int[size+1];
       
       // 2- copy old data
       for(int i=0, i <size , i++)
          arr2[i]=arr[i];
        
       // 3-add new element
       arr2[size++]==value;
       
       // 4 change pointers
       swap (arr, arr2);
       
       // 5 delete useless data
       delete [] arr2;
   }

}

int main() {

	int n = 4;
	Vector v(n);
	for (int i = 0; i < n; ++i)
		v.set(i, i);

	v.push_back(15);
	v.push_back(17);
	v.push_back(19);
	v.print();
	
	return 0;
}

#include "DArray.h"

template <typename T>
DArray<T>::DArray( )
{
    capacity = 50;
	a = new T[capacity];	
	used = 0;
}

template <typename T>
DArray<T>::DArray(int newCapacity) 
{
	capacity = newCapacity;
    a = new T[capacity];
	used = 0;	 
}

template <typename T>
void DArray<T>::addElement(const T& element) 
{
    if (used >= capacity)
    {
        cerr << "Attempt to exceed capacity in DArray.\n";
        exit(0); 
    }
    a[used] = element;
    ++used;
}

template <typename T>
DArray<T>::~DArray( )
{
    delete [] a; //delete the array
	a = NULL;	 //null the pointer
}

/********************************************
*			FUNCTIONS ADDED					*
********************************************/

template <typename T>
const T& DArray<T>::getElementAt(int idx)
{
	return a[idx];
}

template <typename T>
bool DArray<T>::full( ) const 
{ 
	return (capacity == used); 
}

template <typename T>
int DArray<T>::getCapacity( ) const 
{ 
	return capacity; 
}

template <typename T>
int DArray<T>::getNumberUsed( ) const 
{ 
	return used; 
}

template <typename T>
void DArray<T>::emptyArray( )
{ 
	used = 0; 
}


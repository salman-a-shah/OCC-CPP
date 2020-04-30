#ifndef DARRAY_H
#define DARRAY_H

#include <iostream>
using namespace std;

template <typename T>
class DArray
{
public:
    DArray( );
    //Default constructor -	initializes array 
	//						with a capacity of 50.

    DArray(int);
	//Constructor - initializes array with a given capacity.
	//@param int - capacity of the array.

    void addElement(const T&);
    //addElement - adds an element to the array.
	//@param const T& - the element to add to the array.

	~DArray( ); 
	//Destructor

	/********************************************
	*			FUNCTIONS ADDED					*
	********************************************/

	const T& getElementAt(int);
	//getElementAt - Returns the element at the specified index.
	//@param int - The index of the element to return.
	//@return const T& - The element to return
	
	bool full() const;
	//full const - checks if the array is full
	//@return bool - returns true if the array is full, false otherwise.

    int getCapacity( ) const; 
	//getCapacity const - gets the capacity of the array.
	//@return int - returns the capacity of the array.

    int getNumberUsed( ) const; 
	//getNumberUsed const - checks the number of elements in the array.
	//@return int - returns the size of the array.

    void emptyArray( );
    //emptyArray - empties the array.

private:
    T *a;			//will point to an int (it will be an array)
    int capacity;	//capacity of the array
    int used;		//total number of elements in the array

};

#endif
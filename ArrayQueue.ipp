//You will need this so you can make a string to throw in
// remove
#include <string>
 
//Instance Variables
int count;
int front;
int numItems;
int backingArraySize;

//Syntax note: This uses the pre-processor to create a constant
// You could also use "const static" to make a constant, as in Java.
// Notice, however, that START_SIZE is NOT a variable! Instead, any
// place that the pre-processor sees "START_SIZE" it will replace it with
// 10 ... so this is like a global "find and replace".
#define START_SIZE 10

//Syntax note: C++ is not very good at figuring out which methods belong
// to which classes. That is why we have to use the scope operator to
// tell the compiler that this ArrayQueue() method belongs to the
// ArrayQueue<T> class.
template <class T>
ArrayQueue<T>::ArrayQueue(){
count = 0;
front = 0;
numItems = 0;
backingArray = new T [START_SIZE];
backingArraySize = START_SIZE;

}

template <class T>
ArrayQueue<T>::~ArrayQueue() {

}

template <class T>
void ArrayQueue<T>::add(T toAdd){
if(getNumItems() == backingArraySize){
grow();
}
else if(count == backingArraySize){
count = 0;
backingArray[count] = toAdd;
count++;
numItems++;
backingArraySize++;
}

}

template <class T>
T ArrayQueue<T>::remove(){


  throw (std::string)"This is to cast something into a string";
  return backingArray[0];
}

template <class T>
unsigned long ArrayQueue<T>::getNumItems(){
 return numItems;
}

template <class T>
void ArrayQueue<T>::grow(){
//Twice as big as the original
}

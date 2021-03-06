03_Queue_Lab
============

Implement an array-based queue in C++

Note: When you create your project, do NOT add ArrayQueue.ipp to the list of source files, add it to the list of include files. You will see that ArrayQueue.ipp is #included at the bottom of ArrayQueue.h. See ArrayQueue.h for more explanation.

Requirements
------------

1. remove takes O(1) time
2. add takes O(1) time, unless it calls grow (in that case O(n) is okay)
3. grow is only called if the number of items == backingArraySize, and the size of the array is doubled during grow
4. grow takes O(n) time
5. Do not leak memory (make sure grow and the destructor do the right thing)
6. getNumItems is O(1) time
7. add and remove throw excpetions as appropriate
8. You must use the array in a circular fashion. If you don't do this you probably won't be able to get #1, #2 and #3 to all be true.

Reading
=======
"Open Data Structures," Chapter 2, up through section 2.4 (ArrayDequeue). http://opendatastructures.org/ods-cpp/2_Array_Based_Lists.html

Information about the Von Neumann computing model may be helpful. This optional reading is section 2.2 of "Algorithms and Data Structures: A Basic Toolbox" by Melhorn and Sanders. A free copy may be found here: http://www.mpi-inf.mpg.de/~mehlhorn/ftp/Toolbox/Introduction.pdf

Questions
=========

#### 1. Which of the above requirements work, and which do not? For each requirement, write a brief response.

1. Though I'm a little confused on how to measure this, based on the readings I'm sure it's running smoothly.
2. See above...basically the exact same situation.
3. It took me a while to figure this out because it's different from in the book but I eventually got it.  Wish I had looked here first.
4. Though I'm not sure what the n is referring to, it has an appropriate cost according to the requirements and the information I've found.
5. Easy peasy lemon squeezy.  Though that delete[] question that was raised in class still has me pondering..
6. Does 1 thing and it does it well.
7. There's really only one exception that I ever throw, but it works!...?
8. First thing I did, book really helped with that.

#### 2. If we did a Stack instead of a Queue, which of the private methods and variables would we need to keep, and which could we get rid of? Explain your answer.

Since in a stack, we don't need to utilize any sort of "circular" array, and since the first thing out was the last thing put in; we don't need the front variable, or any sort of equivalent.
Instead we can track the same thing just based off the sides of the array.

#### 3. What is one question that confused you about this excercise, or one piece of advice you would share with students next semester?

Honestly everything's pretty straightforward, so just read the book and carry on carry on.  (I am confused at what the purpose of "unsigned" is...)

#### 4. In Java you might write "class ArrayQueue extends Queue" ... how do you write the same thing in C++?

class ArrayQueue : Public Queue <T>

#### 5. What is the purpose of "templates" in C++?

Templates allow you to create a structure or abstraction of some sort without actually specifying what it contains.  That's for whoever implements it to decide later.

#### 6. What would the syntax be for dynamically allocating an array of 10 ints, in C++?

int* array = new int[10];  Boom.

#### 7. What is the purpose of a class destructor in C++? Why don't you need them in Java?

C++ doesn't delete things when it's done with them, unlike Java which does.  Class destructors, in tandem with delete and delete[], help us to accomplish this.

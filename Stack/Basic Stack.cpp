#include <bits/stdc++.h>

const int MAX_SIZE = 100;
template <class T> // Making a template to make it general for all data types;
class stack
{

private:
    int top;  // The First element of the stack
    int size;
    T items[MAX_SIZE];  // The container that will store the data

public:
    stack()
    {
        top = -1;         // default constructor that set the top index by zero "pre First element"
    }

    //----------------------------------------------------------------------------------------------------------------------------------------------//
    
    void pop()                          // Function pop that will delete the last element and make the new top to the previous element
    {
        if(top == -1)
        {
            throw("Stack Is Empty");
        }

        else
        {
            top--;
        }
    }

    //----------------------------------------------------------------------------------------------------------------------------------------------//
    
    void push(T element)                // Function push that will push an element of the same data type of the stack and make it the top
    {
        if(top == MAX_SIZE-1)
        {
            throw("Stack Is Full");
        }

        else
        {
            items[++top] = element;
        }
    }

    //----------------------------------------------------------------------------------------------------------------------------------------------//
    
    T getTop()                          // Function getTop that will return the last element of the stack
    {
        if(top == -1)
        {
            throw("Stack Is Empty");
        }

        else
        {
            return items[top];
        }
    }
    
    //----------------------------------------------------------------------------------------------------------------------------------------------//
    
    bool isEmpty()                      // Function isEmpty that will check if the stack is empty of notF
    {
        if (top != -1){return false;}
        else {return true;}
    }

    //----------------------------------------------------------------------------------------------------------------------------------------------//
    
    int getSize()                       // Function getSize that will return the size of the stack
    {
        return top+1;
    }

    //----------------------------------------------------------------------------------------------------------------------------------------------//

};


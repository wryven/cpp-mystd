#pragma once

namespace mystd
{
    /* DECLARATION */
    template<typename T>
    class Array
    {

    public:

    /* CONSTRUCTORS */
        
        // Common Constructors

        Array(int length);
        Array(T* data, int length);

        // Copy & Move Constructors

        Array(const Array &other);
        Array(const Array &&other);

    /* DESTRUCTOR */

        ~Array();

    /* PROPERTIES */

        T* data();
        int length();

    /* PUBLIC FUNCTIONS */

        // Access & Modifier Methods

        void set(int index, T value);
        T get(int index) const;

        // TO-DO: Proper name

        void slice();

        // Sorting Methods

        void sort();
        // TO-DO: What other types of sort are there?

        // Count Methods

        int count(T item) const;
        int count(T* items) const;

        // Index Methods

        int indexOf(T item) const;
        int firstIndexOf(T item) const;
        int lastIndexOf(T item) const;
        int* indexesOf(T item) const;

        // Boolean Methods
        
        bool contains(T item) const;
        bool contains(T* items) const;
        bool isRepeated(T item) const;
        bool isRepeated(T* items) const;
        bool isValid(int index) const;
        
    private:
    /* MEMBERS */

        T* m_data { nullptr };
        int m_length { 0 };
    
    /* PRIVATE FUNCTIONS */

        void validateIndex(int index) const;
    };

    /* IMPLEMENTATION */

/** PUBLIC **/

    /*** CONSTRUCTORS ***/ 

// Common Constructors

template<typename T> 
Array<T>::Array(int length)
{
    m_data = new T[length]();
    m_length = length;
}

template<typename T> 
Array<T>::Array(T* data, int length)
{
    m_data = new T[length];
    for (int i = 0; i < length; i++)
    {
        m_data[i] = data[i];   
    }

    m_length = length;
}

// Copy & Move Constructors

template<typename T> 
Array<T>::Array(const Array &other)
{

}

template<typename T> 
Array<T>::Array(const Array &&other)
{

}

/*** DESTRUCTOR ***/

template<typename T> 
Array<T>::~Array()
{
    delete[] m_data;
    m_data = nullptr;
    m_length = 0;
}

/*** PROPERTIES ***/

template<typename T>
T* Array<T>::data() 
{
    return m_data;
}

template<typename T>
int Array<T>::length()
{
    return m_length;
}

/*** PUBLIC FUNCTIONS ***/

    // Access & Modifier Methods

template<typename T>
void Array<T>::set(int index, T value)
{
    validateIndex(index);
    m_data[index] = value;
}

template<typename T>
T Array<T>::get(int index) const
{
    validateIndex(index);
    return m_data[index];
}

    // TO-DO: Proper name

void slice();

    // Sorting Methods

void sort();
// TO-DO: What other types of sort are there?

    // Count Methods

template<typename T>
int Array<T>::count(T item) const
{
    int count = 0;

    for (int i = 0; i < m_length; i++)
    {
        if (m_data[i] == item)
        {
            count++;
        }
    }

    return count;
}

template<typename T>
int Array<T>::count(T* items) const
{
    int count = 0;

    for (int i = 0; i < m_length; i++)
    {
        // TO-DO: May have to switch to Array<T> for items, or give the size.
    }

    return count;
}

    // Index Methods

template<typename T>
int Array<T>::indexOf(T item) const
{
    if (m_length == 0)
    {
        return -1; // TO-DO: Temporal, switch for exception or idk.
    }

    for (int left_i = 0, right_i = m_length - 1; left_i != right_i; left_i++, right_i--)
    {

    }
    
    return -1;
}

template<typename T>
int Array<T>::firstIndexOf(T item) const
{
    for (int i = 0; i < m_length; i++)
    {
        if (m_data[i] == item)
        {
            return i;
        }
    }

    return -1;
}

template<typename T>
int Array<T>::lastIndexOf(T item) const
{
    for (int i = m_length - 1; i >= 0; i--)
    {
        if (m_data[i] == item)
        {
            return i;
        }
    }

    return -1;
}

template<typename T>
int* Array<T>::indexesOf(T item) const
{
    int indexes[count(item)];
}

    // Boolean Methods

bool contains(T item) const;
bool contains(T* items) const;
bool isRepeated(T item) const;
bool isRepeated(T* items) const;
bool isValid(int index) const;

    /** PRIVATE **/

/*** PRIVATE FUNCTIONS ***/

}

// TO-DO: I hate C++
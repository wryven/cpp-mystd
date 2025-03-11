#pragma once

namespace mystd
{
    /* DECLARATION */
    template<typename T>
    class Array
    {
    public:

    /* CONSTRUCTORS */

        // Common-use Constructors

        Array(int length);
        Array(int* data, int length);

        // Copy and Move Constructors

        Array(Array<T> &other);
        Array(Array<T> &&other);

    /* DESTRUCTOR */

        ~Array();

    /* PROPERTIES */

        T* Data();
        int Length();

    /* METHODS */

        // Access & Modifier Methods

        void Set(int index, T value);
        int Get(int index) const;

        // Sort Methods

        void Sort();
        void ReverseSort();

        // Split Methods

        void Split(T value);
        void SplitAt(int index);

        // Count Methods

        int Count(T value) const;
        int Count(Array<T> values) const;
        Array<int> CountsOf(Array<T> values) const;

        // Index Methods

        int IndexOf(T value) const;
        int FirstIndexOf(T value) const;
        int LastIndexOf(T value) const;

        Array<int> IndexesOf(T value) const;
        Array<int> IndexesOf(Array<T> values) const;

        // Boolean Methods

        bool Contains(T value) const;
        bool Contains(Array<T> values) const;
        Array<bool> Contains(Array<T> values) const;

        bool IsRepeated(T value) const;
        bool AreRepeated(Array<T> values) const;

        bool IsValidIndex(int index) const;

        // Operator Overloads

        T operator [] (int index) const;
        T& operator [] (int index);

    private:

    /* MEMBERS */
    
        T* data { nullptr };
        int length { 0 };

    /* HELPERS */

        void ValidateIndex(int index) const;

    };

    /* IMPLEMENTATION */

/** PUBLIC **/

    /*** CONSTRUCTORS ***/ 

    /*** DESTRUCTOR ***/

    /*** PROPERTIES ***/

    /*** PUBLIC FUNCTIONS ***/

/** PRIVATE **/

    /*** PRIVATE FUNCTIONS ***/

}

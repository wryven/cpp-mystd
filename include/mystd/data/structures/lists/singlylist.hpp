#pragma once

namespace mystd
{
    /* DECLARATION */
    template<typename T>
    class SinglyList
    {
    public:

    /* CONSTRUCTORS */

        // Common-use Constructors

        SinglyList();
        SinglyList(T* data, int size);

        // Copy and Move Constructors

        SinglyList(SinglyList<T> &other);
        SinglyList(SinglyList<T> &&other);

    /* DESTRUCTOR */

        ~SinglyList();

    /* PROPERTIES */

        T Head() const;
        T Tail() const;

        int Size() const;

    /* METHODS */
    
        // Access and Modifier Methods

        void Set(int index, char characters);
        T Get(int index) const;

        void Insert(T value);
        void Remove(T value);

        void InsertAt(int index, T value);
        void RemoveAt(int index, T value);

        // Sort Functions

        void Sort();
        void ReverseSort();

        // Split Methods

        void Split(T value);
        void SplitAt(int index);

        // Count Methods

        int Count(T value) const;
        int Count(SinglyList<T> values) const;
        SinglyList<int> CountsOf(SinglyList<T> values) const;

        // Index Methods

        int IndexOf(T value) const;
        int FirstIndexOf(T value) const;
        int LastIndexOf(T value) const;

        SinglyList<int> IndexesOf(T value) const;
        SinglyList<int> IndexesOf(SinglyList<T> values) const;

        // Boolean Methods

        bool Contains(T value) const;
        bool Contains(SinglyList<T> values) const;
        SinglyList<bool> Contains(SinglyList<T> values) const;

        bool IsRepeated(T value) const;
        bool AreRepeated(SinglyList<T> values) const;

        bool IsValidIndex(int index) const;

        // Operator Overloads

        T operator [] (int index) const;
        T& operator [] (int index); 

    private:

    /* MEMBERS */
    
        // Structs

        struct Node
        {
            T value;
            Node* next;
        }

        // Variables

        Node* head { nullptr };
        Node* tail { nullptr };

        int size { 0 };

    /* HELPERS */

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

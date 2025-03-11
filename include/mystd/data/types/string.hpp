#pragma once

// TO-DO: Either include array or use c arrays.

namespace mystd
{
    struct string
    {
    public:

    /* CONSTRUCTORS */

        // Common-use Constructors

        string(int length);
        string(const char cstring[]);
        string(char* data, int length);

        // Copy and Move Constructors

        string(string &other);
        string(string &&other);

    /* DESTRUCTOR */

        ~string();

    /* PROPERTIES */

        char* Data() const;
        int Length() const;

    /* METHODS */

        // Access and Modifier Methods

        void Set(int index, char character);
        char Get(int index) const;

        // Sort Methods

        void Sort();
        void ReverseSort();

        // Split Methods

        void Split(char character);
        void SplitAt(int index);

        // Count Methods

        int Count(char character) const;
        int Count(Array<char> characters) const;
        Array<int> CountsOf(Array<char> characters) const;

        // Index Methods

        int IndexOf(char character) const;
        int FirstIndexOf(char character) const;
        int LastIndexOf(char character) const;

        Array<int> IndexesOf(char character) const;
        Array<int> IndexesOf(Array<char> characters) const;

        // Boolean Methods

        bool Contains(char character) const;
        bool Contains(Array<char> characters) const;
        Array<bool> Contains(Array<char> characters) const;

        bool IsRepeated(char character) const;
        bool AreRepeated(Array<char> characters) const;

        bool IsValidIndex(int index) const;

        // Operator Overloads

        char operator [] (int index) const;
        char& operator [] (int index);

    private:

    /* MEMBERS */
    
        char* data;
        int length;

    /* HELPERS */

    };

}

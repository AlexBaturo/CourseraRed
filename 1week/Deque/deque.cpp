//#include "test_runner.h"
#include <vector>
#include <stdexcept>
#include<iostream>

using namespace std;

template <typename T>
class Deque
{

public:

    Deque ()
    {

    }

    const bool Empty () const
    {
        return left.empty() && right.empty();
    }

    const size_t Size () const
    {
        return left.size()+right.size();
    }

    T& operator [] (const size_t& index)
    {
         return At(index);
    }

    const T& operator [] (const size_t& index) const
    {
         return At(index);
    }

    T& At (const size_t& index)
    {
        if(index < left.size()) return left[left.size() - index -1];
        else if (index < Size()) return right[index - left.size()];
        else throw out_of_range("HELP");
    }

    const T& At (const size_t& index) const
    {
        if(index < left.size()) return left[left.size() - index -1];
        else if (index < Size()) return right[index - left.size()];
        else throw out_of_range("HELP");
    }

    T& Front ()
    {
        return At(0);
    }

    const T& Front () const
    {
        return At(0);
    }

    T& Back ()
    {
        return At(Size()- 1);
    }

    const T& Back () const
    {
        return At(Size() - 1);
    }

    void PushFront (const T& elem)
    {
        left.push_back(elem);
    }

    void PushBack (const T& elem)
    {
        right.push_back(elem);
    }

private:
    vector<T> left, right;


};

/*void TestTable() {
    Deque<int> a;
    ASSERT_EQUAL(a.Empty(), true);
    ASSERT_EQUAL(a.Size(), 0);
    //ASSERT_EQUAL(a.Front(), 0);
    a.PushBack(1);
    a.PushFront(2);
    a.PushFront(3);
    a.PushFront(4);
    a.PushBack(5);
    ASSERT_EQUAL(a.Size(), 5);
    ASSERT_EQUAL(a.Empty(), false);
    for (unsigned i = 0; i < a.Size(); i++) cout << a[i] << endl;
    ASSERT_EQUAL(a[0], 4);
    ASSERT_EQUAL(a.Back(), 5);
    ASSERT_EQUAL(a.Front(), 4);
    a.Front() = 6;
    ASSERT_EQUAL(a.Front(), 6);
    ASSERT_EQUAL(a[3], 1);
    ASSERT_EQUAL(a.At(2), 2);
  //  ASSERT_EQUAL(a.At(10), 2);
}




int main ()
{
  TestRunner tr;
  RUN_TEST(tr, TestTable);
  return 0;
}*/

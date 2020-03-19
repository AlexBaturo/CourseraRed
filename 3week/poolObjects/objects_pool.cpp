#include "test_runner.h"

#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <stdexcept>
#include <set>
using namespace std;

template <class T>
class ObjectPool {
public:

   T* Allocate()
   {

       if(FREE->empty())
       {
           T *objPtr = new T;
           BUSY->push_back(*objPtr);
           return objPtr;
       }
       else
       {
           BUSY->push_back(FREE->front());
           //FREE->pop();
           return &BUSY->back();
       }

   }

  T* TryAllocate()
  {


      if(FREE->size() == 0)
          {
                return nullptr;
          }
       else
          {
              BUSY->push_back(FREE->front());
              FREE->pop();
              T *objPtr = new T;
              *objPtr = BUSY->front();

              return objPtr;
          }

  }

  void Deallocate(T* object)
  {

      auto it = find(BUSY->begin(), BUSY->end(), *object);
        cout << *BUSY;
      if(it == BUSY->end()) throw invalid_argument("0");
      else
      {
         cout << *object;
         FREE->push(*object);
         cout << "222";
       // BUSY->erase(it);
      }
  }

  ~ObjectPool()
  {
    delete BUSY;
    delete FREE;
  }

private:
  queue <T> *FREE = new queue <T>;
  vector <T> *BUSY = new vector <T>;
};

void TestObjectPool() {
  ObjectPool<string> pool;

  auto p1 = pool.Allocate();
  auto p2 = pool.Allocate();
  auto p3 = pool.Allocate();

  *p1 = "first";
  *p2 = "second";
  *p3 = "third";

  pool.Deallocate(p2);

  ASSERT_EQUAL(*pool.Allocate(), "second");


  pool.Deallocate(p3);
  pool.Deallocate(p1);
  ASSERT_EQUAL(*pool.Allocate(), "third");
  ASSERT_EQUAL(*pool.Allocate(), "first");

  pool.Deallocate(p1);
}

int main() {
  TestRunner tr;
  RUN_TEST(tr, TestObjectPool);
  return 0;
}

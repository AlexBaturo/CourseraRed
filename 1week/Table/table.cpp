#include "test_runner.h"
#include <vector>
#include <utility>

using namespace std;

template <typename T>
class Table
{
public:
    Table (const size_t& new_rows, const size_t& new_columns)
    {
        Resize(new_rows, new_columns);
    }

    vector<T>& operator [] (const size_t& index)
    {
        return cells[index];
    }

    const vector<T>& operator [] (const size_t& index) const
    {
        return cells[index];
    }

    void Resize (const size_t& new_rows, const size_t& new_columns)
    {
        rows = new_rows;
        columns = new_columns;
        cells.resize(rows);
        for(auto& row : cells) row.resize(columns);
    }

    pair<size_t, size_t> Size () const
    {
        return make_pair(rows, columns);
    }





private:
     vector<vector<T>> cells;
     size_t rows, columns;

};

void TestTable() {
  Table<int> t(1, 1);
  ASSERT_EQUAL(t.Size().first, 1u);
  ASSERT_EQUAL(t.Size().second, 1u);
  t[0][0] = 42;
  ASSERT_EQUAL(t[0][0], 42);
  t.Resize(3, 4);
  ASSERT_EQUAL(t.Size().first, 3u);
  ASSERT_EQUAL(t.Size().second, 4u);
}

int main() {
  TestRunner tr;
  RUN_TEST(tr, TestTable);
  return 0;
}

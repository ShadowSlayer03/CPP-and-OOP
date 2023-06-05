// C++ STL
// DEQUE = Allows inserting or deleting values from both ends
#include <deque>
#include <iostream>
using namespace std;

int main() {
  deque<int> d;

  // INSERTING AT THE BEGINNING AND END
  d.push_back(3);
  d.push_back(7);
  d.push_back(8);
  d.push_back(9);
  d.push_back(10);
  d.push_front(2);

  // DELETING AT THE BEGINNING AND END
  d.pop_back();
  d.pop_front();

  cout << "Current size = " << d.size() << endl;
  // DELETING A SPECIFIC VALUE FROM ANY PART OF DEQUE OR AN ENTIRE SET OF VALUES
  d.erase(d.begin() + 2);
  d.erase(d.begin(), d.begin() + 1);

  for (int i : d)
    cout << i << " ";
  d.push_back(3);
  d.push_back(17);
  d.push_back(8);
  d.push_back(10);

  // ACCESSING AND MODIFYING ANY VALUE
  d.at(3) = 15;
  d[2] = 19;

  // SIZE
  cout << d.size() << endl;

  for (int i : d)
    cout << i << " ";
  return 0;
}
#include <iostream>
#include <set>

using namespace std;

int main()
{
  set<int> st{1, 3, 5};
  st.insert(2);
  auto itr = st.begin();
  cout << *itr << endl; // 1
  itr++;
  cout << *itr << endl; // 2
  itr++;
  cout << *itr << endl; // 3
  st.insert(3);
  itr++;
  cout << *itr << endl;
}
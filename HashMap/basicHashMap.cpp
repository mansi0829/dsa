#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv)
{
  map<string, int> m;
  m["hello"] = 23;
  // check if key is present
//   if (m.find("world") != m.end())
    // cout << "map contains key world!\n";
  // retrieve
  cout << m["hello"] << '\n';
  map<string, int>::iterator i = m.find("hello");
  assert(i != m.end());
  cout << "Key: " << i->first << " Value: " << i->second << '\n';
  return 0;
}
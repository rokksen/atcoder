#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  int l = a + b, r = c + d;

  if (l > r) {
    cout << "Left";
  } else if (l < r) {
    cout << "Right";
  } else if (l == r) {
    cout << "Balanced";
  }

  cout << endl;
}
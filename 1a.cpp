#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>

using namespace std;

int main(void) {
  long long n, m, a;

  cin >> n >> m >> a;
  cout << (long long)(ceil(n * 1.0 / a) * ceil(m * 1.0 / a));
  return 0;
}

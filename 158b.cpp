#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <tgmath.h>

using namespace std;

int main(void) {
  int n;

  cin >> n;

  int cars[n];
  int groups[n];

  for (int j = 0; j < n; j++) {
    cars[j] = 0;
    groups[j] = 0;
  }

  int numCars = 0;

  for (int i = 0; i < n; i++)
    cin >> groups[i];

  sort(groups, groups + n);

  int i = 0;
  int j = n - 1;
  while (i != j) {
    if (groups[i] + groups[j] <= 4) {
      groups[j] += groups[i];
      i++;
    } else {
      j--;
      numCars++;
    }
  }

  cout << numCars + 1 << endl;

  return 0;
}

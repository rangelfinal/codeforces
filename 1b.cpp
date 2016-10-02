#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(void) {
  int n;

  cin >> n;

  for (int i = 0; i < n; i++) {
    char *line = (char *)malloc(200 * sizeof(line));
    int r, c;

    cin >> line;

    if (sscanf(line, "R%dC%d", &r, &c) == 2) {
      char *col = (char *)malloc(200 * sizeof(col));
      while (r > 27) {
        strcat(col, "Z");
        r -= 27;
      }
      strcat(col, );
      strcat(col, c);
      cout << col;
    } else {
      char *col = (char *)malloc(200 * sizeof(col));
      sscanf(line, "%[A-Z]%d", col, &r);
    }
  }

  return 0;
}

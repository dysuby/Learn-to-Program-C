int getNumOfSubstring(char a[], char b[]) {
  int count = 0, index_a, index_b = 0, index;
    for (index_a = 0; a[index_a] != '\0'; ++index_a) {
      if (a[index_a] != b[index_b]) {
        index_b = 0;
        if (a[index_a] == b[index_b])
          ++index_b;
        continue;
      } else {
        if (index_b == 0)
          index = index_a;
        ++index_b; 
      }
      if (b[index_b] == '\0') {
        index_a = index;
        index_b = 0;
        ++count;
      }
    }
  return count;
}
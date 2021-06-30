void swap_max(int a[], int l, int n) {
  int max_pos = n;
  for(int i = n; i < l; i++) {
    if(a[i] > a[max_pos])  max_pos = i;
  }
  int max = a[max_pos];
  a[max_pos] = a[n];
  a[n] = max;
}

void ssort(int a[], int l) {
  for(int i = 0; i < l; i++) {
    swap_max(a, l, i);
  }
}

void swap_max(int a[], int l, int n) {
  int max = a[l];
  int max_pos = l;
  for(int i = l+1; i < n; i++) {
    if(a[i] > max) {
      max = a[i];
      max_pos = i;
    }
  }
  a[l] += a[max_pos];
  a[max_pos] = a[l] - a[max_pos];
  a[l] -= a[max_pos];
}

void ssort(int a[], int n) {
  for(int i = 0; i < n; i++) {
    swap_max(a, i, n);
  }
} 

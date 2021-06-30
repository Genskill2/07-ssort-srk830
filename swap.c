void swap_max(int a[], int l, int n) {
  int max = a[n];
  int max_pos = n;
  int i = n+1;
  while(i < l) {
    if(a[i] > max) {
      max = a[i];
      max_pos = i;
    }i++;
  }
  a[n] += a[max_pos];
  a[max_pos] = a[n] - a[max_pos];
  a[n] -= a[max_pos];
}

void ssort(int a[], int l) {
  for(int i = 0; i < l; i++) {
    swap_max(a, l, i);
  }
} 

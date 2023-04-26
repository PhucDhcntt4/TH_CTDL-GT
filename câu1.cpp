#include <stdio.h>
 
// Hàm tìm kiếm nhị phân sử dụng giải thuật đệ quy
int binarySearch(int a[], int l, int r, int x) {
  if (r >= l) {
    int mid = l + (r - l) / 2; // Tương đương (l+r)/2 nhưng ưu điểm tránh tràn số khi l,r lớn
 
    // Nếu arr[mid] = x, trả về chỉ số và kết thúc.
    if (a[mid] == x)
      return mid;
 
    // Nếu arr[mid] > x, thực hiện tìm kiếm nửa trái của mảng
    if (a[mid] > x)
      return binarySearch(a, l, mid - 1, x);
 
    // Nếu arr[mid] < x, thực hiện tìm kiếm nửa phải của mảng
    return binarySearch(a, mid + 1, r, x);
  }
 
  // Nếu không tìm thấy
  return -1;
}
 
int main(void) {
  int a[] = {2, 3, 4, 10, 40};
  int n = sizeof(a) / sizeof(a[0]);
  int x = 1;
  int vitri = binarySearch(a, 0, n - 1, x);
  if (vitri == -1)
    printf("%d xuat hien tai chi so %d", x, vitri);
  else
    printf("%d xuat hien tai chi so %d", x, vitri);
  return 0;
}
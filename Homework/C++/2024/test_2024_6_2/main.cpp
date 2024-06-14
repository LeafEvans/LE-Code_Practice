/* #include <iostream>
#include <vector>

template <class T>
void quick_sort(T* arr, int left, int right) {
  if (left >= right) {
    return;
  }

  int i = left - 1, j = right + 1;

  T x = arr[left];

  while (i < j) {
    do {
      ++i;
    } while (arr[i] < x);

    do {
      --j;
    } while (arr[j] > x);

    if (i < j) {
      std::swap(arr[i], arr[j]);
    }
  }

  quick_sort(arr, left, j);
  quick_sort(arr, j + 1, right);
}

template <class T>
void merge_sort(T* arr, int left, int right) {
  if (left >= right) {
    return;
  }

  int mid = left + (right - left) / 2;

  merge_sort(arr, left, mid);
  merge_sort(arr, mid + 1, right);

  int i = left, j = mid + 1, k = 0;
  T* temp = new T[right - left + 1];

  while (i <= mid && j <= right) {
    if (arr[i] <= arr[j]) {
      temp[k++] = arr[i++];
    } else {
      temp[k++] = arr[j++];
    }
  }

  while (i <= mid) {
    temp[k++] = arr[i++];
  }

  while (j <= right) {
    temp[k++] = arr[j++];
  }

  for (i = left, j = 0; i <= right; ++i, ++j) {
    arr[i] = temp[j];
  }

  delete[] temp;
}

template <class T>
void bubble_sort(T* arr, int len) {
  for (int i = 0; i < len - 1; ++i) {
    for (int j = 0; j < len - 1 - i; ++j) {
      if (arr[j] >= arr[j + 1]) {
        std::swap(arr[j], arr[j + 1]);
      }
    }
  }
}

template <class T>
void insertion_sort(T* arr, int len) {
  int i, j;
  T key = T();

  for (i = 1; i < len; ++i) {
    key = arr[i];
    for (j = i - 1; j >= 0 && key > arr[j]; --j) {
      arr[j + 1] = arr[j];
    }
    arr[j + 1] = key;
  }
}

template <class T>
void selection_sort(T* arr, int len) {
  int min_index;
  for (int i = 0; i < len - 1; ++i) {
    min_index = i;
    for (int j = i + 1; j < len; ++j) {
      if (arr[j] < arr[min_index]) {
        min_index = j;
      }
    }
    std::swap(arr[i], arr[min_index]);
  }
}

std::vector<int> add(const std::vector<int>& v1, const std::vector<int>& v2) {
  std::vector<int> result;

  int carry = 0;

  size_t max_size = std::max(v1.size(), v2.size());

  for (size_t i = 0; i < max_size; ++i) {
    if (i < v1.size()) {
      carry += v1[i];
    }

    if (i < v2.size()) {
      carry += v2[i];
    }

    result.push_back(carry % 10);

    carry /= 10;
  }

  if (carry) {
    result.push_back(carry);
  }

  return result;
}

std::vector<int> sub(const std::vector<int>& v1, const std::vector<int>& v2) {
  std::vector<int> result;

  int carry = 0;

  for (int i = 0; i < v1.size(); ++i) {
    int diff = v1[i] - carry;
    if (i < v2.size()) {
      diff -= v2[i];
    }

    result.push_back((diff + 10) % 10);

    carry = (diff < 0) ? 1 : 0;
  }

  return result;
}

int main() {
  std::cout << "Hello World!\n";
  return 0;
} */
/* #include <fstream>
#include <iostream>
using namespace std;
int main(void) {
  ifstream f1;  // 文件输入流
  ofstream f2;  // 文件输出流
  int a[10], sum;
  f1.open("..\\source.txt");                 // 读取数据
  f2.open("..\\destination.txt", ios::out);  // 写入模式
  f2 << "2023116204陈靖盈" << endl;                // 输出个人信息
  for (int i = 0; i < 10; i++) {
    f1 >> a[i];  // 将数字放入数组
  }
  for (int i = 0; i < 10; i++) {
    sum = 0;                          // 初始化真因子的和为 1
    for (int j = 1; j < a[i]; j++) {  // 真因子小于本身
      if (a[i] % j == 0) {
        sum += j;  // 如果为真因子，则加上去
      }
    }
    // 所有的真因子加起来后判断
    if (sum == a[i]) {
      f2 << a[i] << ' ';  // 成立就输出
    }
  }

  f1.close();  // 关闭文件
  f2.close();

  return 0;
} */


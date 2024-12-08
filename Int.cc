
#include <iostream>

class Int {
  friend Int operator+(const Int &lhs, const Int &rhs);
  friend Int operator-(const Int &lhs, const Int &rhs);
  friend Int operator*(const Int &lhs, const Int &rhs);
  friend Int operator/(const Int &lhs, const Int &rhs);
  friend Int operator%(const Int &lhs, const Int &rhs);
  friend Int operator-(const Int &i);
  friend bool operator==(const Int &lhs, const Int &rhs);
  friend bool operator!=(const Int &lhs, const Int &rhs);
  friend bool operator<(const Int &lhs, const Int &rhs);
  friend bool operator<=(const Int &lhs, const Int &rhs);
  friend bool operator>(const Int &lhs, const Int &rhs);
  friend bool operator>=(const Int &lhs, const Int &rhs);

  friend std::ostream &operator<<(std::ostream &os, const Int &i);
  friend std::istream &operator>>(std::istream &is, Int &i);

  public:
  Int() = default;
  Int(int i) : val(i) {}

  Int &operator++() {
    ++val;
    return *this;
  }

  Int &operator--() {
    --val;
    return *this;
  }

  Int operator++(int) {
    Int tmp = *this;
    ++val;
    return tmp;
  }

  Int operator--(int) {
    Int tmp = *this;
    --val;
    return tmp;
  }

  int get() const { return val; }

  private:
  int val = 0;
};

Int operator+(const Int &lhs, const Int &rhs) {
  Int x;
  x.val = lhs.val + rhs.val;
  return x;
}

Int operator-(const Int &lhs, const Int &rhs) {
  Int x;
  x.val = lhs.val - rhs.val;
  return x;
}

Int operator*(const Int &lhs, const Int &rhs) {
  Int x;
  x.val = lhs.val * rhs.val;
  return x;
}

Int operator/(const Int &lhs, const Int &rhs) {
  Int x;
  x.val = lhs.val / rhs.val;
  return x;
}

Int operator%(const Int &lhs, const Int &rhs) {
  Int x;
  x.val = lhs.val % rhs.val;
  return x;
}

Int operator-(const Int &i) {
  Int x;
  x.val = -i.val;
  return x;
}

bool operator==(const Int &lhs, const Int &rhs) { return lhs.val == rhs.val; }

bool operator!=(const Int &lhs, const Int &rhs) { return !(lhs == rhs); }

bool operator<(const Int &lhs, const Int &rhs) { return lhs.val < rhs.val; }

bool operator<=(const Int &lhs, const Int &rhs) { return lhs.val <= rhs.val; }

bool operator>(const Int &lhs, const Int &rhs) { return lhs.val > rhs.val; }

bool operator>=(const Int &lhs, const Int &rhs) { return lhs.val >= rhs.val; }

std::ostream &operator<<(std::ostream &os, const Int &i) {
  os << i.val;
  return os;
}

std::istream &operator>>(std::istream &is, Int &i) {
  is >> i.val;
  return is;
}

int main() {
  Int a = 1, b = 2;
  std::cout << a + b << std::endl;  // 3
  std::cout << a - b << std::endl;  // -1
  std::cout << a * b << std::endl;  // 2
  std::cout << a / b << std::endl;  // 0
  std::cout << a++ << std::endl;    // 1
  std::cout << ++a << std::endl;    // 3
  return 0;
}
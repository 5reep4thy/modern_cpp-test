#include<bits/stdc++.h>
class test_int_oo {
  int x;
  int* p;
  public:
    test_int_oo(int in_x) {
      x = in_x;
      p = &x;
      std::cout << "init called for " << in_x << "\n";
    }
    int get_x() {
      return *p;
    }
    void set_x(int in_x) {
      this->x = in_x;
    }
    test_int_oo(test_int_oo& in_obj) {
      x = in_obj.x;
      p = &x;
    }
    test_int_oo(test_int_oo&& in_obj) {
      std::cout << "Moving\n";
      this->x = in_obj.get_x();
      this->p = &this->x;
      in_obj.set_x(-1);

    }
    ~test_int_oo() {
    }
};
class test_str_oo {
  std::string x;
  std::string* p;
  public:
    test_str_oo(std::string in_x) {
      x = in_x;
      p = &x;
    }
    operator test_int_oo() {
      return test_int_oo(std::stoi(x));
    }
    test_str_oo(const test_str_oo& y) {
      x = y.x;
      p = &x;
    }
    std::string get_x() {
      return *p;
    }
    ~test_str_oo() {
    }
};
int main() {
  {
    // Type conversions - Using operator
    using namespace std;
    test_str_oo t("123");
    test_int_oo w = t;
    /* cout << w.get_x() << "\n"; */
    test_str_oo u = t;
    /* cout << u.get_x() << "\n"; */

    // Move example
    cout << w.get_x() << "\n";
    test_int_oo x = std::move(w);
    cout << x.get_x() << "\n";
    cout << w.get_x() << "\n";
  }
  return 0;
}

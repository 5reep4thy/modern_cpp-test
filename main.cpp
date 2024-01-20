#include<bits/stdc++.h>
#include "mod_helper.cpp"
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
      std::cout << "Deleting " << x << "\n";
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
      std::cout << "Deleting " << x << "\n";
    }
};

template<class... c2>
void list_vecs(c2... args) {
  ((cout << args << "\n"),
  ...);
}


template<typename T>
class tmp_test {
  typedef typename T::x in_x;
  in_x tx;
  public:
    void printtx() {
      std::cout << tx << "\n";
    }
};
int main() {
  {
    using namespace std;
    // Type conversions - Using operator
    /* test_str_oo t("123"); */
    /* test_int_oo w = t; */
    /* cout << w.get_x() << "\n"; */
    /* test_str_oo u = t; */
    /* cout << u.get_x() << "\n"; */

    // Move example
    /* cout << w.get_x() << "\n"; */
    /* test_int_oo x = std::move(w); */
    /* cout << x.get_x() << "\n"; */
    /* cout << w.get_x() << "\n"; */

    // Operator overloading example
    /* mod_ll a = 10, b = 10; */
    /* mod_ll c = a + b; */
    /* cout << c.x << "\n"; */

    // shared_ptr
    /* shared_ptr<mod_ll> a1 = make_shared<mod_ll>(11); */
    /* shared_ptr<mod_ll> a2 = a1; */
    /* a2->x = 13; */
    /* cout << a1->x << ", " << a2->x << "\n"; */
    /* a1->x = 12; */
    /* cout << a1->x << ", " << a2->x << "\n"; */

    // emplace_back t
    /* vector<pair<int, int>> a, b; */
    /* pair<int, int>& c = a.emplace_back(11, 12); */
    /* c = a.emplace_back(14, 15); */
    /* for (auto& i: a) cout << i.second << "\n"; */

    // variadic parameter pack
    /* list_vecs(1, 1.2, "hello world"); */ 



  }
  return 0;
}

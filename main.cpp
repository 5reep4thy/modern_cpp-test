#include<bits/stdc++.h>
#include "mod_helper.cpp"
struct nos2 {
  int x, y;
};
union un {
  struct {
    int a, b, c, d;
  };
  struct {
    nos2 e, f;
  };
};
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
    test_int_oo& operator=(test_int_oo& in_obj) {
      x = in_obj.x;
      p = &x;
      return *this;
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

typedef class {
  public:
  typedef int x;
  int y;
} tc;
// nested typename and template; not able to use it currently
template<typename T, typename U1, typename U2, template<typename, typename> typename U>
class tmp_test {
  typedef typename T::x in_x;
  in_x tx;
  U<U1, U2> uu;
  public:
    void printtx() {
      std::cout << tx << "\n";
    }
};

template<typename t1, typename t2>
class tmp_test_2 {
};

template<typename t1, typename t2>
void for_each_ele(t1& vec, t2 func) {
  for (auto &i: vec)
    func(i);
}

void print2(nos2 p) {
  cout << p.x << ", " << p.y << "\n";
}

int main() {
  using namespace std;
  {
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

    /* tc etc; */
    // nested template usage; not working atm
    /* tmp_test<tc, tc, tc, tmp_test_2<tc, tc>> tdest; */


    // callback eg
    /* vector<int> a {1, 2, 3, 4}; */
    /* for_each_ele(a, [&] (int& a) {a++;}); */

    // Union Example
    /* union un U {1, 2, 3, 4}; */
    /* U.c = 500; */
    /* print2(U.e); */
    /* print2(U.f); */




  }
  return 0;
}

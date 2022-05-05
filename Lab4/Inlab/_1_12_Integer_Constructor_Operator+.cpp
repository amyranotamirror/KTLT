// #include<iostream>
// using namespace std;

// // TODO
// class Integer{
//     private:
//         int val;
//     public:
//         Integer(int);
//         Integer(Integer*);
//         Integer operator+(Integer);
//         Integer operator+(int);
//         void print();
// };
// void Integer::print() {
//     cout << this->val << endl;
// }
// Integer::Integer(int num){
//     this->val = num;
// }
// Integer::Integer(Integer* num){
//     this->val = num->val;
// }
// Integer Integer::operator+(Integer num){
//     *this = Integer(this->val + num.val);
//     return *this;
// }
// Integer Integer::operator+(int num){
//     *this = Integer(this->val + num);
//     return *this;
// }

// int main() {
//     int x, y, z;
//     cin >> x >> y >> z;
//     Integer a(x);
//     Integer b(y);
//     Integer* t = new Integer(z);
//     Integer c(t);
    
//     a.print(); b.print();
//     (a + b + c + 4).print();
    
//     delete t;
//     return 0;
// }
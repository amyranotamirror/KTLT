// #include <iostream>
// #include <string.h>

// using namespace std;

// template<class T> class Cell {
// protected:
//     T infor;
// public:
//     void set(T _infor) { this->infor = _infor; };
//     T get() { return this->infor; };
// };

// enum Color {White, Yellow, Black, Red, Blue};

// // TODO
// template<class SomeColor> class ColoredCell : public Cell<SomeColor> 
// {
//     private:
//         Color color;
//     public:
//         void setColor(Color color1) {this->color = color1;}
//         Color getColor() {return color;}
//         SomeColor* get(){
//             if(color == Color::White) return nullptr;
//             return &this->infor;
//         }
    
// };
// int main () {
//     int test, c;
//     cin >> test >> c;
//     ColoredCell<int>* a = new ColoredCell<int>();
//     switch (test)
//     {
//     case 1:
//         a->setColor(Color(c));
//         cout << int(a->getColor());
//         break;
//     case 2:
//         a->setColor(Color(c));
//         a->set(10);
//         if (a->get() == NULL) cout << "null" << endl;
//         else cout << *(a->get());
//     default:
//         break;
//     }
//     return 0;
// }
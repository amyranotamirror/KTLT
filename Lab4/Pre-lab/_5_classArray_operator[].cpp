// template <typename T>
// class Array {
// public:
//     Array(int size, T initValue);
//     ~Array();

//     void setAt(int idx, const T & value);
//     T getAt(int idx);
//     T& operator[](int idx){
//         if(idx < 0 || idx >= size)
//             throw -1;
//         else return this->p[idx];
//     };
    
//     void print();

// private:
//     int size;
//     T * p;
// };

// template<typename T>
// void Array<T>::print() {
//     for (int i = 0; i < this->size; ++i) {
//         cout << (i > 0 ? " " : "")
//             << this->p[i];
//     }
//     cout << endl;
// }

// // TODO


// // string.h is included

// class Book {
//     char* name;
// public:
//     Book(const char*);
//     ~Book();
    
//     void display();
//     char* getName();
// };

// void Book::display() {
//     cout << "Book: " << this->name << endl;
// }

// char* Book::getName() {
//     return this->name;
// }


// // TODO: Book and ~Book
// Book::Book(const char* name){
//     int len = strlen(name);
//     this->name = new char[len+1];
//     for(int i = 0; i < len; i++)
//         *(this->name + i) = name[i];
//     *(this->name + len) = '\0';
// }
// Book::~Book(){
//     delete [] name;
// }
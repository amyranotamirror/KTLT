// class ClockType
// {
//    public:
//       void setTime(int, int, int);
//       void printTime() const;
//       void incrementSeconds();
//       void incrementMinutes();
//       void incrementHours();
//       ClockType(int, int, int);
//       ClockType();

//    private:
//       int hr;
//       int min;
//       int sec;
// };

// void ClockType::printTime() const
// {
//    if (hr < 10)
//       cout << "0";
//    cout << hr << ":";
//    if (min < 10)
//       cout << "0";
//    cout << min << ":";
//    if (sec < 10)
//       cout << "0";
//    cout << sec;
// }

// // TODO
// void ClockType::incrementSeconds()
// {
//     sec++;
//     if(sec == 60){
//         sec = 0;
//         incrementMinutes();
//     }
// }
// void ClockType::incrementMinutes()
// {
//     min++;
//     if(min == 60)
//     {
//         min = 0;
//         incrementHours();
//     }
// }
// void ClockType::incrementHours()
// {
//     hr++;
//     if(hr == 24) hr = 0;
// }
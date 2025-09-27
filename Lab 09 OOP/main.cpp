 #include<iostream>
 #include"staticm.h"
 #include"staticf.h"
 using namespace std;
 
 int main() {
// 	Static members
//    Counter c1, c2, c3;
//    c1.showCount();
//    c2.showCount();


// Static functions
    counter c1, c2;
    counter::print();
    counter c3;
    counter::print();
    
    return 0;
 }

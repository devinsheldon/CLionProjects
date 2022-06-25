#include <iostream>
using namespace std;

int main() {
   int arrowBaseHeight = 0;
   int arrowBaseWidth = 0;
   int arrowHeadWidth = 0;

   cout << "Enter arrow base height: " << endl;
   cin >> arrowBaseHeight;

   cout << "Enter arrow base width: " << endl;
   cin >> arrowBaseWidth;

   while(arrowHeadWidth <= arrowBaseWidth) {
       cout << "Enter arrow head width: " << endl;
       cin >> arrowHeadWidth;
   }

   for (int i = 0; i < arrowBaseHeight; i++) {
       for (int j = 0; j < arrowBaseWidth; j++) {
           cout << "*";
       }
       cout << endl;
   }
   for (int i = 0; i < arrowHeadWidth; i++) {
       for (int j = (arrowHeadWidth - i); j > 0; j--) {
           cout << "*";
       }
       cout << endl;
   }

   return 0;
}
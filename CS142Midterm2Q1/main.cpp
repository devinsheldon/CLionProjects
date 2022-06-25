#include<iostream>
#include<string>

using namespace std;

const int SECTION_BEGIN = 7;
const int SECTION_MID = 12;
const int SECTION_END = 17;

const int ROW_BEGIN = 25;
const int ROW_MID = 50;
const int ROW_END = 75;

int main() {
   int userSection = -1;
   int userRow = -1;
   string seatLocation;

   cout << "Please enter the section number of the location: " << endl;
   cin  >> userSection;
   cout << "Please enter the row number of the location: " << endl;
   cin  >> userRow;

   if(userRow < ROW_BEGIN) {
       seatLocation = "Behind";
   } else if(userRow < ROW_MID) {
       if(userSection < SECTION_BEGIN) {
           seatLocation = "The Left";
       } else if(userSection < SECTION_MID) {
           seatLocation = "Left Bleachers";
       } else if(userSection < SECTION_END) {
           seatLocation = "Right Bleachers";
       } else {
           seatLocation = "The Right";
       }
   } else if (userRow < ROW_END) {
       if(userSection < SECTION_BEGIN) {
           seatLocation = "The Left";
       } else if(userSection < SECTION_MID) {
           seatLocation = "General Stadium Seating";
       } else if(userSection < SECTION_END) {
           seatLocation = "Premium Stadium Seating";
       } else {
           seatLocation = "The Right";
       }
   } else {
       seatLocation = "In Front";
   }

   cout << "The location is found in the " << seatLocation << endl;

   return 0;
}
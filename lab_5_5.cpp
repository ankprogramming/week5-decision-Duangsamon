#include <iostream>
#include <string>
using namespace
int main () {

  string playerName;
  int score = 0, life = 3;
  char choicel;

  // ประกาศตัวแปรเพื่อรับการเลือกคำตอบของผู้เล่น
  // เช่นการเป็น ตัวเลขให้ประกาศเป็น int choice1;
  // ถ้ารับคำตอบเป็นตัวอักษร ให้ประกาศเป็น char choice1;
  //

  cout << "Welcome to Mini Adventure Game." << endl;
  cout << "Please enter your name : ";
  cin >> playerName;

  // เขียนคำสั่งรับชื่อ แล้วเก็บในตัวแปร playerName
  if (playerName.length() > 8) {
        playerName.erase(playerName.begin()+8, playerName.end());
        cout << playerName << endl;
    }

    return 0;
}


  // เขียนคำสั่งแสดงผล คำบรรยายสภาพแวดล้อม สถานการณ์ และคำทักทายที่มีชื่อตัวละคร
  // เช่น cout << "Hello " << playerName << ". You are in Robinson. You are walking happily. Suddenly you realize that forgetting the wallet."
  // << " But you're lazy to get back to get it." << endl;
  cout << "Hello " << playerName << ". You go to Dreamworld. You walk to the zone dinosaur with your boyfriend. But your boyfriend forgets the camera in the car."
  << " But you're lazy to walk back and take it." << endl;


  // เขียนคำสั่งแสดงผล คำถามให้ผู้ใช้ตัดสินใจ
  // เช่น cout << "What should you do? (A)sk for money,(S)teal : ";
  cout << "What should you do? (A)sk for camera,(S)Camera Phone : ";


  // เขียนคำสั่งรับคำตอบจากผู้ใช้ แล้วให้คะแนนหรือทำโทษ จากการตัดสินใจนั้น
  // เช่น
  //     cin >> choice1;
  //     switch(choice1) {
  //        case "S" : score += 10; life -= 1; cout << "You stole money from people. Now you can shopping.";
  //        case "A" : score += 50; cout << "You ask for money from people then you get 100 baht. You are very happy. Now you can shopping."
  //
  //     switch(choice1) {
  //        case "S" : score += 10; life -= 1; cout << "You stole money from people. Now you can shopping.";
  //        case "A" : score += 50; cout << "You ask for money from people then you get 100 baht. You are very happy. Now you can shopping
  //
  cin >> choicel;

      switch(choice1) {
         case 'A' : score += 50;
          cout <<  "You walk to the camera and you get 100 baht. You are happy to take a photo with your boyfriend."

         case 'S' : score += 10
         life -= 1;
         cout << "You use a camera phone."




  // ฝึกสร้างสถานการณ์และสร้างเงื่อนไข อีก 2 สถานการณ์


  // สรุปผลคะแนนและพลังชีวิต เช่น cout << "Congratulations! You win the game with " << score << "Score. See you next time on next game. GG." << endl;
  cout << "Congratulations! You win the game with " << score << "Score. See you next time on next game. GG." << endl;

  return 0;
}

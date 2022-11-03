#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  // 0   -  579: Ineligible for Tuffy credit cards
  const int tIneligible = 0;
  // 580 -  669: Eligible for the Silver Tuffy Card
  const int tSilver = 580;
  // 670 -  799: Eligible for the Gold Tuffy Card
  const int tGold = 670;
  // 800 -  850: Eligible for the Platinum Tuffy Card
  const int tPlatinum = 800;
  
  int tCredit_Score;

  cout << "Thank you for applying for the Tuffy Credit Card. Please enter your credit score: " << endl;
  cout << "Credit Score: ";
  cin >> tCredit_Score;

  if (tCredit_Score >= 0 && tCredit_Score < tSilver)
  {
    cout << "You are ineligible for Tuffy Credit Cards." << endl;
  }
  else if (tCredit_Score >= tSilver && tCredit_Score < tGold)
  {
    cout << "You are eligible for the Silver Tuffy Card. Thank you for using our program, please come again!" << endl;
  }
  else if (tCredit_Score >= tGold && tCredit_Score < tPlatinum)
  {
    cout << "You are eligible for the Gold Tuffy Card. Thank you for using our program, please come again!" << endl;
  }
  else if (tCredit_Score >= tPlatinum && tCredit_Score <= 850)
  {
    cout << "You are eligible for the Platinum Tuffy Card. Thank you for using our program, please come again!" << endl;
  }
  else
  {
    cout << "That is an invalid credit score. Please run the program again and provide a valid credit score." << endl;
  }
  
}

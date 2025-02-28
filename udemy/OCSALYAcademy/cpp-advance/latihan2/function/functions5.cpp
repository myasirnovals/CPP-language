#include <iostream>

#include "string"

using namespace std;

void clear_the_screen();

void log_message(const string &msg, bool clear_screen = false) {
  if (clear_screen) {
    clear_the_screen();
  }

  cout << msg << endl;
}

int main() {
  log_message("first message", true);
  log_message("second message");

  bool user_deccision = true;
  log_message("third message", user_deccidsion);
  
  return 0;
}

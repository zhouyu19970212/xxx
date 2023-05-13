#include <iostream>
#include <string>
#include <cstring>
using namespace std;
bool check_word(char * a, char * b, int len);
int main()
{
  int cnt = 0;
  char word[100] = {};
  char break_flag[] = "done";
  while(true)
  {
    cout << "Enter words (to stop, type the word done): " << endl;
    cin >> word;
    int len = strlen(word);
    char *new_word = new char[len + 1];
    strcpy(new_word, word);
    if(check_word(new_word, break_flag, len))
    {
      break;
    }
    cnt++;
  }
  cout << "You entered a total of " << cnt << " words" << endl;
  return 0;
}

bool check_word(char* a, char* b, int len)
{
  for (int i = 0; i < len; i++)
  {
    if (*(a + i) != *(b + i))
    {
      return false;
    }
  }
  return true;
}
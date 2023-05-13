#include <iostream>
#include <string>
#include <cstring>
using namespace std;
bool check_word(string a, string b, int len);
int main()
{
  int cnt = 0;
  string word;
  char break_flag[] = "done";
  while(true)
  {
    cout << "Enter words (to stop, type the word done): " << endl;
    getline(cin, word);
    if(word == "done" || check_word(word, "done", word.length()))
    {
      break;
    }
    cnt++;
  }
  cout << "You entered a total of " << cnt << " words" << endl;
  return 0;
}

bool check_word(string a, string b, int len)
{
  bool is_true_flag = true;
  bool have_done = false;
  for (int i = 0; i < len; i++)
  {
    if (a.at(i) == b.at(0))
    {
      int k = 1;
      have_done = true;
      for (int j = i + 1; j < i + 3; j++)
      {
        if (a.at(j) != b.at(k++)) 
        {
          have_done = false;
          is_true_flag = false;
          break;
        }
      }
    }
    if ((i == len - 3) && !have_done)
    {
      is_true_flag = false;
      break;
    }
  }
  return is_true_flag;
}
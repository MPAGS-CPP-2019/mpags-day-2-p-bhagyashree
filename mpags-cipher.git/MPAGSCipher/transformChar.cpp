#include <string>
#include <cctype>
#include "transformChar.hpp"


std::string transformChar(const char in_char)
{
std::string in_Text;

if (std::isalpha(in_char)) {
  in_Text = std::toupper(in_char);
//  continue;
}

else {
switch (in_char) {
      case '0':
        in_Text = "ZERO";
        break;
      case '1':
        in_Text = "ONE";
        break;
      case '2':
        in_Text = "TWO";
        break;
      case '3':
        in_Text = "THREE";
        break;
      case '4':
        in_Text = "FOUR";
        break;
      case '5':
        in_Text = "FIVE";
        break;
      case '6':
        in_Text = "SIX";
        break;
      case '7':
        in_Text = "SEVEN";
        break;
      case '8':
        in_Text = "EIGHT";
        break;
      case '9':
        in_Text = "NINE";
        break;
    }
 }
    // If the character isn't alphabetic or numeric, DONT add it.

 return in_Text;

}

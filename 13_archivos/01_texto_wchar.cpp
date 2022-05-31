#include <iostream> 
#include <cwchar>
#include <clocale>
using namespace std;

int main() {
  std::wcout.imbue(std::locale("en_US.UTF-8"));
  const wchar_t msg_ahmaric[] = L"ሰላም ልዑል\n"; //Ahmaric for "hello, world\n"
  const wchar_t msg_chinese[] = L"你好，世界\n";// Chinese for "hello, world\n"
  const wchar_t msg_hebrew[]  = L"שלום עולם\n"; //Hebrew for "hello, world\n"
  const wchar_t msg_russian[] = L"Привет мир\n";  //Russian for "hello, world\n"
  const wchar_t msg_tamil[]   = L"ஹலோ உலகம்\n"; //Tamil for "hello, world\n"
  const wstring msg_spanish = L"Hernández"; 
  wcout << msg_ahmaric ;
  wcout << msg_chinese ;
  wcout << msg_hebrew ;
  wcout << msg_russian ;
  wcout << msg_tamil ;
  wcout << msg_spanish << endl;
  return 0;
}
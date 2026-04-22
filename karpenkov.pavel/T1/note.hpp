#ifndef NOTE_HPP
#define NOTE_HPP
#include <iostream>

namespace karpenkov
{
  class Note
  {
  public:
    Note(const std::string &name):
      name(name) {};
    void newLine(std::string &quote)
    {
      lines.push_back("\"" + quote + "\"");
    }
    void printNote()
    {
      for (size_t i = 0; i < lines.size(); ++i) {
        std::cout << lines[i];
      }
    }

  private:
    std::string name;
    std::vector< std::string > lines;
  };
}

#endif

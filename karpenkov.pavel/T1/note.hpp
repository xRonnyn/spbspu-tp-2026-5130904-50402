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
      lines.push_back("\"\"" + quote + "\"\"");
    }

  private:
    std::string name;
    std::vector< std::string > lines;
  };
}

#endif

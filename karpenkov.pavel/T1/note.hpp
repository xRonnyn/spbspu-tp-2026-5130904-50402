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

  private:
    std::string name;
    std::vector< std::string > lines;
  };
}

#endif

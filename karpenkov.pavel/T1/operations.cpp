#include "operations.hpp"
#include <iostream>
#include <stdexcept>

namespace karpenkov
{
  void addNote(std::istream &in, std::ostream &, mapOfNotes &notes)
  {
    std::string name;
    in >> name;
    if (name.empty()) {
      throw std::runtime_error("empty note name");
    }
    if (notes.find(name) != notes.cend()) {
      throw std::runtime_error("note with this name is already exist");
    }
    std::shared_ptr< Note > newNote = std::make_shared< Note >(name);
    notes[name] = newNote;
  }
}

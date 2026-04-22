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
  void addLine(std::istream &in, std::ostream &, mapOfNotes &notes)
  {
    std::string name;
    std::string quote;
    in >> name;
    if (name.empty()) {
      throw std::runtime_error("empty arguments for line");
    }
    if (notes.find(name) == notes.cend()) {
      throw std::runtime_error("note with such name doesn't exist");
    }
    in >> quote;
    Note neededNote = notes.find(name)->first;
    neededNote.newLine(quote);
  }
  void showNote(std::istream &in, std::ostream &out, mapOfNotes &notes)
  {
    std::string name;
    in >> name;
    if (name.empty()) {
      throw std::runtime_error("empty name argument for showNote");
    }
    if (notes.find(name) == notes.cend()) {
      throw std::runtime_error("note with such name doesn't exist");
    }
    Note neededNote = notes.find(name)->first;
    neededNote.printNote();
  }
}

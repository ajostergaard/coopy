#ifndef COOPY_SHORTTEXTBOOK
#define COOPY_SHORTTEXTBOOK

#include <coopy/TextBook.h>
#include <coopy/CsvSheet.h>
#include <coopy/TextBookFactory.h>

namespace coopy {
  namespace store {
    class ShortTextBook;
  }
}

class coopy::store::ShortTextBook : public TextBook {
public:
  std::string name;
  CsvSheet sheet;

  ShortTextBook() : name("sheet") {
  }

  virtual std::vector<std::string> getNames() {
    std::vector<std::string> result;
    result.push_back(name);
    return result;
  }

  virtual PolySheet readSheet(const std::string& name) {
    if (name==this->name) {
      return PolySheet(&sheet,false);
    }
    return PolySheet();
  }

  virtual bool open(const Property& config);


  virtual std::string desc() const {
    return "CsvBook";
  }
};

#endif

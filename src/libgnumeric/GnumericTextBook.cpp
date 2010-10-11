#include <coopy/GnumericTextBook.h>

using namespace std;
using namespace coopy::store;

extern "C" {
#include <coopy/gnumeric_link.h>
}

GnumericTextBook::GnumericTextBook() {
  gnumeric_init();
  implementation = 0 /*NULL*/;
}

GnumericTextBook::~GnumericTextBook() {
  clear();
  gnumeric_fini();
}

void GnumericTextBook::clear() {
  if (implementation!=NULL) {
    gnumeric_free((GnumericWorkbookPtr)implementation);
    implementation = NULL;
  }
}
  
bool GnumericTextBook::load(const char *fname) {
  clear();
  implementation = gnumeric_load(fname);
  return (implementation!=NULL);
}

std::vector<std::string> GnumericTextBook::getNames() {
  vector<string> fake;
  fake.push_back("fake");
  return fake;
}

PolySheet GnumericTextBook::readSheet(const std::string& name) {
  return PolySheet();
}


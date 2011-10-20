#ifndef COOPY_BOOKCOMPARE
#define COOPY_BOOKCOMPARE

#include <coopy/DataSheet.h>
#include <coopy/MergeOutput.h>
#include <coopy/TextBook.h>
#include <coopy/CompareFlags.h>

namespace coopy {
  namespace cmp {
    class BookCompare;
  }
}

class coopy::cmp::BookCompare {
public:
  int compare(coopy::store::TextBook& pivot, 
	      coopy::store::TextBook& local, 
	      coopy::store::TextBook& remote, 
	      Patcher& output, const CompareFlags& flags);
  
  int resolve(coopy::store::TextBook& pivot, 
	      coopy::store::TextBook& local, 
	      coopy::store::TextBook& remote, 
	      Patcher& output, const CompareFlags& flags);
  
  void setVerbose(bool verbose);
};

#endif

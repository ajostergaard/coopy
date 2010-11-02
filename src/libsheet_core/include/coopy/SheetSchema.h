#ifndef COOPY_SHEETSCHEMA
#define COOPY_SHEETSCHEMA

#include <coopy/ColumnInfo.h>
#include <coopy/RefCount.h>

namespace coopy {
  namespace store {
    class SheetSchema;
  }
}

class coopy::store::SheetSchema : public RefCount {
public:
  virtual ~SheetSchema() {
  }

  virtual ColumnInfo getColumnInfo(int x) {
    return ColumnInfo();
  }

  virtual int headerHeight() {
    return 0;
  }

  int getColumnIndexByName(const char *name) {
    return -1;
  }
};

#endif

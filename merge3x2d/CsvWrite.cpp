#include "CsvWrite.h"

#include <stdio.h>
#include <stdlib.h>

int CsvFile::write(const DataSheet& src, const char *fname) {
  FILE *fp;
  fp = fopen(fname,"wb");
  if (!fp) {
    fprintf(stderr,"could not open %s\n", fname);
    exit(1);
  }
  CsvStyle style;
  style.setFromFilename(fname);
  std::string delim = style.getDelimiter();
  std::string result = src.encode(delim);
  fwrite(result.c_str(),1,result.length(),fp);
  fclose(fp);
  return 0;
}



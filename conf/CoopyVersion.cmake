SET(COOPY_VERSION_MAJOR "0")
SET(COOPY_VERSION_MINOR "6")
SET(COOPY_VERSION_PATCH "2")
SET(COOPY_VERSION_MODIFIER "")
SET(COOPY_VERSION "${COOPY_VERSION_MAJOR}.${COOPY_VERSION_MINOR}.${COOPY_VERSION_PATCH}")

configure_file(${CMAKE_SOURCE_DIR}/conf/coopy_version.txt.in
  ${CMAKE_BINARY_DIR}/coopy_version.txt IMMEDIATE)

# CMakeList.txt : CMake project for KnightsTourTiming, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (KnightsTourTiming "KnightsTourTiming.cpp" "KnightsTourTiming.h" "ChessBoard.cpp" "ChessBoard.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET KnightsTourTiming PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.

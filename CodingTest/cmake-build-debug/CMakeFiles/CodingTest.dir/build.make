# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\tjgml\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.5457.51\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\tjgml\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.5457.51\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\tjgml\clion\CodingTest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\tjgml\clion\CodingTest\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\CodingTest.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\CodingTest.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\CodingTest.dir\flags.make

CMakeFiles\CodingTest.dir\main.cpp.obj: CMakeFiles\CodingTest.dir\flags.make
CMakeFiles\CodingTest.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\tjgml\clion\CodingTest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CodingTest.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\CodingTest.dir\main.cpp.obj /FdCMakeFiles\CodingTest.dir\ /FS -c C:\Users\tjgml\clion\CodingTest\main.cpp
<<

CMakeFiles\CodingTest.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CodingTest.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\CodingTest.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\tjgml\clion\CodingTest\main.cpp
<<

CMakeFiles\CodingTest.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CodingTest.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\CodingTest.dir\main.cpp.s /c C:\Users\tjgml\clion\CodingTest\main.cpp
<<

# Object files for target CodingTest
CodingTest_OBJECTS = \
"CMakeFiles\CodingTest.dir\main.cpp.obj"

# External object files for target CodingTest
CodingTest_EXTERNAL_OBJECTS =

CodingTest.exe: CMakeFiles\CodingTest.dir\main.cpp.obj
CodingTest.exe: CMakeFiles\CodingTest.dir\build.make
CodingTest.exe: CMakeFiles\CodingTest.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\tjgml\clion\CodingTest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CodingTest.exe"
	C:\Users\tjgml\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.5457.51\bin\cmake\win\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\CodingTest.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\CodingTest.dir\objects1.rsp @<<
 /out:CodingTest.exe /implib:CodingTest.lib /pdb:C:\Users\tjgml\clion\CodingTest\cmake-build-debug\CodingTest.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\CodingTest.dir\build: CodingTest.exe
.PHONY : CMakeFiles\CodingTest.dir\build

CMakeFiles\CodingTest.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CodingTest.dir\cmake_clean.cmake
.PHONY : CMakeFiles\CodingTest.dir\clean

CMakeFiles\CodingTest.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\tjgml\clion\CodingTest C:\Users\tjgml\clion\CodingTest C:\Users\tjgml\clion\CodingTest\cmake-build-debug C:\Users\tjgml\clion\CodingTest\cmake-build-debug C:\Users\tjgml\clion\CodingTest\cmake-build-debug\CMakeFiles\CodingTest.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\CodingTest.dir\depend


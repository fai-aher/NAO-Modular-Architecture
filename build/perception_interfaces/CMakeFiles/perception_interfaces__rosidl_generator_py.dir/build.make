# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/fai/nao_ws/src/perception_interfaces

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/fai/nao_ws/build/perception_interfaces

# Include any dependencies generated for this target.
include CMakeFiles/perception_interfaces__rosidl_generator_py.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/perception_interfaces__rosidl_generator_py.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/perception_interfaces__rosidl_generator_py.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/perception_interfaces__rosidl_generator_py.dir/flags.make

CMakeFiles/perception_interfaces__rosidl_generator_py.dir/rosidl_generator_py/perception_interfaces/srv/_detect_objects_s.c.o: CMakeFiles/perception_interfaces__rosidl_generator_py.dir/flags.make
CMakeFiles/perception_interfaces__rosidl_generator_py.dir/rosidl_generator_py/perception_interfaces/srv/_detect_objects_s.c.o: rosidl_generator_py/perception_interfaces/srv/_detect_objects_s.c
CMakeFiles/perception_interfaces__rosidl_generator_py.dir/rosidl_generator_py/perception_interfaces/srv/_detect_objects_s.c.o: CMakeFiles/perception_interfaces__rosidl_generator_py.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/fai/nao_ws/build/perception_interfaces/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/perception_interfaces__rosidl_generator_py.dir/rosidl_generator_py/perception_interfaces/srv/_detect_objects_s.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/perception_interfaces__rosidl_generator_py.dir/rosidl_generator_py/perception_interfaces/srv/_detect_objects_s.c.o -MF CMakeFiles/perception_interfaces__rosidl_generator_py.dir/rosidl_generator_py/perception_interfaces/srv/_detect_objects_s.c.o.d -o CMakeFiles/perception_interfaces__rosidl_generator_py.dir/rosidl_generator_py/perception_interfaces/srv/_detect_objects_s.c.o -c /home/fai/nao_ws/build/perception_interfaces/rosidl_generator_py/perception_interfaces/srv/_detect_objects_s.c

CMakeFiles/perception_interfaces__rosidl_generator_py.dir/rosidl_generator_py/perception_interfaces/srv/_detect_objects_s.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/perception_interfaces__rosidl_generator_py.dir/rosidl_generator_py/perception_interfaces/srv/_detect_objects_s.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/fai/nao_ws/build/perception_interfaces/rosidl_generator_py/perception_interfaces/srv/_detect_objects_s.c > CMakeFiles/perception_interfaces__rosidl_generator_py.dir/rosidl_generator_py/perception_interfaces/srv/_detect_objects_s.c.i

CMakeFiles/perception_interfaces__rosidl_generator_py.dir/rosidl_generator_py/perception_interfaces/srv/_detect_objects_s.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/perception_interfaces__rosidl_generator_py.dir/rosidl_generator_py/perception_interfaces/srv/_detect_objects_s.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/fai/nao_ws/build/perception_interfaces/rosidl_generator_py/perception_interfaces/srv/_detect_objects_s.c -o CMakeFiles/perception_interfaces__rosidl_generator_py.dir/rosidl_generator_py/perception_interfaces/srv/_detect_objects_s.c.s

# Object files for target perception_interfaces__rosidl_generator_py
perception_interfaces__rosidl_generator_py_OBJECTS = \
"CMakeFiles/perception_interfaces__rosidl_generator_py.dir/rosidl_generator_py/perception_interfaces/srv/_detect_objects_s.c.o"

# External object files for target perception_interfaces__rosidl_generator_py
perception_interfaces__rosidl_generator_py_EXTERNAL_OBJECTS =

libperception_interfaces__rosidl_generator_py.so: CMakeFiles/perception_interfaces__rosidl_generator_py.dir/rosidl_generator_py/perception_interfaces/srv/_detect_objects_s.c.o
libperception_interfaces__rosidl_generator_py.so: CMakeFiles/perception_interfaces__rosidl_generator_py.dir/build.make
libperception_interfaces__rosidl_generator_py.so: libperception_interfaces__rosidl_typesupport_c.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/libgeometry_msgs__rosidl_typesupport_fastrtps_c.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/libgeometry_msgs__rosidl_typesupport_introspection_c.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/libgeometry_msgs__rosidl_typesupport_fastrtps_cpp.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/libgeometry_msgs__rosidl_typesupport_introspection_cpp.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/libgeometry_msgs__rosidl_typesupport_cpp.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/libgeometry_msgs__rosidl_generator_py.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/libstd_msgs__rosidl_typesupport_fastrtps_c.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/libstd_msgs__rosidl_typesupport_fastrtps_cpp.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/libstd_msgs__rosidl_typesupport_introspection_c.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/libstd_msgs__rosidl_typesupport_cpp.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/libstd_msgs__rosidl_generator_py.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/libservice_msgs__rosidl_typesupport_fastrtps_c.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/libservice_msgs__rosidl_typesupport_fastrtps_cpp.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/libservice_msgs__rosidl_typesupport_introspection_c.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/libservice_msgs__rosidl_typesupport_introspection_cpp.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/libservice_msgs__rosidl_typesupport_cpp.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/libservice_msgs__rosidl_generator_py.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_c.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_cpp.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/libbuiltin_interfaces__rosidl_generator_py.so
libperception_interfaces__rosidl_generator_py.so: libperception_interfaces__rosidl_generator_c.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/libgeometry_msgs__rosidl_typesupport_c.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/libgeometry_msgs__rosidl_generator_c.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/libstd_msgs__rosidl_typesupport_c.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/libstd_msgs__rosidl_generator_c.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/libservice_msgs__rosidl_typesupport_c.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/libservice_msgs__rosidl_generator_c.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/librosidl_typesupport_fastrtps_c.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/librosidl_typesupport_fastrtps_cpp.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/libfastcdr.so.2.2.4
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/librmw.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/librosidl_dynamic_typesupport.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/librosidl_typesupport_introspection_cpp.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/librosidl_typesupport_introspection_c.so
libperception_interfaces__rosidl_generator_py.so: /usr/lib/x86_64-linux-gnu/libpython3.12.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/libbuiltin_interfaces__rosidl_generator_c.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/librosidl_runtime_c.so
libperception_interfaces__rosidl_generator_py.so: /opt/ros/jazzy/lib/librcutils.so
libperception_interfaces__rosidl_generator_py.so: CMakeFiles/perception_interfaces__rosidl_generator_py.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/fai/nao_ws/build/perception_interfaces/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C shared library libperception_interfaces__rosidl_generator_py.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/perception_interfaces__rosidl_generator_py.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/perception_interfaces__rosidl_generator_py.dir/build: libperception_interfaces__rosidl_generator_py.so
.PHONY : CMakeFiles/perception_interfaces__rosidl_generator_py.dir/build

CMakeFiles/perception_interfaces__rosidl_generator_py.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/perception_interfaces__rosidl_generator_py.dir/cmake_clean.cmake
.PHONY : CMakeFiles/perception_interfaces__rosidl_generator_py.dir/clean

CMakeFiles/perception_interfaces__rosidl_generator_py.dir/depend:
	cd /home/fai/nao_ws/build/perception_interfaces && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fai/nao_ws/src/perception_interfaces /home/fai/nao_ws/src/perception_interfaces /home/fai/nao_ws/build/perception_interfaces /home/fai/nao_ws/build/perception_interfaces /home/fai/nao_ws/build/perception_interfaces/CMakeFiles/perception_interfaces__rosidl_generator_py.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/perception_interfaces__rosidl_generator_py.dir/depend


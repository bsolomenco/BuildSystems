# Description: C++ binaries linked with external library (static & shared)

cc_import(
  name = "MyLib",
  hdrs = glob(["externalLib/*.hpp"]),
  static_library = "externalLib/MyLib.a",
  shared_library = "externalLib/MyLib.so",
)

# staticBin will link to MyLib.a
cc_binary(
  name = "staticBin",
  srcs = glob(["*.cpp", "*.hpp"]),
  deps = [":MyLib"],
  linkstatic = 1, #default value
)

# sharedBin will link to MyLib.so
cc_binary(
  name = "sharedBin",
  srcs = glob(["*.cpp", "*.hpp", "externalLib/*.hpp"]),
  deps = [":MyLib"], #link with /usr/lib/libMyLib.so
  #linkopts = ["-v -Wl,-rpath=/home/s/Prj/BuildSystems/bazel/linkedWithExternalLib/externalLib"],
  #linkopts = ["-v -Wl,-rpath=/home/s/Prj/BuildSystems/bazel/linkedWithExternalLib/externalLib /home/s/Prj/BuildSystems/bazel/linkedWithExternalLib/externalLib/MyLib.so"],
  #linkopts = ["-v /home/s/Prj/BuildSystems/bazel/linkedWithExternalLib/externalLib/MyLib.so"], #link with an external lib with non-standard name
  linkstatic = 0,
)
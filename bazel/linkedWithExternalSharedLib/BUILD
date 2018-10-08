# Description: C++ binary linked with a an external static library
# (the .a & associated header should be in externalStaticLib/ subfolder)

cc_library(#external shared library wrapper
    name = "MyLib",
    srcs = ["externalSharedLib/MyLib.so"],                  #external shared library
    hdrs = glob(["externalSharedLib/*.hpp"]),               #associated headers
)
cc_binary(
    name = "linkedWithExternalSharedLib",
    srcs = glob(["*.cpp", "*.hpp"]),
    deps = [":MyLib"],                                      # cc_library name
)
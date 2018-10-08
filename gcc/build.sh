echo "----==== build static library from multiple files"
rm -rf bin/static
mkdir -p bin/static
pushd bin/static
g++ -c ../../src/MyLib/*.cpp                    #generate object files without PIC (.o)
ar rcs MyLib.a *.o                              #generate static library (.a)
popd

echo "----==== build shared library from multiple files; PIC = Position Independent Code"
rm -rf bin/shared
mkdir -p bin/shared
pushd bin/shared
g++ -c -fPIC ../../src/MyLib/*.cpp              #generate object files with PIC
popd
g++ -shared bin/shared/*.o -o bin/MyLib.so      #generate shared library (.so)

echo "----==== build executables"
pushd bin
g++ -c ../src/*.cpp
g++ *.o static/MyLib.a -o mainUsingStaticLib            #main (static linked with MyLib.a)
g++ *.o -Wl,-rpath=bin MyLib.so -o mainUsingSharedLib   #main (linked with bin/MyLib.so)
popd

echo "-----==== see dependencies"
#lld bin/mainUsingStaticLib #this is independent
#lld bin/mainUsingSharedLib #this depends on MuLib.so
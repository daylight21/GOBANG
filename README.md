#构建选项
cmake -G "Visual Studio 15 2017 Win64" ..

#编译选项
MSBuild.exe main.vcxproj property:Configuration=Debug
cmake --build .
msbuild Project.sln /t:Clean /p:Configuration=Debug
msbuild Project.sln /p:Configuration=Debug
cmake_minimum_required(VERSION  3.22)
project(simpleApi)
set(CMAKE_CXX_STANDARD 17)

add_executable(app 
    main.cpp
    ./Routes/requestAccess/requestAccess.cpp
    ./Routes/requestAccess/requestAccess.hpp
    )
include_directories(./Crow/include ./asio/asio/include)
include_directories(Routes/ Controllers/)
add_subdirectory(cpp-dotenv)
cmake_minimum_required(VERSION  3.22)
project(simpleApi)
set(CMAKE_CXX_STANDARD 17)

add_executable(app 
    main.cpp
    ./Routes/Routes.hpp
    ./Routes/mainRoute.cpp
    )
include_directories(./Crow/include ./asio/asio/include)
include_directories(Routes/ Controllers/)
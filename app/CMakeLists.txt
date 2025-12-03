cmake_minimum_required(VERSION  3.22)
project(simpleApi)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(cpp-dotenv)
add_executable(app 
    main.cpp
    ./Routes/requestAccess/requestAccess.cpp
    )
include_directories(./Crow/include ./asio/asio/include)
include_directories(Routes/ Controllers/)
target_link_libraries(app PRIVATE cpp_dotenv)
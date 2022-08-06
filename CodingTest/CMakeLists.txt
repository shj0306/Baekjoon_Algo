cmake_minimum_required(VERSION 3.20)
project(CodingTest)

set(CMAKE_CXX_STANDARD 17)

add_executable(coding StringCompress.cpp openchatting.cpp tuple.cpp my_tuple.cpp bad_User.cpp best_bad_User.cpp
        steppingstone.cpp hotelroom.cpp Union-Find.cpp crane.cpp
        2021카카오채용연계형1.cpp 2021카카오채용연계형2.cpp
        2021카카오채용연계형3.cpp 2021카카오채용연계형4.cpp
        2021kakaoblindrecruit1.cpp 2021kakaoblindrecruit2.cpp
        2021kakaoblindrecruit3.cpp 2021kakaoblindrecruit4.cpp
        2021kakaoblindrecruit4_floyd.cpp 2021kakaoblindrecruit5.cpp)

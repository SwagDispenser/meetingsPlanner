cmake_minimum_required(VERSION 3.30)
project(ooplblb)

set(CMAKE_CXX_STANDARD 20)

add_executable(ooplblb main.cpp
        Participant.cpp
        Participant.h
        Organizer.cpp
        Organizer.h
        RegularParticipant.cpp
        RegularParticipant.h
        Location.cpp
        Location.h
        Meeting.cpp
        Meeting.h
        VipParticipant.cpp
        VipParticipant.h
)



CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -pedantic-errors
CXXFLAGS += -Wall
LDFLAGS = -lboost_date_time
OBJS = main.o count_letters.o output_letters.o
SRCS = main.cpp count_letters.cpp output_letters.cpp
HEADERS = count_letters.hpp output_letters.hpp


#target

main: ${OBJS} ${HEADERS} 
	${CXX} ${CXXFLAGS} ${OBJS} -o main


${OBJS}:${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

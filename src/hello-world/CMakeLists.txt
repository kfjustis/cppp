# Author: Kynan Justis
# Date: May 15 2017

# Grab all the files in module and store as SRCS
file(GLOB SRCS *.cpp *.h)

# Make the executable and supply source files
add_executable(hello-world ${SRCS})

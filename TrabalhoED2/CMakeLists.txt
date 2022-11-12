# CMakeList.txt: projeto de CMake para TrabalhoED2, incluir origem e definir
# lógica específica a um projeto aqui.
#
cmake_minimum_required (VERSION 3.8)

project ("TrabalhoED2")

# Adicione a origem ao executável deste projeto.
add_executable (TrabalhoED2 "TrabalhoED2.cpp" "TrabalhoED2.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET TrabalhoED2 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Adicione testes e instale destinos, se necessário.

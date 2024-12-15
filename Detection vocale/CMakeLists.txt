cmake_minimum_required(VERSION 3.10)
project(PocketSphinxExample)

# Indiquer les répertoires contenant SphinxBase et PocketSphinx
set(SPHINXBASE_DIR "${CMAKE_SOURCE_DIR}/sphinxbase")
set(POCKETSPHINX_DIR "${CMAKE_SOURCE_DIR}/pocketsphinx")

# Ajouter les sous-répertoires pour construire SphinxBase et PocketSphinx
add_subdirectory(${SPHINXBASE_DIR})
add_subdirectory(${POCKETSPHINX_DIR})

# Inclure les fichiers d'en-tête
include_directories(${SPHINXBASE_DIR}/include ${POCKETSPHINX_DIR}/include)

# Ajouter le fichier source principal
add_executable(PocketSphinxExample main.c)

# Lier les bibliothèques
target_link_libraries(PocketSphinxExample pocketsphinx sphinxbase)

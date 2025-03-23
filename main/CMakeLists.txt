####################################################################################################
 #  @file     CMakeLists.txt
 #  @brief    Component Description
 #  @details  x
 #
 #  @section 	Detail
 #      See the build system documentation in IDF programming guide for more information about 
 #		component CMakeLists.txt files
 #
####################################################################################################

# Directory Build Configuration
idf_component_register(
				       SRCS         				# Component source files
				         "main.c" 

				       INCLUDE_DIRS        			# Public include directories

				       PRIV_INCLUDE_DIRS   			# Private include directories

				       REQUIRES            			# Public requirements (component names)

				       PRIV_REQUIRES       			# Private requirements

                      )


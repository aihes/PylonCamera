project( MyCamera )
cmake_minimum_required( VERSION 2.8.11 )
set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(ENV{PKG_CONFIG_PATH} /opt/local/lib/pkgconfig/:/usr/local/lib/pkgconfig)
set ( CMAKE_BUILD_TYPE debug )
add_definitions ( -Wall )
find_package ( Qt5 COMPONENTS  Core  Gui Widgets  )
find_package( Boost COMPONENTS log log_setup thread filesystem system thread)
include_directories (
	${CMAKE_SOURCE_DIR} ${CMAKE_CURRENT_BINARY_DIR}
	Qt5::Core Qt5::Gui Qt5::Core Qt5::Gui
	/opt/local/include
	/Library/Frameworks/pylon.framework/Headers/GenICam)
get_target_property(QtCore_location Qt5::Core LOCATION)
set ( MyCamera_HDRS
	
	)

set ( MyCamera_SRCS
	main.cpp
	mainwindow.cpp
	myfram.cpp
	)

set ( MyCamera_UIS
	mainwindow.ui
	myfram.ui
	)

#qt5_wrap_ui(UIS ${MyCamera_UIS})
qt5_wrap_ui(UIS ${MyCamera_UIS})
#qt5_wrap_ui
set ( MyCamera_MOCS
	mainwindow.h
	myfram.h
	)
qt5_wrap_cpp(MOCS ${MyCamera_MOCS})

add_executable ( MyCamera ${MyCamera_SRCS} ${UIS} ${RSCS} ${TRS} ${MOCS} )
target_link_libraries ( MyCamera  Qt5::Core Qt5::Gui Qt5::Widgets
		${Boost_THREAD_LIBRARY}
		${Boost_SYSTEM_LIBRARY}
		${PYLON_LIBRARY}
		)

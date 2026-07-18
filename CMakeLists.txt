cmake_minimum_required(VERSION 3.19)
project(DocRider LANGUAGES CXX)

find_package(Qt6 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(DocRider
    WIN32 MACOSX_BUNDLE

    # Main
    Global.hpp
    Logger.cpp
    Logger.hpp
    main.cpp

    # UI
    UI/MainWindow.cpp
    UI/MainWindow.hpp
    UI/MainWindow.ui
    Doc/ToDo.txt
    UI/DlgEditMachine.hpp UI/DlgEditMachine.cpp UI/DlgEditMachine.ui
    Doc/Notes.txt
)

target_link_libraries(DocRider
    PRIVATE
        Qt::Core
        Qt::Widgets
)

install(TARGETS DocRider
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET DocRider
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})

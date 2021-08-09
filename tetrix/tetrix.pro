QT += widgets

HEADERS       = \
                lateralboard.h \
                line.h \
                mainboard.h \
                window.h
SOURCES       = main.cpp \
                lateralboard.cpp \
                line.cpp \
                mainboard.cpp \
                window.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/widgets/tetrix
INSTALLS += target

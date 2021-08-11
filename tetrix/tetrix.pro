QT += widgets

HEADERS       = \
                graphics_h/line.h \
                projections_h/lateralboard.h \
                projections_h/mainboard.h \
                window.h
SOURCES       = main.cpp \
                graphics/line.cpp \
                projections/lateralboard.cpp \
                projections/mainboard.cpp \
                window.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/widgets/tetrix
INSTALLS += target

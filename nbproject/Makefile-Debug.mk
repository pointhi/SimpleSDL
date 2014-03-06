#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/src/Color.o \
	${OBJECTDIR}/src/DrawingArea.o \
	${OBJECTDIR}/src/EventHandler.o \
	${OBJECTDIR}/src/General.o \
	${OBJECTDIR}/src/Image.o \
	${OBJECTDIR}/src/Surface.o \
	${OBJECTDIR}/src/Time.o \
	${OBJECTDIR}/src/Window.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=-lSDL -lSDL_gfx -lSDL_image

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libSimpleSDL.${CND_DLIB_EXT}

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libSimpleSDL.${CND_DLIB_EXT}: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libSimpleSDL.${CND_DLIB_EXT} ${OBJECTFILES} ${LDLIBSOPTIONS} -shared -fPIC

${OBJECTDIR}/src/Color.o: src/Color.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -I/usr/include/SDL -fPIC  -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/Color.o src/Color.cpp

${OBJECTDIR}/src/DrawingArea.o: src/DrawingArea.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -I/usr/include/SDL -fPIC  -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/DrawingArea.o src/DrawingArea.cpp

${OBJECTDIR}/src/EventHandler.o: src/EventHandler.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -I/usr/include/SDL -fPIC  -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/EventHandler.o src/EventHandler.cpp

${OBJECTDIR}/src/General.o: src/General.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -I/usr/include/SDL -fPIC  -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/General.o src/General.cpp

${OBJECTDIR}/src/Image.o: src/Image.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -I/usr/include/SDL -fPIC  -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/Image.o src/Image.cpp

${OBJECTDIR}/src/Surface.o: src/Surface.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -I/usr/include/SDL -fPIC  -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/Surface.o src/Surface.cpp

${OBJECTDIR}/src/Time.o: src/Time.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -I/usr/include/SDL -fPIC  -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/Time.o src/Time.cpp

${OBJECTDIR}/src/Window.o: src/Window.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -I/usr/include/SDL -fPIC  -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/Window.o src/Window.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libSimpleSDL.${CND_DLIB_EXT}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc

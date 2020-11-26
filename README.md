StickFright
===========================

##A Very simple 3D FPS Game


###Installation:
####Depends:

g++ :
9.0+ 

clang :
4.6+

make :
4.0+

cmake :
3.15+

These versions works well, but it doesn't says other versions mustn't work.
If you have older versions and the build fails, please update the compiler, make and cmake.

&nbsp;
####Ubuntu Linux:


Then, try these commands:

sudo apt-get install libgl1-mesa-dev

sudo apt-get install libglu1-mesa-dev

sudo apt-get install libglut-dev

if the third command failed, try:

sudo apt-get install freeglut3-dev


####MacOS:

MacOS has integrated a OpenGL 2.1.


####Windows:

Not implemented.




####Run:

cmake . && make && ./StickFright
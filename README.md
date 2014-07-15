OpenGL C++ Binding
====

ToDo: Renvew 

Some first measurements (glbinding vs. glew):

 * glewInit(): 4.93557 ms
 * gl::initialize(): 2.88546 ms

10,000 times executing a mini example (creating and compiling a program, rendering a quad)

 * glew calls: 1430.28 ms
 * glbinding calls: 1465.28 ms

with error checks

 * glew calls with error checks: 1454.37 ms
 * glbinding calls with check error (after-callback): 1518.62 ms

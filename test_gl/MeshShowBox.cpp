
#include <GL/glut.h>

#include "MeshShowBox.hpp"
#include <iostream>
namespace mchloesh {
void MeshShowBox::mydisplay(){
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glVertex2f(-0.5, -0.5);
    glVertex2f(-0.5, 0.5);
    glVertex2f(0.5, 0.5);
    glVertex2f(0.5, -0.5);
    glEnd();
    glFlush();
}
void MeshShowBox::create_window(){
    int argc = 1;
    char *argv[1] = {(char*)"Something"};
   
    glutInit(&argc, argv);
    glutCreateWindow("simple");
    glutDisplayFunc(mydisplay);
    glutMainLoop();
}


}

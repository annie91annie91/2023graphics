#include <GL/glut.h>
void display()
{
    //glColor3f(1,1,1);
    glBegin(GL_POLYGON);
        glColor3f(1,1,1);   glVertex2f(0,1);
        glColor3f(0.5,0,0.5); glVertex2f(-1,-1);
        glColor3f(0.8,0,0.8);   glVertex2f(1,-1);
    glEnd();
    glColor3f(1,0,0.6);
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week02");
    glutDisplayFunc(display);
    glutMainLoop();
}


#include <GL/glut.h>
void display()
{
    glColor3f(1,1,1);
    glutSolidTeapot(0.3);
    glColor3f(1,0,0.6);
    glutSolidTeapot(0.2);
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

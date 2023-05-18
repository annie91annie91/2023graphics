#include <GL/glut.h>
float angle=0;
void timer(int t)
{
    glutTimerFunc(500,timer,t+1);
    angle+=90;
    glutPostRedisplay();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glRotatef(angle,0,0,1);
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();  //交換顯示
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);  //設定顯示模式
    glutCreateWindow("week14");  //視窗名稱

    glutTimerFunc(3000,timer,0);
    glutDisplayFunc(display);  //顯示的函式

    glutMainLoop();  //主要迴圈最後
}

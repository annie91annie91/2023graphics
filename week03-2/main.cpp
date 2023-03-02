#include <GL/glut.h>
float X=0,Y=0,Z=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();  //備份矩陣
      glTranslatef(X,Y,Z);  //改變矩陣
      glutSolidTeapot(0.3);
    glPopMatrix();  //還原矩陣

    glutSwapBuffers();
}
void mouse(int button,int state,int x,int y)
{
    X=(x-150)/150.0;
    Y=-(y-150)/150.0;
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);  //設定顯示模式
    glutCreateWindow("week03");  //視窗名稱
    glutMouseFunc(mouse);
    glutDisplayFunc(display);  //顯示的函式
    glutMainLoop();  //主要迴圈最後
}

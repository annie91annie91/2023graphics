#include <GL/glut.h>
void display()
{
    glPushMatrix();  //備份矩陣
      glTranslatef(0.5,0.5,0);  //改變矩陣
      glutSolidTeapot(0.3);
    glPopMatrix();  //還原矩陣

    glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);  //設定顯示模式
    glutCreateWindow("week03");  //視窗名稱
    glutDisplayFunc(display);  //顯示的函式
    glutMainLoop();  //主要迴圈最後
}

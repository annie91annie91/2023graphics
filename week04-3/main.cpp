#include <GL/glut.h>
float angle = 0;  //全域變數 angle角度
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);  //清畫面
    glPushMatrix();
        glTranslatef(0.5,0,0);  //出現在畫面右邊
        glRotatef(angle,0,1,0);  //轉angle度
        glColor3f(0,0,1);  //藍色
        glutSolidTeapot(0.3);
    glPopMatrix();  //還原矩陣
    glutSwapBuffers();  //交換顯示
    angle++;
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);  //設定顯示模式
    glutCreateWindow("week04");  //視窗名稱

    glutDisplayFunc(display);  //顯示的函式
    glutIdleFunc(display);  //重畫畫面
    glutMainLoop();  //主要迴圈最後
}

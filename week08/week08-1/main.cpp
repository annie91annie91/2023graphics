#include <GL/glut.h>
#include "glm.h"
GLMmodel * pmodel = NULL;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    if(pmodel==NULL)
    {
        pmodel=glmReadOBJ("circle.obj");  //模型檔名
        glmUnitize(pmodel);  //縮放成單位大小
    }
    glmDraw(pmodel,GLM_SMOOTH|GLM_MATERIAL);

    //glutSolidTeapot(0.3);
    glutSwapBuffers();  //交換顯示
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);  //設定顯示模式
    glutCreateWindow("week08");  //視窗名稱
    glutDisplayFunc(display);  //顯示的函式
    glutMainLoop();  //主要迴圈最後
}

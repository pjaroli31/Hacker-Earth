#include <stdio.h>
#include <math.h>
#include <GL/glut.h>
/*
 c0ded by (C) Ajith Kp (C) (R) _TERMINAL_CODERS_ (R)
*/
double pi = 3.14;
void circle() {
 glColor3f(1.0, 0.0, 0.0);
 glPointSize(2.0);
 float r = 100;
 float x = 0, y = r;
 float p = 1 - r;
 glBegin(GL_POINTS);
 int i, j = 0;
 double A = 3.14, X, Y;
 for (i = 0; i <= 200; i++)
 {
    glVertex2i(i, 0);
    X = i*cos(-A/4) - j*sin(-A/4);
    Y = i*sin(A/4) + j*cos(A/4);
    glVertex2d(X,Y);  
 }
 for (j = 0; j <= 100; j++)
 {
  //glVertex2i(0,j);
 }

 glEnd();
 glFlush();
}

int main(int argc, char ** argv) {
 glutInit(&argc, argv);
 glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
 glutInitWindowSize(500, 500);
 glutInitWindowPosition(100, 100);
 glutCreateWindow("Line Draw OpenGL");
 
 glClearColor(1.0, 1.0, 1.0, 1.0);
 glClear(GL_COLOR_BUFFER_BIT);
 gluOrtho2D(-250, 250, -250, 250);
 glMatrixMode(GL_PROJECTION);
 glViewport(0, 0, 500, 500);
 
 glutDisplayFunc(circle);
 glutMainLoop();
 return 0;
}
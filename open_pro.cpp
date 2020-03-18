#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<GL/glut.h>

void init()
{
  gluOrtho2D(0,499,0,499);
  glClearColor(1,1,1,0);
}
void display()
{
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(1,1,0);
  int i;
  double angle;
  glPointSize(2);
  glBegin(GL_LINES);
  for(i=0;i<12;i++)
  {
    angle=3.14/6*i;
    glVertex2f(10*cos(angle),10*sin(angle));
    glVertex2f(20*cos(angle),20*sin(angle));
  }
  glEnd();
  glFlush();
}
void main()
{
  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
  glutInitWindowSize(500,500);
  glutInitWindowPosition(200,200);
  glutCreateWindow("Circle");
  init();
  glutDisplayFunc(display);
  glutMainLoop();
}

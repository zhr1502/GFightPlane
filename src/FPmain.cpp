#include<bits/stdc++.h>
#ifdef WIN32
    #include<windows.h>
#endif
#include<GL/glut.h>
#include<GL/freeglut.h>
using namespace std;
int plane_num;
int stage_now;
/*
0 init windows
1 place own plane
2 waiting for other placing plane
3 choose place to attack
4 waiting for others attack
5 game finished
*/
int target_x=1,target_y=1,target_face=1;
#include"FPplane.hpp"
#include"FPUI.hpp"
#include"serialize.hpp"
#include"parameter.hpp"
int main(int argc,char **argv){
	init(argc,argv);
	stage_now=0;
	create_plane();
	Button[++Buttonum].create_button(LeftEdgeAxis,TopAxis-1,10,0.9,1);
	glutMainLoop();
	printf("end\n");
	char ch=getchar();
	DestroyWindow();
    return 0;
}

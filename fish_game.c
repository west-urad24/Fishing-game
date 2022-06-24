/*
魚つりゲーム
*/

#include <stdio.h>
#include <math.h>
#include <handy.h>
#include<stdlib.h>
#include <time.h>



void leftfish1(double x1,double y1,double r1){
	int i;
	HgSetColor(HG_RED); // 赤色
	HgSetFillColor(HG_RED);
	HgFanFill(x1, y1, r1, 1.25*M_PI, 0.75*M_PI, 0); // アタマを描く
	HgMoveTo(x1+r1, y1); // 胴骨
	HgLineTo(x1+r1*3.0, y1); // 胴骨
	HgLineTo(x1+r1*4.0, y1-r1); // 尾びれ
	HgMoveTo(x1+r1*3.0, y1);
	HgLineTo(x1+r1*4.0, y1+r1); // 尾びれ
	HgSetFillColor(HG_WHITE); // 白色
	HgCircleFill(x1+r1/4.0, y1+r1/1.5, r1/5.0, 0); // 目を入れる
	HgSetColor(HG_RED); // 赤色
	for(i=0; i<5; i++) { // 胴骨
		HgLine(x1+r1*1.2+i*r1/3.0, y1-r1/2.0,x1+r1*1.2+i*r1/3.0, y1+r1/2.0);
	}
}

void rightfish1(double x1,double y1,double r1){//4/7　+-の値を変更して右方向関数作成
	int i;
	HgSetColor(HG_RED); // 赤色
	HgSetFillColor(HG_RED);
	HgFanFill(x1, y1, r1, 0.25*M_PI, 1.75*M_PI, 0); // アタマを描く
	HgMoveTo(x1-r1, y1); // 胴骨
	HgLineTo(x1-r1*3.0, y1); // 胴骨
	HgLineTo(x1-r1*4.0, y1+r1); // 尾びれ
	HgMoveTo(x1-r1*3.0, y1);
	HgLineTo(x1-r1*4.0, y1-r1); // 尾びれ
	HgSetFillColor(HG_WHITE); // 白色
	HgCircleFill(x1+r1/4.0, y1+r1/1.5, r1/5.0, 0); // 目を入れる
	HgSetColor(HG_RED); // 赤色
	for(i=0; i<5; i++) { // 胴骨
		HgLine(x1-r1*1.2-i*r1/3.0, y1-r1/2.0, x1-r1*1.2-i*r1/3.0, y1+r1/2.0);
	}
}

void leftfish2(double x2,double y2,double r2){
	int i;
	HgSetColor(HG_RED); // 赤色
	HgSetFillColor(HG_RED);
	HgFanFill(x2, y2, r2, 1.25*M_PI, 0.75*M_PI, 0); // アタマを描く
	HgMoveTo(x2+r2, y2); // 胴骨
	HgLineTo(x2+r2*3.0, y2); // 胴骨
	HgLineTo(x2+r2*4.0, y2-r2); // 尾びれ
	HgMoveTo(x2+r2*3.0, y2);
	HgLineTo(x2+r2*4.0, y2+r2); // 尾びれ
	HgSetFillColor(HG_WHITE); // 白色
	HgCircleFill(x2+r2/4.0, y2+r2/1.5, r2/5.0, 0); // 目を入れる
	HgSetColor(HG_RED); // 赤色
	for(i=0; i<5; i++) { // 胴骨
		HgLine(x2+r2*1.2+i*r2/3.0, y2-r2/2.0,x2+r2*1.2+i*r2/3.0, y2+r2/2.0);
	}
}

void rightfish2(double x2,double y2,double r2){//4/7　+-の値を変更して右方向関数作成
	int i;
	HgSetColor(HG_RED); // 赤色
	HgSetFillColor(HG_RED);
	HgFanFill(x2, y2, r2, 0.25*M_PI, 1.75*M_PI, 0); // アタマを描く
	HgMoveTo(x2-r2, y2); // 胴骨
	HgLineTo(x2-r2*3.0, y2); // 胴骨
	HgLineTo(x2-r2*4.0, y2+r2); // 尾びれ
	HgMoveTo(x2-r2*3.0, y2);
	HgLineTo(x2-r2*4.0, y2-r2); // 尾びれ
	HgSetFillColor(HG_WHITE); // 白色
	HgCircleFill(x2+r2/4.0, y2+r2/1.5, r2/5.0, 0); // 目を入れる
	HgSetColor(HG_RED); // 赤色
	for(i=0; i<5; i++) { // 胴骨
		HgLine(x2-r2*1.2-i*r2/3.0, y2-r2/2.0, x2-r2*1.2-i*r2/3.0, y2+r2/2.0);
	}
}

void leftfish3(double x3,double y3,double r3){
	int i;
	HgSetColor(HG_RED); // 赤色
	HgSetFillColor(HG_RED);
	HgFanFill(x3, y3, r3, 1.25*M_PI, 0.75*M_PI, 0); // アタマを描く
	HgMoveTo(x3+r3, y3); // 胴骨
	HgLineTo(x3+r3*3.0, y3); // 胴骨
	HgLineTo(x3+r3*4.0, y3-r3); // 尾びれ
	HgMoveTo(x3+r3*3.0, y3);
	HgLineTo(x3+r3*4.0, y3+r3); // 尾びれ
	HgSetFillColor(HG_WHITE); // 白色
	HgCircleFill(x3+r3/4.0, y3+r3/1.5, r3/5.0, 0); // 目を入れる
	HgSetColor(HG_RED); // 赤色
	for(i=0; i<5; i++) { // 胴骨
		HgLine(x3+r3*1.2+i*r3/3.0, y3-r3/2.0,x3+r3*1.2+i*r3/3.0, y3+r3/2.0);
	}
}

void rightfish3(double x3,double y3,double r3){//4/7　+-の値を変更して右方向関数作成
	int i;
	HgSetColor(HG_RED); // 赤色
	HgSetFillColor(HG_RED);
	HgFanFill(x3, y3, r3, 0.25*M_PI, 1.75*M_PI, 0); // アタマを描く
	HgMoveTo(x3-r3, y3); // 胴骨
	HgLineTo(x3-r3*3.0, y3); // 胴骨
	HgLineTo(x3-r3*4.0, y3+r3); // 尾びれ
	HgMoveTo(x3-r3*3.0, y3);
	HgLineTo(x3-r3*4.0, y3-r3); // 尾びれ
	HgSetFillColor(HG_WHITE); // 白色
	HgCircleFill(x3+r3/4.0, y3+r3/1.5, r3/5.0, 0); // 目を入れる
	HgSetColor(HG_RED); // 赤色
	for(i=0; i<5; i++) { // 胴骨
		HgLine(x3-r3*1.2-i*r3/3.0, y3-r3/2.0, x3-r3*1.2-i*r3/3.0, y3+r3/2.0);
	}
}

int main() {
	int i;
	double x1, y1, r1, dx1, dy1;
	double x2, y2, r2, dx2, dy2;
	double x3, y3, r3, dx3, dy3;
	int key;
	int random;//ランダムな確率変数
	double random_x,random_y;

	srand((unsigned) time(NULL));
	random = rand()%101+0;
	//printf("%d\n",random);

	HgOpen(700.0, 700.0);

	x1= rand()%600+50; y1= rand()%300+100; // x, y 座標の初期設定
	r1=30.0;        // アタマの半径を決める
	dx1=-7.0;   // x 方向の移動速度
	dy1=1.0;    // y 方向の移動速度

	x2= rand()%600+50; y2= rand()%300+100; // x, y 座標の初期設定
	r2=25.0;        // アタマの半径を決める
	dx2=-8.0;   // x 方向の移動速度
	dy2=1.0;    // y 方向の移動速度

	x3= rand()%600+50; y3= rand()%300+100; // x, y 座標の初期設定
	r3=20.0;        // アタマの半径を決める
	dx3=-6.0;   // x 方向の移動速度
	dy3=1.0;    // y 方向の移動速度

	int distance_1;//糸と魚1の口の距離
	int distance_2;//糸と魚2の口の距離
	int distance_3;//糸と魚3の口の距離

	while(1) {
		HgClear();          // 画面を消去

		HgSetColor(HG_SKYBLUE); //海
		HgSetFillColor(HG_SKYBLUE);
		HgBox(0,0,700,400);
		HgBoxFill(0,0,700,400,1);

		HgSetColor(HG_GRAY); //堤防
		HgSetFillColor(HG_GRAY);
		HgBox(600,400,100,50);
		HgBoxFill(600,400,100,50,1);

		HgSetColor(HG_BLACK); //棒人間
		HgSetFillColor(HG_BLACK);
		HgCircleFill(620,500,10,1); // 目を入れる

		HgLine(620,490,620,470);//胴体
		HgLine(620,480,605,480);//左手
		HgLine(620,475,605,480);//右手
		HgLine(620,470,610,450);//左足
		HgLine(620,470,630,450);//右足
		HgLine(605,480,550,550);//竿
		HgLine(550,550,350,250);//糸
		HgSetFillColor(HG_BLACK); // 白色
		HgCircleFill(350,250,10, 0); // 餌

		distance_1= sqrt(((x1-350)*(x1-350)) + ((y1-250)*(y1-250)));//魚の口と餌の距離
		distance_2= sqrt(((x2-350)*(x2-350)) + ((y2-250)*(y2-250)));
		distance_3= sqrt(((x3-350)*(x3-350)) + ((y3-250)*(y3-250)));

		if(distance_1 <= 20.0){
			if(random > 60){
				HgText(300.0, 500.0, "CLEAR!");
				HgSetFont(HG_G,200);
				HgSleep(2.0);
				break;
			}else{
				HgText(300.0, 500.0, "NOT CLEAR");
				HgSetFont(HG_G,200);
				HgSleep(2.0);
				break;
			}
		}

		if(distance_2 <= 20.0){
			if(random > 60){
				HgText(300.0, 500.0, "CLEAR");
				HgSetFont(HG_G,200);
				HgSleep(2.0);
				break;
			}else{
				HgText(300.0, 500.0, "逃げられた、NOT CLEAR");
				HgSetFont(HG_G,200);
				HgSleep(2.0);
				break;
			}
		}

		if(distance_3 <= 20.0){
			if(random > 60){
				HgText(300.0, 500.0, "CLEAR");
				HgSetFont(HG_G,200);
				HgSleep(2.0);
				break;
			}else{
				HgText(300.0, 500.0, "NOT CLEAR");
				HgSetFont(HG_G,200);
				HgSleep(2.0);
				break;
			}
		}

		HgSleep(0.01);

		if( y1 < r1 || y1 > (400.0 - r1))//1匹目の魚
		dy1*=(-1.0);
		y1+= dy1;

		if( x1 < r1 || x1 > (700.0 - r1) )
		dx1*=(-1.0);
		x1+= dx1;

		if(dx1>0)
		rightfish1(x1,y1,r1);
		else
		leftfish1(x1,y1,r1);

		if( y2 < r2 || y2 > (400.0 - r2))//2匹目の魚
		dy2*=(-1.0);
		y2+= dy2;

		if( x2 < r2 || x2 > (700.0 - r2) )
		dx2*=(-1.0);
		x2+= dx2;

		if(dx2>0)
		rightfish2(x2,y2,r2);
		else
		leftfish2(x2,y2,r2);

		if( y3 < r3 || y3 > (400.0 - r3))//3匹目の魚
		dy3*=(-1.0);
		y3+= dy3;

		if( x3 < r3 || x3 > (700.0 - r3) )
		dx3*=(-1.0);
		x3+= dx3;

		if(dx3>0)
		rightfish3(x3,y3,r3);
		else
		leftfish3(x3,y3,r3);

		HgSleep(0.1); // 少し待つ
	}//while
}

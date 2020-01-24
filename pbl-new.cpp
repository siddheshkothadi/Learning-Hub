#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <mmsystem.h>

char chapter,topic;
char subject;
void mainn();
void maths();
void chemistry();
void computer();
void goback(char c);
void goback1(char c);
void goback2(char c);
void arr();
void point();
void corrosion();
void sets();

//main function
int main(void)
{
   int i=0,j=0;
   /* request auto detection */
   int gdriver = DETECT, gmode;
   initgraph(&gdriver, &gmode, "C:\\turboc3\\bgi");
   setbkcolor(CYAN);
   setfillstyle(SOLID_FILL,YELLOW);
   bar(0,0,640,480);
   setfillstyle(SOLID_FILL,CYAN);
   while (i<=450){
	bar(30,30,610,i);
	i=i+4.5;
	delay(7);
   }
   PlaySound(TEXT("sound/title2.wav"),NULL,SND_ASYNC);
   delay(700);
   setcolor(WHITE);
   settextstyle(10,0,6);
   delay(1000);
   outtextxy(120,100,"Learning Hub");
   setfillstyle(SOLID_FILL,WHITE);
    //bar();
   getch();
   getch();
   while (j<=480){
	bar(0,0,640,j);
	j=j+4.8;
	delay(7);
   }
   getch();
   getch();
   mainn();
   /* clean up */
   getch();
   closegraph();
   return 0;
}
//actual main function
void mainn(){
   setbkcolor(WHITE);
   cleardevice();
   setcolor(0);
    setfillstyle(SOLID_FILL,YELLOW);
    bar(20,35,620,45);
    settextstyle(10,0,6);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    bar(100,30,540,50);
    setfillstyle(SOLID_FILL,0);
    bar(0,38,640,42);
    outtextxy(190,15,"SUBJECTS");
   setfillstyle(SOLID_FILL,YELLOW);
   bar(375,135,415,180);
   bar(375,215,415,250);
   bar(375,295,415,330);
   setcolor(BLACK);
   setfillstyle(SOLID_FILL,CYAN);
   bar(0,137,413,203);
   bar(0,217,413,283);
   bar(0,297,413,363);
   setfillstyle(SOLID_FILL,WHITE);
   bar(0,143,407,197);
   bar(0,223,407,277);
   bar(0,303,407,357);
   settextstyle(9,0,3);
   outtextxy(22,155,"1. Computer Fundamentals");
   outtextxy(22,235,"2. Chemistry");
   outtextxy(22,315,"3. Mathematics");
   setcolor(BLACK);
   settextstyle(8,0,1);
   outtextxy(20,415, "->Enter 1 for Computer Fundamentals");
   outtextxy(20,435,"->Enter 2 for Chemistry");
   outtextxy(20,455,"->Enter 3 Mathematics");
   topic:
   subject = getch();
   switch(subject){
       case '1' :
           PlaySound(TEXT("sound/select1.wav"),NULL,SND_ASYNC);
           computer();
            break;
       case '2' :
           PlaySound(TEXT("sound/select1.wav"),NULL,SND_ASYNC);
           chemistry();
            break;
       case '3' :
           PlaySound(TEXT("sound/select1.wav"),NULL,SND_ASYNC);
           maths();
            break;
       default :
           PlaySound(TEXT("sound/back.wav"),NULL,SND_ASYNC);
           outtextxy(10,380,"Select Valid Option");
            goto topic;
   }

}

//subjects
void maths(){
    setbkcolor(WHITE);
    cleardevice();
	setcolor(0);
    setfillstyle(SOLID_FILL,YELLOW);
    bar(20,35,620,45);
    settextstyle(10,0,5);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    bar(80,30,560,50);
    setfillstyle(SOLID_FILL,0);
    bar(0,38,640,42);
    outtextxy(170,20,"MATHEMATICS");
	setcolor(BLUE);
    settextstyle(9,0,3);
    outtextxy(20,130,"TOPICS:");
    setcolor(BLACK);
    settextstyle(9,0,2);
    outtextxy(78,170,"1. Sets");
	goback1('m');
}
void chemistry(){
    setbkcolor(WHITE);
    cleardevice();
	setcolor(0);
    setfillstyle(SOLID_FILL,YELLOW);
    bar(20,35,620,45);
    settextstyle(10,0,5);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    bar(80,30,560,50);
    setfillstyle(SOLID_FILL,0);
    bar(0,38,640,42);
    outtextxy(190,20,"CHEMISTRY");
	setcolor(BLUE);
    settextstyle(9,0,3);
    outtextxy(20,130,"TOPICS:");
    setcolor(BLACK);
    settextstyle(9,0,2);
    outtextxy(78,170,"1. Corrosion");
    goback1('c');
}
void computer(){
    setbkcolor(WHITE);
    cleardevice();
	setcolor(0);
    setfillstyle(SOLID_FILL,YELLOW);
    bar(20,35,620,45);
    settextstyle(10,0,4);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    bar(80,30,560,50);
    setfillstyle(SOLID_FILL,0);
    bar(0,38,640,42);
    outtextxy(120,25,"Computer Fundamentals");
	setcolor(BLUE);
    settextstyle(9,0,3);
    outtextxy(20,130,"TOPICS:");
    setcolor(BLACK);
    settextstyle(9,0,2);
    outtextxy(78,170,"1. Array");
    outtextxy(78,220,"2. Pointer");
    goback1('f');
}

//go back functions
void goback(char subject){
    settextstyle(8,0,1);
	setcolor(0);
	outtextxy(10,440,"**Press 't' to  change topic");
	outtextxy(10,460,"**Press 's' to change the subject");
	topic = getch();
	switch(topic){
		case 't':
		     PlaySound(TEXT("sound/select4.wav"),NULL,SND_ASYNC);
		     if(subject == 'c'){
                chemistry();
		     }
		     else if(subject=='f'){
                computer();
		     }
		     else if(subject=='m'){
                maths();
		     }
		     break;
		case 's':
		    PlaySound(TEXT("sound/select3.wav"),NULL,SND_ASYNC);
            mainn();
            break;
        }
}
void goback1(char subject){
    settextstyle(8,0,1);
	setcolor(0);
	outtextxy(10,440,"**Press 't' to  change topic");
	outtextxy(10,460,"**Press 's' to change the subject");
	go_back:
	topic = getch();
	switch(topic){
		case 't':
		     PlaySound(TEXT("sound/select4.wav"),NULL,SND_ASYNC);
		     if(subject == 'c'){
                chemistry();
		     }
		     else if(subject=='f'){
                computer();
		     }
		     else if(subject=='m'){
                maths();
		     }
		     break;
		case 's':
		    PlaySound(TEXT("sound/select3.wav"),NULL,SND_ASYNC);
            mainn();
            break;
        case '1':
            PlaySound(TEXT("sound/select1.wav"),NULL,SND_ASYNC);
            if(subject == 'c'){
                corrosion();
		     }
		     else if(subject=='f'){
                arr();
		     }
		     else if(subject=='m'){
                sets();
		     }
		     break;
        case '2':
            PlaySound(TEXT("sound/select1.wav"),NULL,SND_ASYNC);
            point();
            break;
        default:
            PlaySound(TEXT("sound/back.wav"),NULL,SND_ASYNC);
            outtextxy(10,380,"Select a valid option!");
            goto go_back;
        }
}
void goback2(char subject){
    setbkcolor(WHITE);
    cleardevice();
    setfillstyle(SOLID_FILL,LIGHTRED);
    bar(89,130,515,140);
    setfillstyle(SOLID_FILL,GREEN);
    bar(89,160,515,170);
    setfillstyle(SOLID_FILL,RED);
    bar(89,190,515,200);
    setfillstyle(SOLID_FILL,DARKGRAY);
    bar(89,220,515,230);
    settextstyle(10,0,7);
    setcolor(BLACK);
    outtextxy(235,95,"END");
    outtextxy(250,150,"OF");
    outtextxy(200,205,"TOPIC");
    settextstyle(8,0,1);
	outtextxy(10,440,"**Press 't' to  change topic");
	outtextxy(10,460,"**Press 's' to change the subject");
    end_e:
	chapter = getch();
	switch(chapter){
		case 't':
		     PlaySound(TEXT("sound/select4.wav"),NULL,SND_ASYNC);
		     if(subject == 'c'){
                chemistry();
		     }
		     else if(subject=='f'){
                computer();
		     }
		     else if(subject=='m'){
                maths();
		     }
		     break;
		case 's':
		    PlaySound(TEXT("sound/select3.wav"),NULL,SND_ASYNC);
			mainn();
			break;
		default:
		    PlaySound(TEXT("sound/back.wav"),NULL,SND_ASYNC);
		    outtextxy(10,380,"Select a valid option!");
			goto end_e;

}}

//topics
void arr(){
    cleardevice();
    setcolor(0);
    setfillstyle(SOLID_FILL,YELLOW);
    bar(20,35,620,45);
    settextstyle(10,0,7);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    bar(100,30,540,50);
    setfillstyle(SOLID_FILL,0);
    bar(0,38,640,42);
    outtextxy(210,10,"ARRAY");
    setcolor(BLUE);
    settextstyle(9,0,3);
    outtextxy(10,80,"Definition:");
    setcolor(BLACK);
    settextstyle(9,0,2);
    outtextxy(28,120,"An array is a data structure consisting of a ");
    outtextxy(28,140,"a collection of similar elements. ");
    outtextxy(28,170,"Each array element is identified by at least one");
    outtextxy(28,190,"one array index or key.");
    outtextxy(28,220,"An array of characters is called 'string', whereas");
    outtextxy(28,240,"an array of integers is called simply an array.");
    goback('f');
    getch();
    cleardevice();
    setbkcolor(BLACK);
    setfillstyle(SOLID_FILL,0);
    bar(0,0,640,480);
    setcolor(WHITE);
    settextstyle(10,0,5);
    outtextxy(120,100,"LET'S SEE THE");
    outtextxy(60,150,"SYNTAX OF AN ARRAY");
    outtextxy(200,200,"IN 'C'.");
    goback('f');
    getch();
    cleardevice();
    setcolor(LIGHTGRAY);
    outtextxy(30,50,"//declaring arrays");
    setcolor(LIGHTGREEN);
    settextstyle(8,0,1);
    outtextxy(30,100,"...");
    setcolor(LIGHTGRAY);
    outtextxy(60,150,"//type arrayName [ arraySize ];");
    setcolor(WHITE);
    outtextxy(60,200,"char arrayName[arraySize];");
    setcolor(LIGHTGRAY);
    outtextxy(60,250,"//or");
    setcolor(WHITE);
    outtextxy(60,300,"int arrayName[arraySize];");
    setcolor(LIGHTGREEN);
    outtextxy(30,350,"...");
    goback('f');
    getch();
    cleardevice();
    setcolor(LIGHTGRAY);
    outtextxy(30,50,"//initializing arrays");
    setcolor(LIGHTGREEN);
    settextstyle(8,0,1);
    outtextxy(30,100,"...");
    setcolor(LIGHTGRAY);
    outtextxy(60,150,"//type arrayName[]=<value>;");
    setcolor(WHITE);
    outtextxy(60,200,"char arrayName[]=''stringValue'';");
    setcolor(LIGHTGRAY);
    outtextxy(60,250,"//for example::");
    setcolor(WHITE);
    outtextxy(60,300,"int arrayName[]={1,2,3};");
    setcolor(LIGHTGREEN);
    outtextxy(30,350,"...");
    goback('f');
    getch();
    cleardevice();
    setcolor(WHITE);
    settextstyle(10,0,4);
    outtextxy(200,100,"LET'S TAKE AN");
    outtextxy(40,150,"EXAMPLE TO PROPERLY UNDERSTAND");
    outtextxy(200,200,"THE CONCEPT OF");
    outtextxy(270,250,"ARRAY.");
    goback('f');
    getch();
    cleardevice();
    setcolor(LIGHTGRAY);
    outtextxy(30,50,"//consider the following example:");
    setcolor(LIGHTGREEN);
    settextstyle(8,0,1);
    outtextxy(30,150,"...");
    setcolor(LIGHTGRAY);
    outtextxy(60,200,"int balance[5] = {100, 2, 34, 70, 5};");
    setcolor(LIGHTGREEN);
    outtextxy(30,250,"...");
    setcolor(LIGHTGRAY);
    outtextxy(30,300,"/*Now, we'll see the indexing and memory location");
    outtextxy(30,325,"of this array*/");
    goback('f');
    getch();
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    outtextxy(10,100,"int balance[5] = {100, 2, 34, 70, 5};");
    setcolor(MAGENTA);
    outtextxy(10,180,"indexing-->");
    outtextxy(140,180,"   0     1     2      3     4");
    setcolor(BLACK);
    settextstyle(4,0,1);
    outtextxy(15,235,"balance");
    settextstyle(3,0,1);
    setcolor(RED);
    outtextxy(10,285,"memory location->    2000         2004         2008        2012         2016");
    bar(140,200,490,280);
    setfillstyle(SOLID_FILL, WHITE);
    bar(145,205,209,275);
    bar(214,205,278,275);
    bar(283,205,347,275);
    bar(352,205,416,275);
    bar(421,205,485,275);
    setcolor(BLACK);
    getch();
    getch();
    line(225,120,190,175);
    settextstyle(4,0,1);
    outtextxy(150,235,"100");
    getch();
    getch();
    line(264,120,250,175);
    outtextxy(237,235,"2");
    getch();
    getch();
    line(305,120,308,175);
    outtextxy(300,235,"34");
    getch();
    getch();
    line(353,120,380,175);
    outtextxy(369,235,"70");
    getch();
    getch();
    line(392,120,447,175);
    outtextxy(444,235,"5");
    goback('f');
    getch();
    goback2('f');
}
void point(){
    cleardevice();
    setcolor(0);
    setfillstyle(SOLID_FILL,YELLOW);
    bar(20,35,620,45);
    settextstyle(10,0,6);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    bar(100,30,540,50);
    setfillstyle(SOLID_FILL,0);
    bar(0,38,640,42);
    outtextxy(205,15,"POINTER");
    setcolor(BLUE);
    settextstyle(9,0,3);
    outtextxy(10,80,"Definition:");
    setcolor(BLACK);
    settextstyle(9,0,2);
    outtextxy(28,120,"Pointers in C language is a variable that stores/");
    outtextxy(28,140,"points the address of another variable.");
    outtextxy(28,170,"A pointer in C is used to allocate memory");
    outtextxy(28,190,"dynamically i.e. at run time.");
    outtextxy(28,220,"The pointer variable might be belonging to any of");
    outtextxy(28,240,"the data types such as int,float,etc.");
    goback('f');
    getch();
    cleardevice();
    setbkcolor(BLACK);
    setfillstyle(SOLID_FILL,0);
    bar(0,0,640,480);
    setcolor(WHITE);
    settextstyle(10,0,5);
    outtextxy(120,100,"LET'S SEE THE");
    outtextxy(60,150,"SYNTAX OF A POINTER");
    outtextxy(200,200,"IN 'C'.");
    goback('f');
    getch();
    cleardevice();
    setcolor(LIGHTGRAY);
    outtextxy(30,50,"//syntax of a pointer");
    setcolor(LIGHTGREEN);
    settextstyle(8,0,1);
    outtextxy(30,100,"...");
    setcolor(LIGHTGRAY);
    outtextxy(60,150,"//a pointer is represented by '*'");
    setcolor(WHITE);
    outtextxy(60,200,"int i=3,*j;");
    setcolor(LIGHTGRAY);
    outtextxy(60,250,"//address of i can be stored in j pointer as follows");
    setcolor(WHITE);
    outtextxy(60,300,"j=&i;");
    setcolor(LIGHTGREEN);
    outtextxy(30,350,"...");
    goback('f');
    getch();
    cleardevice();
    setcolor(WHITE);
    settextstyle(10,0,4);
    outtextxy(200,100,"LET'S TAKE AN");
    outtextxy(40,150,"EXAMPLE TO PROPERLY UNDERSTAND");
    outtextxy(200,200,"THE CONCEPT OF");
    outtextxy(270,250,"POINTER");
    goback('f');
    getch();
    cleardevice();
    setcolor(LIGHTGRAY);
    outtextxy(30,10," //consider the following example:");
    outtextxy(30,30," //address of i is 65524");
    setcolor(LIGHTGREEN);
    settextstyle(8,0,1);
    outtextxy(30,70,"...");
    setcolor(WHITE);
    outtextxy(60,90,"int i=3,*j;");
    outtextxy(60,110,"j=&i;");
    outtextxy(60,130,"printf(''%d \n'',&i);");
    outtextxy(60,150,"printf(''%d \n'',j);");
    outtextxy(60,170,"printf(''%d \n'',i);");
    outtextxy(60,190,"printf(''%d \n'',*(&i));");
    outtextxy(60,210,"printf(''%d'',*j);");
    setcolor(LIGHTGREEN);
    outtextxy(30,230,"...");
    setcolor(LIGHTGRAY);
    outtextxy(30,300,"/*OUTPUT:");
    outtextxy(30,320,"65524");
    outtextxy(30,340,"65524");
    outtextxy(30,360,"3");
    outtextxy(30,380,"3");
    outtextxy(30,400,"3 */");
    goback('f');
    getch();
    goback2('f');
}
void corrosion(){
    cleardevice();
    setcolor(0);
    setfillstyle(SOLID_FILL,YELLOW);
    bar(20,35,620,45);
    settextstyle(10,0,7);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    bar(80,30,560,50);
    setfillstyle(SOLID_FILL,0);
    bar(0,38,640,42);
    outtextxy(143,10,"CORROSION");
    setcolor(BLUE);
    settextstyle(9,0,3);
    outtextxy(10,80,"Definition:");
    setcolor(BLACK);
    settextstyle(9,0,2);
    outtextxy(28,120,"Corrosion is a natural process that converts a");
    outtextxy(28,140,"refined metal into a more chemically-stable form");
    outtextxy(28,160,"such as oxide, hydroxide, or sulfide.");
    outtextxy(28,190,"It is the gradual destruction of materials");
    outtextxy(28,210,"by chemical and/or electrochemical reaction");
    outtextxy(28,230,"with their environment.");
    goback('c');
    getch();
    cleardevice();
    setbkcolor(BLACK);
    setfillstyle(SOLID_FILL,0);
    bar(0,0,640,480);
    setcolor(WHITE);
    settextstyle(10,0,5);
    outtextxy(170,100,"LET'S SEE");
    outtextxy(60,150,"HOW RUSTING IN IRON");
    outtextxy(160,200,"TAKES PLACE!");
    goback('c');
    getch();
    setbkcolor(BLACK);
    cleardevice();
    readimagefile("images/1.jpg",0,100,640,380);
    getch();
    getch();
    readimagefile("images/2.jpg",0,100,640,380);
    getch();
    getch();
    readimagefile("images/3.jpg",0,100,640,380);
    getch();
    getch();
    readimagefile("images/4.jpg",0,100,640,380);
    getch();
    getch();
    readimagefile("images/5.jpg",0,100,640,380);
    getch();
    getch();
    readimagefile("images/6.jpg",0,100,640,380);
    getch();
    getch();
    readimagefile("images/7.jpg",0,100,640,380);
    getch();
    getch();
    readimagefile("images/8.jpg",0,100,640,380);
    getch();
    getch();
    readimagefile("images/9.jpg",0,100,640,380);
    getch();
    getch();
    readimagefile("images/10.jpg",0,100,640,380);
    getch();
    getch();
    readimagefile("images/11.jpg",0,100,640,380);
    getch();
    getch();
    goback2('c');
}
void sets(){
    cleardevice();
    setcolor(0);
    setfillstyle(SOLID_FILL,YELLOW);
    bar(20,35,620,45);
    settextstyle(10,0,7);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    bar(100,30,540,50);
    setfillstyle(SOLID_FILL,0);
    bar(0,38,640,42);
    outtextxy(230,10,"SETS");
    setcolor(BLUE);
    settextstyle(9,0,3);
    outtextxy(10,80,"Definition:");
    setcolor(BLACK);
    settextstyle(9,0,2);
    outtextxy(28,120,"A set is a well-defined collection of distinct");
    outtextxy(28,140,"objects, considered as an object in its own right. ");
    outtextxy(28,180,"For example, the numbers 2, 4, and 6 are distinct ");
    outtextxy(28,200,"objects when considered separately, but when");
    outtextxy(28,220,"they are considered collectively they form a single set");
    outtextxy(28,240,"of size three, written {2, 4, 6}.");
    goback('m');
    getch();
    cleardevice();
    setcolor(0);
    setfillstyle(SOLID_FILL,YELLOW);
    bar(20,35,620,45);
    settextstyle(10,0,7);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    bar(100,30,540,50);
    setfillstyle(SOLID_FILL,0);
    bar(0,38,640,42);
    outtextxy(230,10,"SETS");
    getch();
    getch();
    setcolor(BLUE);
    settextstyle(9,0,3);
    outtextxy(90,290,"A              B");
    setcolor(RED);
    circle(110,190,90);
    circle(110,190,89);
    circle(110,190,88);
    setcolor(CYAN);
    circle(230,190,90);
    circle(230,190,89);
    circle(230,190,88);
    getch();
    getch();
    setcolor(LIGHTRED);
    settextstyle(9,0,4);
    outtextxy(90,110,"10");
    outtextxy(50,150,"8");
    outtextxy(80,190,"4");
    outtextxy(100,230,"6");
    outtextxy(160,170,"2");
    outtextxy(230,120,"3");
    outtextxy(260,170,"5");
    outtextxy(210,220,"7");
    getch();
    getch();
    setcolor(BLACK);
    settextstyle(9,0,1);
    outtextxy(320,80,"These are two sets : A and B");
    outtextxy(330,110,"1.  The set A has even");
    outtextxy(330,130,"     numbers.");
    outtextxy(330,160,"2.  The set B has prime");
    outtextxy(330,180,"     numbers.");
    outtextxy(330,210,"3.  Elements of set A are :");
    outtextxy(330,230,"     2, 4, 6, 8, 10.");
    outtextxy(330,260,"4.  Elements of set B are :");
    outtextxy(330,280,"     2, 3, 5, 7.");
    getch();
    getch();
    setcolor(RED);
    settextstyle(9,0,3);
    outtextxy(200,340,"A = {2,4,6,8,10}");
    outtextxy(200,380,"B = {2,3,5,7}");
    goback('m');
    getch();
    cleardevice();
    setcolor(0);
    setfillstyle(SOLID_FILL,YELLOW);
    bar(20,35,620,45);
    settextstyle(10,0,3);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    bar(80,30,560,50);
    setfillstyle(SOLID_FILL,0);
    bar(0,38,640,42);
    outtextxy(110,30,"Intersection and Union of Sets");
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    bar(140,100,200,280);
    bar(320,100,620,280);
    setcolor(RED);
    circle(110,190,80);
    circle(110,190,79);
    circle(110,190,78);
    setcolor(CYAN);
    circle(230,190,80);
    circle(230,190,79);
    circle(230,190,78);
    setcolor(RED);
    circle(410,190,80);
    circle(410,190,79);
    circle(410,190,78);
    setcolor(CYAN);
    circle(530,190,80);
    circle(530,190,79);
    circle(530,190,78);
    setcolor(BLACK);
    getch();
    getch();
    line(170,280,170,320);
    line(470,280,470,320);
    settextstyle(9,0,2);
    outtextxy(105,320,"Intersection");
    outtextxy(440,320,"Union");
    settextstyle(9,0,3);
    getch();
    getch();
    outtextxy(120,350,"(A n B)");
    outtextxy(430,350,"(A u B)");
    goback('m');
    getch();
    cleardevice();
    setcolor(BLACK);
    settextstyle(4,0,2);
    outtextxy(90,10,"Consider three sets A, B and C:");
    getch();
    getch();
    settextstyle(9,0,2);
    setcolor(RED);
    outtextxy(255,140,"A");
    circle(260,140,80);
    circle(260,140,79);
    circle(260,140,78);
    getch();
    getch();
    setcolor(CYAN);
    outtextxy(380,140,"B");
    circle(380,140,80);
    circle(380,140,79);
    circle(380,140,78);
    getch();
    getch();
    setcolor(GREEN);
    outtextxy(317,230,"C");
    circle(320,230,80);
    circle(320,230,79);
    circle(320,230,78);
    getch();
    getch();
    setcolor(RED);
    outtextxy(30,350,"(A u B u C) = A + B + C - (A n B) - (B n C) -");
    outtextxy(30,375,"                      (A n C) + (A n B n C)");
    goback('m');
    getch();
    goback2('m');
}

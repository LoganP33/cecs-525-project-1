{\rtf1\ansi\ansicpg1252\cocoartf2513
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 MicrosoftSansSerif;\f1\froman\fcharset0 Times-Roman;}
{\colortbl;\red255\green255\blue255;\red0\green0\blue0;\red255\green255\blue255;}
{\*\expandedcolortbl;;\cssrgb\c0\c0\c0;\cssrgb\c100000\c100000\c100000\c0;}
\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\deftab720
\pard\pardeftab720\sa240\partightenfactor0

\f0\fs32 \cf2 \cb3 \expnd0\expndtw0\kerning0
//Project 1 Part 1\uc0\u8232 //Compile on Raspberry PI using the command \'91gcc P1-1.c\'92 to make sure there are no errors. \
//Compile on Raspberry PI using the command 'gcc -S P1-1.c' to generate Assembly listing. \
//Open the generated Assembly file named P1-1.s and fulfill part 1 requirements. 
\f1\fs24 \

\f0\fs32 //Global Data Types\uc0\u8232 signed char var1 = 1; \
unsigned char var2 = 2; \
signed int var3 = 3; \
unsigned int var4 = 4;\uc0\u8232 const int num = -10;\u8232 char wave[10]="goodbye!!!";\
void main() 
\f1\fs24 \

\f0\fs32 \{ \
	//Local Data Type\uc0\u8232 	int var5 = 5;\u8232 	//Various Loop Types for (var5;var5>0;var5--) \
	\{ \
		var1*=var1;\
		var1/=var1;\
		var1+=var1;\
		var1-=var1; 
\f1\fs24 \

\f0\fs32 	\} \
	do\
	\{ 
\f1\fs24 \

\f0\fs32 		var4-=1;\
	\}while(var4>0); 
\f1\fs24 \

\f0\fs32 	while(var3 == 3) 
\f1\fs24 \

\f0\fs32 	\{ 
\f1\fs24 \

\f0\fs32 	\}\
\} 
\f1\fs24 \cb1 \
\
\
}
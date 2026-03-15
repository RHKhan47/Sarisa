#include "iGraphics.h"
#include "bitmap_loader.h"

#define screenWidth 1200
#define screenHeight 600
#define jumpXY 10
#define  projectName "SaRiSa"

/*
 function iDraw() is called again and again by the system.
 \
 ||

 */

  char prince[7][22] = { "Hero\\HeroRun02.bmp", "Hero\\HeroRun03.bmp", "Hero\\HeroRun04.bmp", "Hero\\HeroRun05.bmp", "Hero\\HeroRun06.bmp", "Hero\\HeroRun07.bmp", "Hero\\HeroRun08.bmp" };
  
  char princeBack[7][22] = { "HeroREV\\HeroRun02.bmp", "HeroREV\\HeroRun03.bmp", "HeroREV\\HeroRun04.bmp", "HeroREV\\HeroRun05.bmp", "HeroREV\\HeroRun06.bmp", "HeroREV\\HeroRun07.bmp", "HeroREV\\HeroRun08.bmp" };
  
  char princeJumpL[10][27] = { "HeroJumpRev\\HeroJump01.bmp", "HeroJumpRev\\HeroJump02.bmp", "HeroJumpRev\\HeroJump03.bmp", "HeroJumpRev\\HeroJump04.bmp", "HeroJumpRev\\HeroJump05.bmp", "HeroJumpRev\\HeroJump06.bmp", "HeroJumpRev\\HeroJump07.bmp", "HeroJumpRev\\HeroJump08.bmp", "HeroJumpRev\\HeroJump09.bmp", "HeroJumpRev\\HeroJump01.bmp" };
  
  char princeJumpR[10][24] = { "HeroJump\\HeroJump01.bmp", "HeroJump\\HeroJump02.bmp", "HeroJump\\HeroJump03.bmp", "HeroJump\\HeroJump04.bmp", "HeroJump\\HeroJump05.bmp", "HeroJump\\HeroJump06.bmp", "HeroJump\\HeroJump07.bmp", "HeroJump\\HeroJump08.bmp", "HeroJump\\HeroJump09.bmp", "HeroJump\\HeroJump01.bmp" };
  
  char princeFight[5][26] = { "HeroFight\\HeroFight1.bmp", "HeroFight\\HeroFight2.bmp", "HeroFight\\HeroFight3.bmp", "HeroFight\\HeroFight4.bmp", "HeroFight\\HeroFight5.bmp"};
  
  char princeFightBack[5][28] = { "HeroFightRev\\HeroFight1.bmp", "HeroFightRev\\HeroFight2.bmp", "HeroFightRev\\HeroFight3.bmp", "HeroFightRev\\HeroFight4.bmp", "HeroFightRev\\HeroFight5.bmp" };
  
  char princeJumpUp[10][14] = { "HeroUp\\1.bmp", "HeroUp\\2.bmp", "HeroUp\\3.bmp", "HeroUp\\4.bmp", "HeroUp\\5.bmp", "HeroUp\\6.bmp", "HeroUp\\7.bmp", "HeroUp\\8.bmp", "HeroUp\\9.bmp", "HeroUp\\10.bmp" };

  char princeWallRun[13][18] = { "WallRun\\06.1.bmp", "WallRun\\06.2.bmp", "WallRun\\06.3.bmp", "WallRun\\06.4.bmp", "WallRun\\06.5.bmp", "WallRun\\06.6.bmp", "WallRun\\06.7.bmp", "WallRun\\06.8.bmp", "WallRun\\06.9.bmp", "WallRun\\06.10.bmp", "WallRun\\06.11.bmp", "WallRun\\06.12.bmp", "WallRun\\06.13.bmp" };
  
  char princeJumpDown[6][18] = { "JumpDown\\05.1.bmp", "JumpDown\\05.2.bmp", "JumpDown\\05.3.bmp", "JumpDown\\05.4.bmp", "JumpDown\\05.5.bmp", "JumpDown\\05.6.bmp" };
  
  char Background[3][22] = { "background\\Lvl1.1.bmp", "background\\Lvl1.2.bmp","background\\Lvl1.3.bmp"};
  
  char princeJumpDownRev[6][22] = { "JumpDownRev\\05.1.bmp", "JumpDownRev\\05.2.bmp", "JumpDownRev\\05.3.bmp", "JumpDownRev\\05.4.bmp", "JumpDownRev\\05.5.bmp", "JumpDownRev\\05.6.bmp" };
  
  char princeSlideR[6][16] = { "Slide//02.1.bmp", "Slide//02.2.bmp", "Slide//02.3.bmp", "Slide//02.4.bmp", "Slide//02.5.bmp", "Slide//02.6.bmp" };
  
  char princeSlideL[6][19] = { "SlideRev//02.1.bmp", "SlideRev//02.2.bmp", "SlideRev//02.3.bmp", "SlideRev//02.4.bmp", "SlideRev//02.5.bmp", "SlideRev//02.6.bmp" };
  
  char FallAni[6][27] = { "FallAni//HeroBending01.bmp", "FallAni//HeroBending02.bmp", "FallAni//HeroBending03.bmp", "FallAni//HeroBending04.bmp", "FallAni//HeroBending05.bmp", "FallAni//HeroBending06.bmp"};
  
  char princeStd[22] = { "Hero\\HeroRun01.bmp"};
  char princeStdBack[22] = { "HeroREV\\HeroRun01.bmp" };
  char princeBlock[19] = { "New\\HeroBlock.bmp"};
  char princeBlockB[19] = { "New\\HeroBlockB.bmp" };
  char gg[33] = { "GameOver//Game Project Main1.bmp" };
  
  int FallAniIndx=0;
  int princeRRunIndx = 0;
  int princeLRunIndx = 0;
  int princeJumpRIndx = 0;
  int princeJumpLIndx = 0;
  int princeFightIndx = 0;
  int princeFightBackIndx = 0;
  int princeJumpUpIndx = 0;
  int princeWallRunIndx = 0;
  int princeJumpDownIndx = 0;
  int princeJumpDownRevIndx = 0;
  int princeSlideRIndx = 0;
  int princeSlideLIndx = 0;
  int Animation1Indx = 0;
  int AniX ;
  int AniY ;
  int standct = 0;
  int Ren= 0;
  
  double princeX = 10;
  double princeY = 145;
  
  bool stand = true;
  bool leftRun = true;
  bool standFront = true;
  bool jump = false;
  bool runR = false;
  bool runL = false;
  bool jumpR = false;
  bool jumpL = false;
  bool sword = false;
  bool swordR = false;
  bool swordL = false;
  bool block = false;
  bool jumpUp = false;
  bool wRun = false;
  bool jumpDown = false;
  bool jumpDownRev = false;
  bool slide = false;
  bool slideL = false;
  bool slideR = false;
  bool Ani = false;
  bool fallAni = false;
  bool finish = false;
  //bool swordMove = false;

void iDraw()
{
	iClear();

	if (finish)                      //GameOver Interface
	{
		iShowBMP(0, 0, gg);

	}


	if (princeX == 10)
	//{

		//if (princeX > 1200)                                        //BackGround Rendering func + Animation
		{
		     // Ren++;

			switch (Ren)
			{
			case 1:princeY = 230;
				break;

			case 2:princeY = 150;
				break;

			}
			princeX = 10;

		
	}
	if (!finish)
	{

		iShowBMP(0, 0, Background[Ren]);

	}                             //Rendering Background
		

	if (Ani)
	{

		if (fallAni)
		{
			iShowBMP2(AniX, AniY, FallAni[FallAniIndx], 0);
			
		}


	}
	else if (slide && slideR)
	{
		iShowBMP2(princeX, princeY, princeSlideR[princeSlideRIndx], 0);

	}
	else if (slide && slideL)
	{
		iShowBMP2(princeX, princeY, princeSlideL[princeSlideLIndx], 0);
	}
	else if (jumpDownRev)
	{
		iShowBMP2(princeX, princeY, princeJumpDownRev[princeJumpDownRevIndx], 0);

	}
	else if (jumpDown)
	{
		iShowBMP2(princeX, princeY, princeJumpDown[princeJumpDownIndx], 0);

	}

	else if (wRun)
	{
		iShowBMP2(princeX, princeY, princeWallRun[princeWallRunIndx], 0);
	}

	else if (jumpUp)
	{
		iShowBMP2(princeX, princeY, princeJumpUp[princeJumpUpIndx], 0);
	}

	else if (jump && jumpR)
	{
			iShowBMP2(princeX, princeY, princeJumpR[princeJumpRIndx], 0);
	}
	else if (jump && jumpL)
	{
		  iShowBMP2(princeX, princeY, princeJumpL[princeJumpLIndx], 0);
	}
	else if (swordR && sword)
	{
		iShowBMP2(princeX, princeY, princeFight[princeFightIndx], 0);
	}
	else if ( swordL && sword)
	{ 
		iShowBMP2(princeX, princeY, princeFightBack[princeFightBackIndx], 0);
	}
	else if (swordR && block)
	{
		iShowBMP2(princeX, princeY, princeBlock, 0);
	
	}
	else if (swordL && block)
	{
		iShowBMP2(princeX, princeY, princeBlockB, 0);

	}	
	else
	{
		if (!stand)
		{
			iShowBMP2(princeX, princeY, prince[princeRRunIndx], 0);

			standFront = true;
		}

		else if (!leftRun)
		{

			iShowBMP2(princeX, princeY, princeBack[princeLRunIndx], 0);

			standFront = false;

		}
		else
		{
			if (standFront)
			{
				iShowBMP2(princeX, princeY, princeStd, 0);
			}
			else
			{
				iShowBMP2(princeX, princeY, princeStdBack, 0);
			}
		}

	}
	
	standct++;
	if (standct >= 90)
	{

		standct = 0;
		stand = true;
		leftRun = true;
	}


}

void iPassiveMouse(int x, int y)
{
	;
}


/*
 function iMouseMove() is called when the user presses and drags the mouse.
 (mx, my) is the position where the mouse pointer is.
 */
void iMouseMove(int mx, int my)
{

	//printf("X:%d  Y:%d", mx, my);
	//place your codes here
}

/*
 function iMouse() is called when the user presses/releases the mouse.
 (mx, my) is the position where the mouse pointer is.
 */
void iMouse(int button, int state, int mx, int my)
{

	printf("X=%d  Y=%d\n", mx, my);

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{

		if (finish)
		{
			if (mx >= 1040 && mx <= 1040 + 85 && my >= 70 && my <= 70 + 30)
			{
				finish = false;
				Ani = false;
				exit(0);
			}
		}

		sword = true;

	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{

		block = true;

	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_UP)
	{
		block = false;
	}

}


/*
 function iKeyboard() is called whenever the user hits a key in keyboard.
 key- holds the ASCII value of the key pressed.
 */
void iKeyboard(unsigned char key)
{
	if (key == 'q')
	{
		exit(0);
	}
	
	
	
	
	
	
	if (key == ' ')
	{

		switch (Ren)
		{
		
		case 0:
			
			if (princeX>230 && princeX<440 || princeX>=640)                              // Jump Func
			{

				if (!jump)
				{
					jump = true;
				}
			}
			break;

		case 1:
			
			if (princeX<530 && princeX>280 || (princeX>660 && princeY==239 && princeX<720)|| princeX >= 820)            // Jump Func
			{

				if (!jump)
				{
					jump = true;
				}
			}
			break;

		case 2:
			if (princeX>320)
			{

				if (!jump)
				{
					jump = true;
				}
			}
					
		}

	
	
	}
	
	if (key == 'd')                                                             // wall run func
	{

	 switch (Ren)
	  {
		case 0:
			if (princeX >= 710 && princeX <= 845 && princeY >= 120 && princeY <= 185)
			{

				wRun = true;
			}
			break;

		case 1:
			if (princeX > 200 && princeY != 239 && princeX<510 || princeX >= 810)
			{
				wRun = true;
			}
			break;
	  }


	}
	
	
	if (key == 's')                                                  //slide Func
	{
		switch (Ren)
		{

		//case 0:
			//if (!slide)
			//{
			//	slide = true;
			//}
			//break;

		
		case 1:
			if (!slide)
			{
				slide = true;
			}
			break;
		

	
		case 2:
			if (princeX >= 60 && princeX<250 || princeX>410 )
			{

				if (!slide)
				{
					slide = true;
				}
				break;
			}

	
		}



	}





}

/*
 function iSpecialKeyboard() is called whenver user hits special keys like-
 function keys, home, end, pg up, pg down, arraows etc. you have to use
 appropriate constants to detect them. A list is:
 GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
 GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
 GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
 GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
 */

void iSpecialKeyboard(unsigned char key)
{

  if (key == GLUT_KEY_END)
	{
		exit(0);
	}
  
  
  
  
  if (key == GLUT_KEY_LEFT)
  {
	 
	  
   switch (Ren)
	 {

	  case 0:

		  if (princeX != 130 && princeX != 550 || princeY!=154 )
		  {

			  if (!runL && !jump)                                                //left run func

			  {
				  runL = true;
				  jumpL = true;
				  swordL = true;
				  slideL = true;
				  swordR = false;
				  jumpR = false;
				  slideR = false;

			  }

		  }

		  break;
		  
	  case 1:
		  
		  
		  if (princeX != 200 && (princeX!=580 || princeY!=239))
		  {

			  if (!runL && !jump)                                                //left run func

			  {
				  runL = true;
				  jumpL = true;
				  swordL = true;
				  slideL = true;
				  swordR = false;
				  jumpR = false;
				  slideR = false;

			  }

		  }

		  break;

	  case 2:

		  if (princeX != 240)
		  {

			  if (!runL && !jump)                                                //left run func

			  {
				  runL = true;
				  jumpL = true;
				  swordL = true;
				  slideL = true;
				  swordR = false;
				  jumpR = false;
				  slideR = false;
				  

			  }

		  }
		  break;


	  }
  
  
  
  
  
  }




  if (key == GLUT_KEY_RIGHT)                                           //right run func
  {

	  switch (Ren)
	  {


	  case 0:


		  if (princeX != 120 &&( princeX != 650 || princeY!=70 ))      //|| princeY != 145
		  {

			  if (!runR && !jump)

			  {
				  runR = true;
				  jumpR = true;
				  swordR = true;
				  slideR = true;
				  swordL = false;
				  jumpL = false;
				  slideL = false;

			  }
		  }

			  break;
	  
	  case 1:

		  if (princeX != 160 && (princeX != 810 || princeY != 239))
		  {

			  if (!runR && !jump)

			  {
				  runR = true;
				  jumpR = true;
				  swordR = true;
				  slideR = true;
				  swordL = false;
				  jumpL = false;
				  slideL = false;

			  }

		  }

		  break;

	  case 2:
		  
		  if (princeX!=60)
		  {
			  if (!runR && !jump)

			  {
				  runR = true;
				  jumpR = true;
				  swordR = true;
				  slideR = true;
				  swordL = false;
				  jumpL = false;
				  slideL = false;

			  }

		  }
	 
	  
	  
	  
	  }
	  

  }
		  
		  		  
		 	 	  
  if (key == GLUT_KEY_UP)                                                                           //Jump up func
	
  {

	   switch (Ren)
	   {
	   
	   case 0:
		   if (princeX >= 500 && princeX<=530 && princeY==70)
		   {
			   jumpUp = true;
			   runR = false;
			   jumpR = false;
			   //swordR = false;
			   //swordL = false;
			   jumpL = false;
		   }

		   if (princeX >= 810 && princeX <= 820 && princeY == 70)
		   {
			   jumpUp = true;
			   runR = false;
			   jumpR = false;
			   //swordR = false;
			   //swordL = false;
			   jumpL = false;
		   }

		   break;

	   case 1:
		  
		   if (princeX <=550 && princeX>=540)
		   {
			  jumpUp = true;
			  runR = false;
			   jumpR = false;
			   //swordR = false;
			   //swordL = false;
			   jumpL = false;
		   }


	   }
	  

	}
   
  
  
  if (key == GLUT_KEY_DOWN)                                                            //Jump Down Func
   { 
	   switch (Ren)
	   {
	   
	   
	   case 0:
		   if (princeX == 120 && princeY == 145)
		   {
			   jumpDown = true;
		   }

		   if (princeX <= 550 && princeY == 154)                                        //jump Down Rev func
		   {
			   jumpDownRev = true;

		   }	    
		   break;
	   
	   case 1:
		 
		   if (princeX == 160 && princeY == 230)
		   {
			   jumpDown = true;
		   }

		   if (princeX == 580 && princeY == 239)
		   {
			  jumpDownRev = true;

		   }
		   break;


	   }
   }


}

void change(){


	if (jump && jumpR)                                                                            //Right JUmp
	  {
		princeX += jumpXY;
		princeJumpRIndx++;
		if (princeJumpRIndx >= 9)
		{
			princeJumpRIndx = 0;
			jump = false;
			//jumpRev = false;
			//jumpR = false;
		}
		else
		{
			if (princeJumpRIndx <= 4)
			{
				princeY += jumpXY;
			}
			else
			{
				princeY -= jumpXY;
			}
		 }

	   }

					

	if (jump && jumpL)                                                                             //Left Jump 
	{
		princeX -= jumpXY;                //>= 150 ? princeX - jumpXY : 150;
		princeJumpLIndx++;
		if (princeJumpLIndx >= 9)
		{
			princeJumpLIndx = 0;
			jump = false;
			//jumpL = false;
		}
		else
		{
			if (princeJumpLIndx <= 4)
			{
				princeY += jumpXY;
			}
			else
			{
				princeY -= jumpXY;
			}
		}
	}


	if (!block)
	{

		if (runR)                                                                       //Right Run
		{
			princeX += 10;

			princeRRunIndx++;

			if (princeRRunIndx >= 7)
			{

			  princeRRunIndx = 0;
			}

			stand = false;
			runR = false;

		}

	   if (runL)                                                                       //Left run
		{

			  princeX -= 10;

			  princeLRunIndx++;

			if (princeLRunIndx >= 7)
			{

			  princeLRunIndx = 0;
			}

			leftRun = false;
			runL = false;

		}

		
 }
	
	if (wRun)                                                                                 //Wall Run
	{
			princeX += 10;
			princeWallRunIndx++;

		 if (princeWallRunIndx >= 12)
		 {
			wRun = false;
			princeWallRunIndx = 0;
		 }
		else
		 {
			if (princeWallRunIndx < 6)
			{
				princeY += 4;
			}
			if (princeWallRunIndx > 6)
			{
				princeY -= 4;
			}
		  }

	}
  
	
	if (jumpDown)                                                                             //jump Down
     {
		princeX += 10;
		princeJumpDownIndx++;
		if (princeJumpDownIndx >= 6)
		 {
			jumpDown = false;
			princeJumpDownIndx = 0;
		 }
		else
		 {
			princeY -= 15;
					
		 }

	 }

	
	
	if (jumpDownRev)                                                              //Jump Down Rev
	{

		princeX -= 10;
		princeJumpDownRevIndx++;
		if (princeJumpDownRevIndx >= 6)
		{
			jumpDownRev = false;
			princeJumpDownRevIndx = 0;
		}
		else
		{
			princeY -= 18;

		}

	}

	 
	if (slide && slideR)                                                         // slide right
	{
		
		princeSlideRIndx++;
		
		if (princeSlideRIndx > 6)
		{
			princeSlideRIndx = 0;
			slide =false;
			slideR = false;

		}
		else
		{
			princeX += 30;
		}

	}

	if (slide && slideL)                                                         // slide Left
	{

		princeSlideLIndx++;

		if (princeSlideLIndx >=  6)
		{
			princeSlideLIndx = 0;
			slide = false;
			slideL = false;

		}
		else
		{
			princeX -= 35;
		}

	}


}


 
 void swordfunc(){

	if ( swordR && sword)                                                                      //sword move 1 Right
	{
		princeFightIndx++;
		//princeX += 10;
		if (princeFightIndx >= 4)
		{
			princeFightIndx = 0;
			sword = false;
			//swordR = false;
			
		}

	}
	if (swordL && sword)                                                                      //sword Move 1  left
	{
		princeFightBackIndx++;
		//princeX += 10;
		if (princeFightBackIndx >= 4)
		{
			princeFightBackIndx = 0;
			sword = false;
			//swordL = false;
		}
	}

	if (jumpUp)                                                                          //jump up Right
	{
		princeJumpUpIndx++;
		if (princeJumpUpIndx < 8)
		{
			princeY += 12;
		}
		if (princeJumpUpIndx >= 8)
		{
			princeX += 20;
		}
		if (princeJumpUpIndx >= 10)
		{
			princeJumpUpIndx = 0;
			jumpUp = false;
			//jump = false;
		}
	}
}

 void animation()
 {


	 if (fallAni)
	 {
		 FallAniIndx++;
		 AniY -= 17;
		 if (FallAniIndx >= 6)
		 {
			 FallAniIndx = 0;
			 fallAni = false;
			// Ani = false;
			 finish = true;
			 AniY = princeY;
		 }
	 }

	 if (Ren == 0)                                                                  //Animation for 1st display
	 {
		 if (!Ani)
		 {

			 if (princeX >= 340 && princeX <= 380 && princeY == 70)
			 {
				 //if (!Ani)
				 // {
				  Ani = true;
				  fallAni = true;
				 // }

				 AniX = princeX;
				 AniY = princeY;
			 }

			 if (princeX >= 740 && princeX <= 790 && princeY == 154)
			 {
				 Ani = true;
				 AniX = princeX;
				 AniY = princeY;
				 fallAni = true;
			 }
		 }
	 }


 }


int main()
{
	//place your own initialization codes here.
	iSetTimer(90, animation);
	iSetTimer(90, change);
	iSetTimer(120, swordfunc);

	//iSetTimer(120)
	iInitialize(screenWidth, screenHeight,projectName);
	iStart(); // it will start drawing

	return 0;
}


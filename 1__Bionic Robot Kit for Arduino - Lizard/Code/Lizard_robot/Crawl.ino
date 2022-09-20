void waistOne()
{
  for(int i = 0;i < angle1;i++)
  {
    Servo_2.write(array_setup[1] + i);
    delay(delayedTime1);
  }
  array_setup[1] = array_setup[1] + angle1;
}
  
void stepOne()
{
  for(int i = 0;i < angle2;i++)
  {
    Servo_1.write(array_setup[0] + i);
    Servo_3.write(array_setup[2] - i);
    delay(delayedTime1);
  }
  array_setup[0] = array_setup[0] + angle2;
  array_setup[2] = array_setup[2] - angle2;
}

void backwardStepOne()
{
  for(int i = 0;i < angle2;i++)
  {
    Servo_1.write(array_setup[0] - i);
    Servo_3.write(array_setup[2] + i);
    delay(delayedTime1);
  }
  array_setup[0] = array_setup[0] - angle2;
  array_setup[2] = array_setup[2] + angle2;
}
void waistTwo()
{
  for(int i = 0;i < 2*angle1;i++)
  {
    Servo_2.write(array_setup[1] - i);
    delay(delayedTime1);
  }
  array_setup[1] = array_setup[1] - 2*angle1;
}

void stepTwo()
{
  for(int i = 0;i < 2*angle2;i++)
  {
    Servo_1.write(array_setup[0] - i);
    Servo_3.write(array_setup[2] + i);
    delay(delayedTime1);
  }
  array_setup[0] = array_setup[0] - 2*angle2;
  array_setup[2] = array_setup[2] + 2*angle2;
}

void backwardStepTwo()
{
  for(int i = 0;i < 2*angle2;i++)
  {
    Servo_1.write(array_setup[0] + i);
    Servo_3.write(array_setup[2] - i);
    delay(delayedTime1);
  }
  array_setup[0] = array_setup[0] + 2*angle2;
  array_setup[2] = array_setup[2] - 2*angle2;
}
void waistThree()
{
  for(int i = 0;i < 2*angle1;i++)
  {
    Servo_2.write(array_setup[1] + i);
    delay(delayedTime1);
  }
  array_setup[1] = array_setup[1] + 2*angle1;
}


void stepThree()
{
  for(int i = 0;i < 2*angle2;i++)
  {
    Servo_1.write(array_setup[0] + i);
    Servo_3.write(array_setup[2] - i);
    delay(delayedTime1);
  }
  array_setup[0] = array_setup[0] + 2*angle2;
  array_setup[2] = array_setup[2] - 2*angle2;
}

void backwardStepThree()
{
  for(int i = 0;i < 2*angle2;i++)
  {
    Servo_1.write(array_setup[0] - i);
    Servo_3.write(array_setup[2] + i);
    delay(delayedTime1);
  }
  array_setup[0] = array_setup[0] - 2*angle2;
  array_setup[2] = array_setup[2] + 2*angle2;
}
void waistBack()
{
  for(int i = 0;i < angle1;i++)
  {
    Servo_2.write(array_setup[1] - i);
    delay(delayedTime1);
  }
  array_setup[1] = array_setup[1] - angle1;
}

void stepBack()
{
  for(int i = 0;i < angle2;i++)
  {
    Servo_1.write(array_setup[0] - i);
    Servo_3.write(array_setup[2] + i);
    delay(delayedTime1);
  }
  array_setup[0] = array_setup[0] - angle2;
  array_setup[2] = array_setup[2] + angle2;
}

void backwardStepBack()
{
  for(int i = 0;i < angle2;i++)
  {
    Servo_1.write(array_setup[0] + i);
    Servo_3.write(array_setup[2] - i);
    delay(delayedTime1);
  }
  array_setup[0] = array_setup[0] + angle2;
  array_setup[2] = array_setup[2] - angle2;
}
void waistTurnleft()
{
  for(int i = 0;i < angle2;i++)
  {
    Servo_2.write(array_setup[1] + i);
    delay(delayedTime1);
  }
  array_setup[1] = array_setup[1] + angle2;
}
  
void stepTurnleft()
{
  for(int i = 0;i < angle3;i++)
  {
    Servo_1.write(array_setup[0] + i);
    Servo_3.write(array_setup[2] + i);
    delay(delayedTime1);
  }
  array_setup[0] = array_setup[0] + angle3;
  array_setup[2] = array_setup[2] + angle3;
}

void waistTurnleft2()
{
  for(int i = 0;i < angle2;i++)
  {
    Servo_2.write(array_setup[1] - i);
    delay(delayedTime1);
  }
  array_setup[1] = array_setup[1] - angle2;
}

void stepTurnleft2()
{
  for(int i = 0;i < angle3;i++)
  {
    Servo_1.write(array_setup[0] - i);
    delay(delayedTime1);
  }
  array_setup[0] = array_setup[0] - angle3;
}
void turnLeftbacktwo()
{
  for(int i = 0;i < angle3;i++)
  {
    Servo_3.write(array_setup[2] - i);
    delay(delayedTime1);
  }
  array_setup[2] = array_setup[2] - angle3;
}

void waistTurnright()
{
  for(int i = 0;i < angle2;i++)
  {
    Servo_2.write(array_setup[1] - i);
    delay(delayedTime1);
  }
  array_setup[1] = array_setup[1] - angle2;
}
  
void stepTurnright()
{
  for(int i = 0;i < angle3;i++)
  {
    Servo_1.write(array_setup[0] - i);
    Servo_3.write(array_setup[2] - i);
    delay(delayedTime1);
  }
  array_setup[0] = array_setup[0] - angle3;
  array_setup[2] = array_setup[2] - angle3;
}

void waistTurnright2()
{
  for(int i = 0;i < angle2;i++)
  {
    Servo_2.write(array_setup[1] + i);
    delay(delayedTime1);
}
array_setup[1] = array_setup[1] + angle2;
}

void stepTurnright2()
{
  for(int i = 0;i < angle3;i++)
  {
    Servo_1.write(array_setup[0] + i);
    delay(delayedTime1);
  }
  array_setup[0] = array_setup[0] + angle3;
}

void turnRightbacktwo()
{
  for(int i = 0;i < angle3;i++)
  {
    Servo_3.write(array_setup[2] + i);
    delay(delayedTime1);
  }
  array_setup[2] = array_setup[2] + angle3;
}

void keyTwo()
{
  waistOne();
  stepOne();
  waistTwo();
  stepTwo();
  waistThree();
  stepThree();
  waistBack();
  stepBack();
  longPressKey ==KEY_CODE_2;
  results.value = 0;
}

void keyADD()
{
  waistOne();
  stepOne();
  for(int c = 0; c < 4; c++)
  {
    waistTwo();
    stepTwo();
    waistThree();
    stepThree();
  }
  waistBack();
  stepBack();
  delayedTime1 = 16;
  longPressKey == KEY_CODE_ADD;
  results.value = 0;
}

void keyFive()
{
  Servo_1.write(array_setup[0]);
  Servo_2.write(array_setup[1]);
  Servo_3.write(array_setup[2]);
  longPressKey =KEY_CODE_5;
   results.value = 0;
}

void keyFour()
{
   for(int a = 0;a < 2;a++)
   {
     waistTurnleft();
     stepTurnleft();
     waistTurnleft2();
     stepTurnleft2();
     turnLeftbacktwo();
   }
   longPressKey ==KEY_CODE_4;
   results.value = 0;
}

void keySix()
{
  for(int a = 0;a < 2;a++)
  {
    waistTurnright();
    stepTurnright();
    waistTurnright2();
    stepTurnright2();
    turnRightbacktwo();
  }
  longPressKey ==KEY_CODE_6;
  results.value = 0;
}

void keyEight()
{
  waistOne();
  backwardStepOne();
  waistTwo();
  backwardStepTwo();
  waistThree();
  backwardStepThree();
  waistBack();
  backwardStepBack();
  longPressKey ==KEY_CODE_8;
  results.value = 0;
}
  
void keySUB()
{
  delayedTime1 = 8;
  waistOne();
  backwardStepOne();
  for(int c = 0; c < 3; c++)
  {
    waistTwo();
    backwardStepTwo();
    waistThree();
    backwardStepThree();
  }
  waistBack();
  backwardStepBack();
  delayedTime1 = 16;
  longPressKey == KEY_CODE_SUB;
  results.value = 0;
}

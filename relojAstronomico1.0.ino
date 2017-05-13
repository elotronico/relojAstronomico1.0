#include <Time.h>
#include <Wire.h>
#include "menus.h"
#include <LiquidCrystal_I2C.h>
#include <DS1337RTC.h>
#include "definiciones.h"

LiquidCrystal_I2C lcd(0x27,16,2);

char *monthName[12] = {"Ene", "Feb", "Mar", "Abr", "May", "Jun", "Jul", "Ago", "Sep", "Oct", "Nov", "Dic"};


//--------------------------------------
//            setup
//--------------------------------------
void setup()
{
	//definimos el led como salida
	pinMode(led,OUTPUT);

	// definimos los botones como entrada
	pinMode(botonCancel,INPUT);
	pinMode(botonDown,INPUT);
	pinMode(botonOk,INPUT);
	pinMode(botonUp,INPUT);


	
  tmElements_t tmSet;
  tmSet.Year = 2014 - 1970;
  tmSet.Month = 3;
  tmSet.Day = 4;
  tmSet.Hour = 10;
  tmSet.Minute = 13;
  tmSet.Second = 0;


	Serial.begin(57600);
	Serial.println("");
	Serial.println("----   Iniciado    ----");

	
}

//--------------------------------------
//            loop
//--------------------------------------
void loop()
{
	
  

}



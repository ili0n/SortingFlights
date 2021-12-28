#pragma once

#define _USE_MATH_DEFINES

#include "Window.h"
#include "FL/Fl_Input.H"
#include "GUI.h"
#include <cmath>

#define WINDOW_W			800
#define WINDOW_H			800
#define HOR_OFFSET			20
#define VER_OFFSET			20
#define BUTTON_W			100
#define BUTTON_H			20
#define X_AXIS_SIZE			(WINDOW_W-2*HOR_OFFSET)
#define Y_AXIS_SIZE			(WINDOW_H-2*VER_OFFSET)
#define X_SCALE				40
#define Y_SCALE				40
#define NUM_OF_NOTCH_X		(X_AXIS_SIZE/X_SCALE+1)
#define NUM_OF_NOTCH_Y		(Y_AXIS_SIZE/Y_SCALE+1)

#define SINE_RANGE_BEGIN	(-2 * M_PI)
#define SINE_RANGE_END		(2 * M_PI)
#define SINE_GRAIN_COUNT	100

using namespace Graph_lib;

class MainWindow : public Window
{
public:
	MainWindow(Point xy, int w, int h, const string& title);

private:
	Fl_Input outputPathTextBox;
	Fl_Input inputPathTextBox;
	

};


#pragma once

#include <string>
#include <vector>
#include "path.h"
#include "moveRobot.h"
#include "math.h"
#include <opencv2/opencv.hpp>
#include <iostream>
#include "zbar.h"

struct Dot
{
	int x;
	int y;
	double theta;
	
	Dot();
	Dot(int, int, double);
	
};

void fill(std::vector<std::vector<int16_t>> &);
std::vector<Dot> QR(Position &, std::vector<std::vector<int16_t>> &);

using namespace zbar;

typedef struct
{
	std::string type;
	std::string data;
	std::vector <cv::Point> location;
} decodedObject;

std::string decode(cv::Mat &im);

void print_map(std::vector<std::vector<int16_t>> &);



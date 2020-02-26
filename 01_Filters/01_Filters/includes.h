#pragma once

/* Qt libraries */
#include <QtCore/QCoreApplication>
#include <QImage>

/* Standard libraries */
#include <string>
#include <cstring>
#include <ciso646>
#include <iostream>

/* Point filters */
#include "TInvertFilter.h"
#include "TGrayScaleFilter.h"
#include "TSepiaFilter.h"
#include "TBrightnessFilter.h"

/* Direct Point Filters */
#include "TShiftFilter.h"
#include "TWavesFilter.h"

/* Matrix filters */
#include "TBlurFilter.h"
#include "TGaussianBlurFilter.h"
#include "TSobelYFilter.h"
#include "TSharpnessFilter.h"
#include "TMedianFilter.h"
#include "TMotionBlurFilter.h"
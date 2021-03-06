#pragma once

#include "lib/frame_grabber/frame_grabber.h"
#include "lib/frame_grabber/web_camera.h"
#include "lib/filter/filter_chain.h"
#include "lib/filter/frame_grab.h"
#include "lib/filter/gaussian_blur.h"
#include "lib/filter/display.h"
#include "lib/filter/background_extractor.h"
#include "lib/filter/binary_threshold.h"
#include "lib/filter/dilate.h"
#include "lib/filter/erode.h"
#include "lib/filter/blur.h"
#include "lib/count_reporter.h"
#include "lib/frame_grabber/pi_camera.h"
#include "lib/frame_grabber/video_file.h"
#include "lib/tracking/tracker.h"
#include "lib/filter/find_contours.h"
#include "lib/filter/track_objects.h"
#include "lib/filter/opening.h"
#include "lib/filter/closing.h"
#include <iostream>
#include <sstream>

using namespace std;
using namespace TooManyPeeps;
using namespace TooManyPeeps::Mqtt;

void init(FrameGrabber * frameGrabber);
void loop(void);
void update(int numberOfPeopleInside);

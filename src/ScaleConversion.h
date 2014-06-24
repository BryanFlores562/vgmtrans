#pragma once

double LinAmpDecayTimeToLinDBDecayTime(double secondsToFullAtten);

uint8_t Convert7bitPercentVolValToStdMidiVal(uint8_t percentVal);
uint8_t ConvertPercentAmpToStdMidiVal(double percent);
double ConvertPercentAmpToStdMidiScale(double percent);
long ConvertPercentToLogVolScale(long maxVal, double percent);
double ConvertLogScaleValToAtten(double percent);
double ConvertPercentAmplitudeToAttenDB(double percent);

double SecondsToTimecents(double secs);
double ConvertPercentPanToStdMidiScale(double percent);
uint8_t Convert7bitPercentPanValToStdMidiVal(uint8_t percentVal);
long ConvertPercentPanTo10thPercentUnits(double percentPan);
void ConvertPercentVolPanToStdMidiScale(double& vol, double& pan);

#define DLS_DECIBEL_UNIT 65536		//DLS1 spec p25
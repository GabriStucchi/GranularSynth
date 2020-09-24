/*
  ==============================================================================

    GrainEnvelope.h
    Created: 22 Sep 2020 5:21:55pm
    Author:  jacopo

  ==============================================================================
*/

#pragma once



class GrainEnvelope
{

public:
	GrainEnvelope();
	virtual ~GrainEnvelope();
    virtual float currentValue(float time);
    virtual float nextValue();
    static void reset();
    static void reset(float duration, int sampleRate, float mainLobeWidth);
    static GrainEnvelope* getInstance();

private:
    float duration;
    float mainLobeWidth;
    static GrainEnvelope* instance;
};


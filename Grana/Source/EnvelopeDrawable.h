/*
  ==============================================================================

    EnvelopeDrawable.h
    Created: 26 Oct 2020 10:33:07pm
    Author:  amere

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>
#include "./GaussianEnvelope.h"

class EnvelopeDrawable : public Component {
public:
    EnvelopeDrawable();
    ~EnvelopeDrawable();

    void paint(Graphics&) override;
    void resized() override;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(EnvelopeDrawable)
};
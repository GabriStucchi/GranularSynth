/*
  ==============================================================================

    KnobSection.h
    Created: 26 May 2020 1:58:38pm
    Author:  daveg

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

typedef juce::AudioProcessorValueTreeState::SliderAttachment SliderAttachment; //type for slider attachment
constexpr auto NUM_CONTROLS = 4;

//==============================================================================
/*
*/

class KnobSection : public Component, public Slider::Listener
{
public:
    KnobSection();
    ~KnobSection();
    void init(AudioProcessorValueTreeState& apvts);
    void paint(Graphics&) override;
    void resized() override;
    void sliderValueChanged(Slider* slider) override;

private:
    Slider controls[NUM_CONTROLS];
    Label labels[NUM_CONTROLS];
    std::string controlNames[NUM_CONTROLS] = { "Section Size", "Density", "Grain Size", "Speed" };

    SliderAttachment *attachments[NUM_CONTROLS];

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(KnobSection)
};

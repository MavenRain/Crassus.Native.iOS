//
//  ViewController.c
//  Crassus.Native.iOS
//
//  Created by SolomonRain on 2/19/16.
//  Copyright © 2016 TheObiGLLC. All rights reserved.
//

#include "ViewController.h"
#include "GlobalDefinitions.h"
#include "LabelDelegate.h"
#include "ViewDelegate.h"
#include <stdio.h>
#include <string.h>

unsigned int CrassusCount = 0;
void * clickLabel;

void ViewController(void * containingView)
{
    Frame clickFrame = { GetViewFrameWidth(containingView, CrassusGetViewFrameWidth) / 4, GetViewFrameHeight(containingView, CrassusGetViewFrameHeight) / 2 - 10, 150, 50 };
    void * clickButton = CreateButton(clickFrame, "helloClick:", CrassusCreateButton);
    clickLabel = CreateBoldLabel(clickFrame, "Click here!", 17, CrassusCreateBoldLabel);
    Rgba blue = {0, 0, 1, 1};
    Rgba white = {1, 1, 1, 1};
    SetBackgroundColor(clickButton, blue, CrassusSetBackgroundColor);
    SetLabelTextColor(clickLabel, white, CrassusSetLabelTextColor);
    CenterLabelText(clickLabel, CrassusCenterLabelText);
    
    StageWithinView(containingView, clickButton, CrassusStageWithinView);
    StageWithinView(containingView, clickLabel, CrassusStageWithinView);
    AnimateIntoView(clickButton, 0.5, CrassusAnimateIntoView);
    AnimateIntoView(clickLabel, 0.5, CrassusAnimateIntoView);
}

SingleObjectAction ViewControllerLoader()
{
    return ViewController;
}

void HelloCompletion(void * containingView)
{
    RemoveFromSuperview(clickLabel, CrassusRemoveFromSuperview);
    char number[3];
    sprintf(number, "%d", CrassusCount);
    const char * clicks = " clicks!";
    char numberAndClicks[20];
    strcpy(numberAndClicks, number);
    strcat(numberAndClicks, clicks);
    const char * numberOfClicks = numberAndClicks;
    Frame clickFrame = { GetViewFrameWidth(containingView, CrassusGetViewFrameWidth) / 4, GetViewFrameHeight(containingView, CrassusGetViewFrameHeight) / 2 - 10, 150, 50 };
    clickLabel = CreateBoldLabel(clickFrame, numberOfClicks, 17, CrassusCreateBoldLabel);
    Rgba white = {1, 1, 1, 1};
    SetLabelTextColor(clickLabel, white, CrassusSetLabelTextColor);
    CenterLabelText(clickLabel, CrassusCenterLabelText);
    StageWithinView(containingView, clickLabel, CrassusStageWithinView);
    AnimateIntoView(clickLabel, 0.5, CrassusAnimateIntoView);
}

void HelloClick(void * containingView)
{
    ++CrassusCount;
    AnimateOutOfViewWithCompletion(clickLabel, 0.5, HelloCompletion, CrassusAnimateOutOfViewWithCompletion);
}


























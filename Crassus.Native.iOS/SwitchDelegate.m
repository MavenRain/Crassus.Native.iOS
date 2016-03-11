//
//  SwitchDelegate.m
//  TheObiG LLC
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SwitchDelegate.h"
#import "Crassus_Native_iOS-Swift.h"

void* CrassusCreateSwitch(Frame frame)
{
    return (void*)CFBridgingRetain([CrassusSwitch create:frame]);
}

void CrassusAddSwitchValueChangedHandler(void* crassusSwitch, SingleObjectAction handler)
{
    [(__bridge CrassusSwitch*)crassusSwitch addHandler: handler];
}

Bools CrassusIsSwitchOn(void* crassusSwitch)
{
    return ((__bridge CrassusSwitch*)crassusSwitch).on ? BoolsYES : BoolsNO;
}

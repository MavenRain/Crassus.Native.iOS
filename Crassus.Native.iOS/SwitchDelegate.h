//
//  SwitchDelegate.h
//  TheObiG LLC
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

#ifndef SwitchDelegate_h
#define SwitchDelegate_h

#include <stdio.h>
#include "GlobalDefinitions.h"

void* CreateSwitch(Frame frame, ViewCreator function);
void* CrassusCreateSwitch(Frame frame);
void AddSwitchValueChangedHandler(void* crassusSwitch, SingleObjectAction handler, ObjectActionBlockAction action);
void CrassusAddSwitchValueChangedHandler(void* crassusSwitch, SingleObjectAction handler);
Bools IsSwitchOn(void* crassusSwitch, ObjectPredicate function);
Bools CrassusIsSwitchOn(void* crassusSwitch);

#endif /* SwitchDelegate_h */

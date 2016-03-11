//
//  ViewControllerDelegate.h
//  TheObiG LLC
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

#ifndef ViewControllerDelegate_h
#define ViewControllerDelegate_h

#include <stdio.h>

#endif /* ViewControllerDelegate_h */
#include "GlobalDefinitions.h"

void* CreateViewController(SingleObjectAction viewDidLoad, ObjectActionBlockObjectFunction function);
void* CrassusCreateViewController(SingleObjectAction viewDidLoad);
void* GetView(void* viewController, Exchanger function);
void* CrassusGetView(void* viewController);
void ReleaseViewController(void* viewController, SingleObjectAction action);
void CrassusReleaseViewController(void* viewController);
void* AutoReleaseViewController(void* viewController, Exchanger function);


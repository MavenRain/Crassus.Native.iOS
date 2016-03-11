//
//  ImageViewDelegate.h
//  TheObiG LLC
//
//  Created by SolomonRain on 2/16/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

#ifndef ImageViewDelegate_h
#define ImageViewDelegate_h

#include <stdio.h>
#include "GlobalDefinitions.h"

void* CreateImageViewFromImage(void* image, Exchanger function);
void* CrassusCreateImageViewFromImage(void* image);
void SetUserInteraction(void* imageView, Bools enabled, ObjectToggler function);
void CrassusSetUserInteraction(void* imageView, Bools enabled);

#endif /* ImageViewDelegate_h */

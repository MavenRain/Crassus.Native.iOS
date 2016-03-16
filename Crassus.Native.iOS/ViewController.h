//
//  ViewController.h
//  Crassus.Native.iOS
//
//  Created by SolomonRain on 2/19/16.
//  Copyright © 2016 TheObiGLLC. All rights reserved.
//

#ifndef ViewController_h
#define ViewController_h

#include <stdio.h>
typedef void(*SingleObjectAction)(void *);
#endif /* ViewController_h */

void ViewController(void * containingView);
SingleObjectAction ViewControllerLoader();
void HelloClick(void * containingView);
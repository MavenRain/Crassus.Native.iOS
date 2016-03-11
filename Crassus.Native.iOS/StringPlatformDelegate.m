//
//  StringPlatformDelegate.m
//  TheObiG LLC
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "StringPlatformDelegate.h"

NSString* PressString(const char * string)
{
    return [NSString stringWithUTF8String:string];
}


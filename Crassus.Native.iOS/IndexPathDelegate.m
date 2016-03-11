//
//  IndexPathDelegate.m
//  TheObiG LLC
//
//  Created by SolomonRain on 2/16/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "IndexPathDelegate.h"

long CrassusGetIndexPathSection(void* indexPath)
{
    return ((__bridge NSIndexPath*)indexPath).section;
}

long CrassusGetIndexPathRow(void* indexPath)
{
    return ((__bridge NSIndexPath*)indexPath).row;
}
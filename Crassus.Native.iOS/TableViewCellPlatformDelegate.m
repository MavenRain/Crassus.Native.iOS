//
//  TableViewCellPlatformDelegate.m
//  TheObiG LLC
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

UITableViewCell* PressTableViewCell(void* cell)
{
    return CFBridgingRelease(cell);
}



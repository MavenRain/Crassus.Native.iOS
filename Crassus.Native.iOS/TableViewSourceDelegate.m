//
//  TableViewSourceDelegate.m
//  TheObiG LLC
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TableViewSourceDelegate.h"
#import "Crassus_Native_iOS-Swift.h"

void* CrassusCreateTableViewSource(TableViewSource source)
{
    return (void*)CFBridgingRetain([CrassusTableViewSource create: source]);
}


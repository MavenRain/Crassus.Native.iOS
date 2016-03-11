//
//  IndexPathDelegate.h
//  TheObiG LLC
//
//  Created by SolomonRain on 2/16/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

#ifndef IndexPathDelegate_h
#define IndexPathDelegate_h

#include <stdio.h>
#include "GlobalDefinitions.h"

long GetIndexPathSection(void* indexPath, ObjectLongNumberFunction function);
long CrassusGetIndexPathSection(void* indexPath);
long GetIndexPathRow(void* indexPath, ObjectLongNumberFunction function);
long CrassusGetIndexPathRow(void* indexPath);

#endif /* IndexPathDelegate_h */

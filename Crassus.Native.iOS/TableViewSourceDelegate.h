//
//  TableViewSourceDelegate.h
//  TheObiG LLC
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

#ifndef TableViewSourceDelegate_h
#define TableViewSourceDelegate_h

#include <stdio.h>
#include "GlobalDefinitions.h"
#include "TableViewSource.h"

void* CreateTableViewSource(TableViewSource source, TableViewSourceCreator function);
void* CrassusCreateTableViewSource(TableViewSource source);

#endif /* TableViewSourceDelegate_h */

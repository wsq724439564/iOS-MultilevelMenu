//
//  CNPMultilevelMenuItem.h
//  MultilevelMenu
//
//  Created by Jussi on 14/12/2013.
//  Copyright (c) 2013 Code & Pop. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <libxml/tree.h>

@interface CNPMultilevelMenuItem : NSObject

@property xmlNodePtr node;

- (void)parse:(xmlNodePtr)setNode;
- (void)onSelected;

@end
//
//  CackleServer.m
//  Cackle
//
//  Created by Broken Rim on 6/16/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "CackleServer.h"

@class CackleConnection;

@implementation CackleServer

@synthesize runBlock;

- (id)init {
	if ((self = [super init])) {
		connectionClass = [CackleConnection self];
    }
    return self;
}

@end

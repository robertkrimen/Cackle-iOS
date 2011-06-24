//
//  CackleRequest.m
//  Cackle
//
//  Created by Broken Rim on 6/16/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "CackleRequest.h"


@implementation CackleRequest

@synthesize method;
@synthesize path;
@synthesize connection;

- (void) respond:( NSInteger )status {
    [connection respond:status];
}

- (void) respond:( NSInteger )status withString:( NSString* )string {
    [connection respond:status withString:string];
}

@end

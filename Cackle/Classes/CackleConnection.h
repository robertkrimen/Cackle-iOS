//
//  CackleConnection.h
//  Cackle
//
//  Created by Broken Rim on 6/16/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HTTPConnection.h"
#import "CackleRequest.h"

@interface CackleConnection : HTTPConnection {

    NSObject<HTTPResponse> *response_;
}

@property (nonatomic, retain) NSObject<HTTPResponse> *response;

- (void) run:( CackleRequest* )request;
- (void) respond:( NSInteger )status;
- (void) respond:( NSInteger )status withString:( NSString* )string;

@end

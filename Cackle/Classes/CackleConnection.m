//
//  CackleConnection.m
//  Cackle
//
//  Created by Broken Rim on 6/16/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "CackleConnection.h"

#import "HTTPMessage.h"
#import "HTTPDataResponse.h"
#import "DDNumber.h"
#import "HTTPLogging.h"
#import "CackleRequest.h"
#import "CackleResponse.h"
#import "CackleServer.h"

static const int httpLogLevel = HTTP_LOG_LEVEL_WARN; // | HTTP_LOG_FLAG_TRACE;

@implementation CackleConnection

@synthesize response = response_;

- (void) respond:( NSInteger )status {
    CackleResponse *response = [[[CackleResponse alloc] init] autorelease];
    response.status = status;
    self.response = response;
}

- (void) respond:( NSInteger )status withString:( NSString* )string {
    CackleResponse *response = [[[CackleResponse alloc] initWithData:[string dataUsingEncoding:NSUTF8StringEncoding]] autorelease];
    response.status = status;
    self.response = response;
}

- (void) run:( CackleRequest* )request_ {

    CackleRequestRunBlock runBlock = [(CackleServer *) config.server runBlock];
    if ( runBlock != nil ) {
        runBlock(request_, self);
    }
}

- (NSObject<HTTPResponse> *)httpResponseForMethod:(NSString *)method URI:(NSString *)path {
	HTTPLogTrace();
	
    CackleRequest *request_ = [[[CackleRequest alloc] init] autorelease];
    request_.method = method;
    request_.path = path;

    [self run:request_];

    if ( self.response != nil ) {
        return self.response;
    }
	
	return [super httpResponseForMethod:method URI:path];
}
@end

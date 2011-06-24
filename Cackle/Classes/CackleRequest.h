//
//  CackleRequest.h
//  Cackle
//
//  Created by Broken Rim on 6/16/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CackleConnection;

@interface CackleRequest : NSObject {

    NSString *method;
    NSString *path;
    CackleConnection *connection; 
}

@property (nonatomic, retain) NSString* method;
@property (nonatomic, retain) NSString* path;
@property (nonatomic, retain) CackleConnection* connection;

- (void) respond:( NSInteger )status;
- (void) respond:( NSInteger )status withString:( NSString* )string;

@end

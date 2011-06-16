//
//  CackleRequest.h
//  Cackle
//
//  Created by Broken Rim on 6/16/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface CackleRequest : NSObject {

    NSString *method;
    NSString *path;
}

@property (nonatomic, retain) NSString* method;
@property (nonatomic, retain) NSString* path;

@end

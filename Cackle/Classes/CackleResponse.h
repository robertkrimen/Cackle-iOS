//
//  CackleResponse.h
//  Cackle
//
//  Created by Broken Rim on 6/16/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HTTPDataResponse.h"

@interface CackleResponse : HTTPDataResponse {

    NSInteger status;

}

@property (nonatomic) NSInteger status;

@end

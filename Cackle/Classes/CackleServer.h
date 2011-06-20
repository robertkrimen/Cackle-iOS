//
//  CackleServer.h
//  Cackle
//
//  Created by Broken Rim on 6/16/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HTTPServer.h"
#import "CackleRequest.h"
#import "CackleConnection.h"

typedef void (^CackleRequestRunBlock)(CackleRequest*, CackleConnection*);

@interface CackleServer : HTTPServer {

    CackleRequestRunBlock runBlock;

}

@property (nonatomic, copy) CackleRequestRunBlock runBlock;

@end

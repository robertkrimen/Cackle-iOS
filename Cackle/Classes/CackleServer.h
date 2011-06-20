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

typedef void (^CackleRequestRunBlock)(CackleRequest*);

@interface CackleServer : HTTPServer {

    CackleRequestRunBlock runBlock;

}

@property (nonatomic, copy) CackleRequestRunBlock runBlock;

@end

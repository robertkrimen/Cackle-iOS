//
//  CackleAppDelegate.h
//  Cackle
//
//  Created by Broken Rim on 6/16/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CackleViewController;

@interface CackleAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    CackleViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet CackleViewController *viewController;

@end


//
//  asfAppDelegate.h
//  asf
//
//  Created by Terry Wilcox Jr on 8/17/10.
//  Copyright (c) 2010 Personal. All rights reserved.
//


#import <UIKit/UIKit.h>

@interface asfAppDelegate : NSObject <UIApplicationDelegate> {

    UIWindow *window;

    UINavigationController *navigationController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;


@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;
@end


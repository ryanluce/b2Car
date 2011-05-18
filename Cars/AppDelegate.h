//
//  AppDelegate.h
//  Cars
//
//  Created by Ryan Luce on 5/17/11.
//  Copyright Ryan Luce 2011. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end

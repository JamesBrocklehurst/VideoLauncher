//
//  VideoLauncherAppDelegate.h
//  VideoLauncher
//
//  Created by James Brocklehurst on 06/10/2011.
//  Copyright 2011 MightyMeta All rights reserved.
//

#import <UIKit/UIKit.h>

@class VideoLauncherViewController;

@interface VideoLauncherAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet VideoLauncherViewController *viewController;

@end

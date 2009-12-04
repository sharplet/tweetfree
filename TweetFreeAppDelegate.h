//
//  TweetFreeAppDelegate.h
//  TweetFree
//
//  Created by Adam Sharp on 4/12/09.
//  Copyright 2009 University of Ballarat. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface TweetFreeAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end

//
//  CocoaHelpDemoAppDelegate.h
//  CocoaHelpDemo
//
//  Created by Geoffrey Grosenbach on 5/13/10.
//  Copyright 2010 Topfunky Corporation. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface CocoaHelpDemoAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end

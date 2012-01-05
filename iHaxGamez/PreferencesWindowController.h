//
//  PreferencesWindowController.h
//  iHaxGamez
//
//  Created by Xiliang Chen on 11-12-15.
//  Copyright (c) 2011年 Xiliang Chen. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface PreferencesWindowController : NSWindowController <NSWindowDelegate, NSTableViewDataSource, NSTableViewDelegate> {
@private
    __weak NSTableView *_tableView;
    
    UInt32 _modifierKey;
    UInt32 _key;
}

@property (weak) IBOutlet NSTableView *_tableView;

+ (void)showWindow;

@end

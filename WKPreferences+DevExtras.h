//
//  NSObject_WKPreferences_DevExtras.h
//  Messenger
//
//  Created by Nick Salerni on 2016-02-03.
//

#import <Foundation/Foundation.h>

@import WebKit;

@interface WKPreferences (DevExtras)

@property (nonatomic, setter=_setDeveloperExtrasEnabled:) BOOL _developerExtrasEnabled;

- (void)enableDevExtras;

@end
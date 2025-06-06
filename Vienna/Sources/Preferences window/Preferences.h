//
//  Preferences.h
//  Vienna
//
//  Created by Steve on 8/23/05.
//  Copyright (c) 2004-2005 Steve Palmer. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

@import Cocoa;

@class SearchMethod;

NS_ASSUME_NONNULL_BEGIN

@interface Preferences : NSObject

@property (class, readonly, nonatomic) Preferences *standardPreferences;

// Accessor functions
-(BOOL)boolForKey:(NSString *)defaultName;
-(NSInteger)integerForKey:(NSString *)defaultName;
-(NSString *)stringForKey:(NSString *)defaultName;
-(NSArray *)arrayForKey:(NSString *)defaultName;
-(id)objectForKey:(NSString *)defaulName;
-(void)setBool:(BOOL)value forKey:(NSString *)defaultName;
-(void)setInteger:(NSInteger)value forKey:(NSString *)defaultName;
-(void)setString:(NSString *)value forKey:(NSString *)defaultName;
-(void)setArray:(NSArray *)value forKey:(NSString *)defaultName;
-(void)setObject:(id)value forKey:(NSString *)defaultName;
- (void)removeObjectForKey:(NSString *)defaultName;

// Path to default database
-(NSString *)defaultDatabase;
-(void)setDefaultDatabase:(NSString *)newDatabase;

// Read-only internal settings
@property (nonatomic, readonly) NSInteger backTrackQueueSize;

// Auto-expire values
@property (nonatomic) NSInteger autoExpireDuration;

// New articles notification method
@property (nonatomic) NSInteger newArticlesNotification;

// Mark read interval
@property (nonatomic) float markReadInterval;

// Layout style
@property (nonatomic) NSInteger layout;

// Controls how articles are filtered in the view
@property (nonatomic) NSInteger filterMode;

// Whether or not we show folder images
@property (nonatomic) BOOL showFolderImages;

// Refresh all subscriptions on startup
@property (nonatomic) BOOL refreshOnStartup;

// When checking a newer version, always search for Betas versions
@property (nonatomic) BOOL alwaysAcceptBetas;

// Opening URL links in Vienna
@property (nonatomic) BOOL openLinksInVienna;

// Opening URL links in background
@property (nonatomic) BOOL openLinksInBackground;

// Minimum font size settings
@property (nonatomic) NSInteger minimumFontSize;
@property (nonatomic) BOOL enableMinimumFontSize;

// JavaScript settings
@property (nonatomic) BOOL useJavaScript;

// Refresh frequency
@property (nonatomic) NSInteger refreshFrequency;

// Current display style
@property (nonatomic, copy) NSString *displayStyle;
-(void)setDisplayStyle:(NSString *)newStyle withNotification:(BOOL)flag;
@property (nonatomic) CGFloat textSizeMultiplier;

// Article list font
@property (nonatomic) NSFont *articleListFont;

// Article list sort descriptors
@property (null_resettable, nonatomic, copy) NSArray *articleSortDescriptors;

// Automatically sort folders tree
@property (nonatomic) NSInteger foldersTreeSortMethod;

// Do we show an icon in the status bar?
@property (nonatomic) BOOL showAppInStatusBar;

// Show or hide the status bar
@property (nonatomic) BOOL showStatusBar;

// Show or hide the filter bar
@property (nonatomic) BOOL showFilterBar;

// Should we save the raw feed source XML?
@property (readonly, nonatomic) NSString *feedSourcesFolder;
@property (nonatomic) BOOL shouldSaveFeedSource;

// Current search method
@property (nonatomic) SearchMethod *searchMethod;

// Concurrent download settings
@property (nonatomic) NSUInteger concurrentDownloads;

// Do we show updated articles as new ?
@property (nonatomic) BOOL markUpdatedAsNew;

// User Agent Name
@property (nonatomic) NSString *userAgentName;

#pragma mark Open Reader syncing

@property (nonatomic) BOOL syncGoogleReader;

@property (nonatomic) BOOL prefersGoogleNewSubscription;

// server used for syncing
@property (nonatomic, copy) NSString *syncServer;
@property (nonatomic, copy) NSString *syncScheme;

// username used for syncing
@property (nonatomic, copy) NSString *syncingUser;

// application ID and key needed by specific OpenReader services
@property (nonatomic, copy) NSString *syncingAppId;
@property (nonatomic, copy) NSString *syncingAppKey;

@end

NS_ASSUME_NONNULL_END

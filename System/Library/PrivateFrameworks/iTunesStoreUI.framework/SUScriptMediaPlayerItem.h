/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:35 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SUMediaPlayerItem, NSString, NSNumber;

@interface SUScriptMediaPlayerItem : SUScriptObject {

	SUMediaPlayerItem* _mediaItem;

}

@property (copy) NSString * backgroundImageURL; 
@property (copy) NSString * bookmarkIdentifier; 
@property (copy) NSString * initialOrientation; 
@property (retain) NSNumber * itemIdentifier; 
@property (copy) NSString * itemType; 
@property (retain) NSNumber * playableDuration; 
@property (copy) NSString * subtitle; 
@property (copy) NSString * title; 
@property (copy) NSString * URL; 
+(id)webScriptNameForKey:(const char*)arg1 ;
-(id)playableDuration;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)title;
-(id)URL;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(void)setURL:(id)arg1 ;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)itemIdentifier;
-(id)itemType;
-(void)setItemType:(id)arg1 ;
-(void)setItemIdentifier:(id)arg1 ;
-(id)backgroundImageURL;
-(void)setBackgroundImageURL:(id)arg1 ;
-(id)bookmarkIdentifier;
-(void)setBookmarkIdentifier:(id)arg1 ;
-(id)initialOrientation;
-(void)setInitialOrientation:(id)arg1 ;
-(void)setPlayableDuration:(id)arg1 ;
-(id)copyNativeMediaPlayerItem;
@end


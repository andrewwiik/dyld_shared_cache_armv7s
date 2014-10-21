/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:28 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WebBookmark, NSString;

@interface FolderPickerItem : NSObject {

	WebBookmark* _bookmark;
	unsigned long long _depth;

}

@property (nonatomic,readonly) WebBookmark * bookmark;                //@synthesize bookmark=_bookmark - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) unsigned long long depth;              //@synthesize depth=_depth - In the implementation block
-(void)dealloc;
-(id)title;
-(id)_initWithBookmark:(id)arg1 depth:(unsigned long long)arg2 ;
-(unsigned long long)depth;
-(id)bookmark;
@end

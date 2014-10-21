/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:35 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SUConcernItem : NSObject {

	bool _default;
	NSString* _identifier;
	NSString* _title;

}

@property (assign,getter=isDefaultConcern,nonatomic) bool defaultConcern;              //@synthesize default=_default - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * title;                                         //@synthesize title=_title - In the implementation block
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)title;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(bool)isDefaultConcern;
-(void)setDefaultConcern:(bool)arg1 ;
@end


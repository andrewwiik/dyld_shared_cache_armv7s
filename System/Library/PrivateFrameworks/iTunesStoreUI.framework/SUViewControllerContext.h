/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:30 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSCoding.h>

@class NSMutableDictionary, NSString;

@interface SUViewControllerContext : NSObject <NSCoding> {

	NSMutableDictionary* _metadata;
	NSString* _sectionIdentifier;
	long long _type;

}

@property (nonatomic,retain) NSString * sectionIdentifier;              //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (assign,nonatomic) long long type;                            //@synthesize type=_type - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(id)sectionIdentifier;
-(void)setSectionIdentifier:(id)arg1 ;
-(id)copyViewController;
-(void)setValue:(id)arg1 forMetadataKey:(id)arg2 ;
-(id)valueForMetadataKey:(id)arg1 ;
-(long long)_typeForTypeString:(id)arg1 ;
-(id)_typeStringForType:(long long)arg1 ;
@end

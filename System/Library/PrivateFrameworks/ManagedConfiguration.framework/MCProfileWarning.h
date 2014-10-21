/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:25 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSCoding.h>

@class NSString;

@interface MCProfileWarning : NSObject <NSCoding> {

	NSString* _localizedTitle;
	NSString* _localizedBody;
	bool _isLongForm;

}

@property (nonatomic,retain) NSString * localizedTitle;              //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,retain) NSString * localizedBody;               //@synthesize localizedBody=_localizedBody - In the implementation block
@property (assign,nonatomic) bool isLongForm;                        //@synthesize isLongForm=_isLongForm - In the implementation block
+(id)warningWithLocalizedTitle:(id)arg1 localizedBody:(id)arg2 isLongForm:(bool)arg3 ;
-(void)setLocalizedTitle:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void).cxx_destruct;
-(id)localizedTitle;
-(id)initWithLocalizedTitle:(id)arg1 localizedBody:(id)arg2 isLongForm:(bool)arg3 ;
-(id)localizedBody;
-(void)setLocalizedBody:(id)arg1 ;
-(bool)isLongForm;
-(void)setIsLongForm:(bool)arg1 ;
@end


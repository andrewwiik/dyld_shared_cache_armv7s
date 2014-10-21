/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:31 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface AXGestureOverrideHandler : NSObject {

	/*^block*/ id _handler;
	unsigned long long _type;
	NSString* _identifier;

}

@property (nonatomic,copy) id handler;                             //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
-(void)dealloc;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(void)setHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)handler;
@end


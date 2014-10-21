/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:22 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface PTSHUDRow : NSObject {

	double _height;
	NSArray* _controls;

}

@property (assign,nonatomic) double height;                   //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) NSArray * controls;              //@synthesize controls=_controls - In the implementation block
+(id)rowWithHeight:(double)arg1 controls:(id)arg2 ;
-(double)height;
-(void).cxx_destruct;
-(void)setHeight:(double)arg1 ;
-(void)setControls:(id)arg1 ;
-(id)controls;
@end


/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:22 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PT2DGraphDatum.h>

@protocol PT2DGraphDatum
@property (nonatomic,retain) UIColor * color; 
@optional
-(id)color;
-(void)setColor:(id)arg1;
-(CGPoint*)graphPointForContext:(id)arg1;

@required
-(CGPoint*)graphPoint;
@end


@class UIColor;

@interface PT2DGraphDatum : NSObject <PT2DGraphDatum> {

	UIColor* _color;
	CGPoint _graphPoint;

}

@property (assign,nonatomic) CGPoint graphPoint;              //@synthesize graphPoint=_graphPoint - In the implementation block
@property (nonatomic,retain) UIColor * color;                 //@synthesize color=_color - In the implementation block
+(id)datumWithPoint:(CGPoint)arg1 ;
-(id)color;
-(void)setColor:(id)arg1 ;
-(void).cxx_destruct;
-(void)setGraphPoint:(CGPoint)arg1 ;
-(CGPoint)graphPoint;
@end

/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:22 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <UIKit/UIView.h>

@class PT2DGraphView;

@interface PT2DGraphDotView : UIView {

	PT2DGraphView* _graph;
	CGPoint _graphPoint;

}

@property (assign,nonatomic,__weak) PT2DGraphView * graph;              //@synthesize graph=_graph - In the implementation block
@property (assign,nonatomic) CGPoint graphPoint;                        //@synthesize graphPoint=_graphPoint - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(id)init;
-(void).cxx_destruct;
-(id)graph;
-(void)setGraphPoint:(CGPoint)arg1 ;
-(CGPoint)graphPoint;
-(void)setGraph:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:10 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKCalloutSource <NSObject>
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) UIView * leftCalloutAccessoryView; 
@property (nonatomic,readonly) UIView * rightCalloutAccessoryView; 
@property (nonatomic,readonly) UIView * detailCalloutAccessoryView; 
@optional
-(id)leftCalloutAccessoryView;
-(id)rightCalloutAccessoryView;
-(id)detailCalloutAccessoryView;
-(id)subtitle;

@required
-(id)title;
-(CGPoint*)calloutAnchorPointWithCanvasSize:(CGSize)arg1 canvasScale:(double)arg2 snapToPixels:(bool)arg3;
-(CGPoint*)screenPointToScrollRelativeToWithCanvasSize:(CGSize)arg1 canvasScale:(double)arg2;
-(id)debugAnchorPointString;
@end


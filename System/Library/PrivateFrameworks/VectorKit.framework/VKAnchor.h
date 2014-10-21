/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:12 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKAnchor : NSObject {

	shared_ptr<vk::Anchor>* _anchor;

}

@property (nonatomic,readonly) bool isMercator; 
@property (nonatomic,readonly) bool isGeocentric; 
@property (nonatomic,readonly) bool followsTerrain; 
@property (nonatomic,readonly) VKPoint worldPoint; 
@property (nonatomic,readonly) VKPoint mercatorPoint; 
@property (assign,nonatomic) CGPoint coordinate; 
@property (assign,nonatomic) <VKAnchorDelegate> * delegate; 
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id).cxx_construct;
-(void).cxx_destruct;
-(CGPoint)coordinate;
-(void)setCoordinate:(CGPoint)arg1 ;
-(VKPoint)worldPoint;
-(bool)isMercator;
-(bool)isGeocentric;
-(bool)followsTerrain;
-(long long)worldIndexWithContext:(id)arg1 ;
-(id)initWithAnchor:(shared_ptr<vk::Anchor>*)arg1 ;
-(void)worldPointDidChange;
-(void)setMercatorPoint:(VKPoint)arg1 ;
-(VKPoint)mercatorPoint;
@end


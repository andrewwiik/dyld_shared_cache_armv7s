/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:07 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VGLCanvas <NSObject>
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double contentScale; 
@property (nonatomic,readonly) CGSize sizeInPixels; 
@property (nonatomic,readonly) VGLContext * vglContext; 
@required
+(Class)contextClass;
-(CGSize*)size;
-(double)contentScale;
-(id)vglContext;
-(void)willDrawView;
-(void)didDrawView;
-(CGSize*)sizeInPixels;
@end

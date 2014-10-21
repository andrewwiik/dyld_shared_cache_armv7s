/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:08 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VKWorldDelegate;
@class VKModelObject;

@interface VKWorld : NSObject {

	<VKWorldDelegate>* _delegate;
	VKModelObject* _modelRoot;

}

@property (nonatomic,readonly) VKModelObject * modelRoot;               //@synthesize modelRoot=_modelRoot - In the implementation block
@property (assign,nonatomic) <VKWorldDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)description;
-(id)delegate;
-(void)runAnimation:(id)arg1 ;
-(id)modelRoot;
-(void)layoutScene:(id)arg1 withContext:(id)arg2 ;
-(void)worldLayoutDidChange;
-(void)worldDisplayDidChange;
-(void)drawDebugScene:(id)arg1 withContext:(id)arg2 ;
-(void)drawScene:(id)arg1 withContext:(id)arg2 ;
@end

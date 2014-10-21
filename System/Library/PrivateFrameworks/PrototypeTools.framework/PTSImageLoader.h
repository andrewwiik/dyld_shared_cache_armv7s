/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:23 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PTSImageLoaderDelegate;
@class NSString;

@interface PTSImageLoader : NSObject {

	NSString* _path;
	bool _loading;
	<PTSImageLoaderDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) <PTSImageLoaderDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isLoading) bool loading;                                            //@synthesize loading=_loading - In the implementation block
-(void)startLoading;
-(void)setLoading:(bool)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(bool)isLoading;
-(void)stopLoading;
-(id)initWithPath:(id)arg1 ;
-(void).cxx_destruct;
@end

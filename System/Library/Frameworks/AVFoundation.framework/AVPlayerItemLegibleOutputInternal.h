/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:58:58 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AVPlayerItemLegibleOutputDependencyFactory, AVLegibleOutputDataSource;
@class AVWeakReference, NSString, NSArray, AVWeakReferencingDelegateStorage;

@interface AVPlayerItemLegibleOutputInternal : NSObject {

	<AVPlayerItemLegibleOutputDependencyFactory>* dependencyFactory;
	<AVLegibleOutputDataSource>* dataSource;
	AVWeakReference* weakReferenceToHost;
	bool suppressesPlayerRendering;
	NSString* figLegibleOutputsDictionaryKey;
	NSArray* nativeRepresentationSubtypes;
	double advanceInterval;
	NSString* textStylingResolution;
	AVWeakReferencingDelegateStorage* delegateStorage;

}
@end


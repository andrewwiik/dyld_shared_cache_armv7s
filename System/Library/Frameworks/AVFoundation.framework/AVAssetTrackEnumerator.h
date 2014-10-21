/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:58:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSString, NSArray, NSEnumerator;

@interface AVAssetTrackEnumerator : NSEnumerator {

	NSString* _mediaType;
	NSArray* _mediaCharacteristics;
	NSEnumerator* _enumerator;

}
+(id)trackEnumeratorWithAsset:(id)arg1 ;
-(id)initWithAsset:(id)arg1 mediaType:(id)arg2 ;
-(id)initWithAsset:(id)arg1 mediaCharacteristics:(id)arg2 ;
-(void)setMediaCharacteristics:(id)arg1 ;
-(void)dealloc;
-(id)nextObject;
-(id)initWithAsset:(id)arg1 ;
-(void)setMediaType:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:06 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <CoreFoundation/NSDiscardableContent.h>

@class NSString, NSArray;

@interface _UIActivityIndicatorViewArtworkItem : NSObject <NSDiscardableContent> {

	NSString* _artKey;
	NSArray* _images;
	struct {
		unsigned isDiscarded : 1;
		unsigned useCount;
	}  _flags;

}

@property (nonatomic,readonly) NSString * artKey;              //@synthesize artKey=_artKey - In the implementation block
@property (nonatomic,retain) NSArray * images;                 //@synthesize images=_images - In the implementation block
-(void)dealloc;
-(unsigned long long)hash;
-(id)images;
-(bool)beginContentAccess;
-(void)endContentAccess;
-(void)discardContentIfPossible;
-(bool)isContentDiscarded;
-(void)setImages:(id)arg1 ;
-(id)initWithArtKey:(id)arg1 ;
-(id)artKey;
@end


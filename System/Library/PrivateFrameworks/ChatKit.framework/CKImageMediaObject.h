/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:46 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKMediaObject.h>

@class CKImageData;

@interface CKImageMediaObject : CKMediaObject {

	CKImageData* _imageData;
	CKImageData* _backgroundImageData;

}

@property (nonatomic,readonly) CKImageData * imageData; 
+(id)fallbackFilenamePrefix;
+(id)UTITypes;
+(Class)imageDataClass;
+(bool)isPreviewable;
-(void)dealloc;
-(id)generateThumbnailFillToSize:(CGSize)arg1 ;
-(CGSize)bbSize;
-(id)generateThumbnail;
-(id)imageData;
-(int)mediaType;
@end


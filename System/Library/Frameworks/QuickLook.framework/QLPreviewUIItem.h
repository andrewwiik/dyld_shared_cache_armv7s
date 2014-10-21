/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLPreviewUIItem.h>

@protocol QLPreviewItem;
@class QLPreviewThumbnailGenerator, NSURL, NSString, UIImage;

@interface QLPreviewUIItem : NSObject <QLPreviewUIItem> {

	<QLPreviewItem>* _previewItem;
	QLPreviewThumbnailGenerator* _thumbnailGenerator;
	long long _index;

}

@property (readonly) NSURL * previewItemURL; 
@property (readonly) NSString * previewItemTitle; 
@property (readonly) UIImage * icon; 
@property (readonly) long long level; 
@property (readonly) long long previewItemIndex; 
@property (readonly) bool isFolder; 
+(id)genericIconForPreviewItem:(id)arg1 ;
+(id)uiItemForPreviewItem:(id)arg1 index:(long long)arg2 ;
-(void)updateIconWithSize:(CGSize)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)cancelIconUpdate;
-(long long)previewItemIndex;
-(void)dealloc;
-(long long)level;
-(id)previewItemURL;
-(id)previewItemTitle;
-(id)icon;
-(bool)isFolder;
@end

/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:54 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QLPreviewParts.h>

@interface QLBasePreviewParts : QLPreviewParts
+(bool)canConvertDocumentType:(id)arg1 ;
+(/*function pointer*/ void*)dataCallbackForUTI:(id)arg1 andSize:(unsigned long long)arg2 ;
+(bool)isBundleURL:(id)arg1 ;
+(/*function pointer*/ void*)urlCallbackForUTI:(id)arg1 ;
-(void)computePreview;
@end


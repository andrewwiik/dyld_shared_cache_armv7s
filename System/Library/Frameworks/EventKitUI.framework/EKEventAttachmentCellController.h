/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:22 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIDocumentInteractionControllerDelegate.h>

@protocol EKEventAttachmentCellControllerDelegate;
@class EKEventAttachmentCell, EKAttachment;

@interface EKEventAttachmentCellController : NSObject <UIDocumentInteractionControllerDelegate> {

	id _downloadID;
	EKEventAttachmentCell* _cell;
	bool _sourceIsManaged;
	EKAttachment* _attachment;
	<EKEventAttachmentCellControllerDelegate>* _delegate;

}

@property (readonly) EKEventAttachmentCell * cell;                                                     //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) EKAttachment * attachment;                                                //@synthesize attachment=_attachment - In the implementation block
@property (assign,nonatomic,__weak) <EKEventAttachmentCellControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) bool sourceIsManaged;                                                     //@synthesize sourceIsManaged=_sourceIsManaged - In the implementation block
+(id)cellControllersForAttachments:(id)arg1 givenExistingControllers:(id)arg2 ;
+(bool)_attachmentIsViewable:(id)arg1 ;
-(void)tearDown;
-(void)cellSelected;
-(id)initWithAttachment:(id)arg1 ;
-(void)_clearDownloadID;
-(void)_presentPreviewWithURL:(id)arg1 filename:(id)arg2 ;
-(id)_downloadProgressStringWithDownloadedBytes:(id)arg1 outOfTotalBytes:(id)arg2 ;
-(void)_presentPreviewOnMainThreadWithInfo:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)cell;
-(void).cxx_destruct;
-(bool)sourceIsManaged;
-(void)documentInteractionControllerWillEndPreview:(id)arg1 ;
-(id)documentInteractionControllerViewControllerForPreview:(id)arg1 ;
-(id)documentInteractionControllerViewForPreview:(id)arg1 ;
-(void)setSourceIsManaged:(bool)arg1 ;
-(void)setAttachment:(id)arg1 ;
-(id)attachment;
@end


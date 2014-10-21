/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:47 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIWebDocumentView.h>

@protocol MFMailComposeViewDelegate;
@class DOMHTMLElement, DOMHTMLDocument, MFGenericAttachmentStore;

@interface MFComposeBodyField : UIWebDocumentView {

	DOMHTMLElement* _body;
	DOMHTMLDocument* _document;
	DOMHTMLElement* _blockquote;
	CGSize _originalSize;
	CGSize _layoutSize;
	bool _shouldShowStandardButtons;
	unsigned _isDirty : 1;
	unsigned _forwardingNotification : 1;
	unsigned _replaceAttachments : 1;
	unsigned _isLoading : 1;
	unsigned _needsReplaceImages : 1;
	NSRange _rangeToSelect;
	MFGenericAttachmentStore* _attachmentStore;
	<MFMailComposeViewDelegate>* _mailComposeViewDelegate;
	int _preventLayout;
	bool _prefersFirstLineSelection;

}

@property (assign) bool shouldShowStandardButtons;              //@synthesize shouldShowStandardButtons=_shouldShowStandardButtons - In the implementation block
+(void)addAdditionalItemsToCalloutBar;
-(void)setLoading:(bool)arg1 ;
-(void)setShouldShowStandardButtons:(bool)arg1 ;
-(void)changeQuoteLevel:(long long)arg1 ;
-(bool)shouldShowStandardButtons;
-(void)setMailComposeViewDelegate:(id)arg1 ;
-(void)setPinHeight:(double)arg1 ;
-(void)layoutWithMinimumSize;
-(void)updateQuoteLevelMenu;
-(void)didUndoOrRedo:(id)arg1 ;
-(void)replaceImages;
-(void)_finishedLoadingURLRequest:(id)arg1 success:(bool)arg2 ;
-(void)replaceImagesIfNecessary;
-(void)webViewDidDraw:(id)arg1 ;
-(void)setMarkupString:(id)arg1 ;
-(void)setMarkupString:(id)arg1 baseURL:(id)arg2 quote:(bool)arg3 ;
-(void)_nts_AddDOMNode:(id)arg1 quote:(bool)arg2 baseURL:(id)arg3 emptyFirst:(bool)arg4 prepended:(bool)arg5 ;
-(void)addMarkupString:(id)arg1 quote:(bool)arg2 baseURL:(id)arg3 emptyFirst:(bool)arg4 prepended:(bool)arg5 ;
-(void)prependMarkupString:(id)arg1 quote:(bool)arg2 baseURL:(id)arg3 emptyFirst:(bool)arg4 ;
-(void)appendMarkupString:(id)arg1 quote:(bool)arg2 ;
-(void)insertNode:(id)arg1 parent:(id)arg2 nextSibling:(id)arg3 ;
-(void)restoreSelectionFromTemporaryMarkers:(bool)arg1 ;
-(void)deleteNode:(id)arg1 ;
-(void)insertNode:(id)arg1 parent:(id)arg2 offset:(int)arg3 ;
-(void)replaceNode:(id)arg1 oldNode:(id)arg2 ;
-(void)deleteRange:(id)arg1 ;
-(void)setSelectionStart:(id)arg1 offset:(int)arg2 end:(id)arg3 offset:(int)arg4 affinity:(int)arg5 ;
-(void)saveSelectionForUndo;
-(id)insertTemporarySelectionMarkersForRange:(id)arg1 ;
-(void)splitUpBlockQuotesOverlappingStartOfRange:(id)arg1 ;
-(void)splitUpBlockQuotesOverlappingEndOfRange:(id)arg1 ;
-(void)removeBlockQuoteFromTree:(id)arg1 ;
-(id)temporaryEndingSelectionMarker;
-(void)restoreSelectionFromTemporaryMarkers;
-(id)_nodeForAttachmentData:(id)arg1 text:(id)arg2 type:(id)arg3 ;
-(void)addSelectedAttachmentsToPasteboard:(id)arg1 ;
-(id)_addInlineAttachmentWithData:(id)arg1 text:(id)arg2 type:(id)arg3 contentID:(id)arg4 ;
-(void)_removeInlineAttachment:(id)arg1 ;
-(void)setLayoutInterval:(int)arg1 ;
-(void)scaleImagesToScale:(unsigned long long)arg1 withAttachmentStore:(id)arg2 ;
-(void)unscaleImages;
-(void)setAttachmentStore:(id)arg1 ;
-(void)setReplaceAttachmentsWithFilename:(bool)arg1 ;
-(void)beginPreventingLayout;
-(void)endPreventingLayout;
-(bool)isForwardingNotification;
-(id)webThreadWebView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3 ;
-(bool)webView:(id)arg1 shouldDeleteDOMRange:(id)arg2 ;
-(bool)webView:(id)arg1 shouldInsertText:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(int)arg4 ;
-(void)_webthread_webView:(id)arg1 tileDidDraw:(id)arg2 ;
-(void)addDOMNode:(id)arg1 quote:(bool)arg2 baseURL:(id)arg3 emptyFirst:(bool)arg4 prepended:(bool)arg5 ;
-(void)appendQuotedMarkupString:(id)arg1 baseURL:(id)arg2 ;
-(void)setPrefersFirstLineSelection;
-(void)prependString:(id)arg1 ;
-(void)prependMarkupString:(id)arg1 quote:(bool)arg2 ;
-(void)addMailAttributesBeforeDisplayHidingTrailingEmptyQuotes:(bool)arg1 ;
-(void)deleteTemporarySelectionMarkersFromDocument:(id)arg1 ;
-(void)insertPhotoOrVideoWithInfoDictionary:(id)arg1 ;
-(bool)containsRichText;
-(id)plainTextAlternative;
-(id)plainTextContentWithAttachmentSource:(id)arg1 ;
-(void)htmlString:(id*)arg1 otherHtmlStringsAndAttachments:(id*)arg2 charsets:(id*)arg3 withAttachmentSource:(id)arg4 ;
-(id)htmlString;
-(CGRect)rectOfElementWithID:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)invalidate;
-(bool)becomeFirstResponder;
-(void)deferredBecomeFirstResponder;
-(NSRange)selectedRange;
-(void)setSelectedRange:(NSRange)arg1 ;
-(void)webViewDidChange:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)ensureSelection;
-(id)documentFragmentForPasteboardItemAtIndex:(long long)arg1 ;
-(void)setSelectedDOMRange:(id)arg1 affinityDownstream:(bool)arg2 ;
-(void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2 ;
-(void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3 ;
-(void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4 ;
-(double)contentWidth;
-(bool)isDirty;
-(id)webThreadWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5 ;
-(void)setDirty:(bool)arg1 ;
@end


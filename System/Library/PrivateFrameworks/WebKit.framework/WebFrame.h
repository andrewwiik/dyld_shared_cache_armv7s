/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:23 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class WebFramePrivate;

@interface WebFrame : NSObject {

	WebFramePrivate* _private;

}
+(id)stringWithData:(id)arg1 textEncodingName:(id)arg2 ;
+(PassRefPtr<WebCore::Frame>*)_createFrameWithPage:(Page*)arg1 frameName:(const String*)arg2 frameView:(id)arg3 ownerElement:(HTMLFrameOwnerElement*)arg4 ;
+(void)_createMainFrameWithPage:(Page*)arg1 frameName:(const String*)arg2 frameView:(id)arg3 ;
+(PassRefPtr<WebCore::Frame>*)_createSubframeWithOwnerElement:(HTMLFrameOwnerElement*)arg1 frameName:(const String*)arg2 frameView:(id)arg3 ;
+(void)_createMainFrameWithSimpleHTMLDocumentWithPage:(Page*)arg1 frameView:(id)arg2 style:(id)arg3 ;
-(oneway void)release;
-(oneway void)_webcore_releaseOnWebThread;
-(id)dd_newOperation;
-(bool)containsOnlySelectableElements;
-(bool)isTexty;
-(bool)isMainFrame;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(id)selectionRectsForRange:(id)arg1 ;
-(bool)hasSelection;
-(id)startPosition;
-(void)setSelectionGranularity:(int)arg1 ;
-(void)collapseSelection;
-(void)clearSelection;
-(id)nextUnperturbedDictationResultBoundaryFromPosition:(id)arg1 ;
-(int)selectionState;
-(void)toggleBaseWritingDirection;
-(int)selectionBaseWritingDirection;
-(id)endPosition;
-(id)webVisiblePositionForPoint:(CGPoint)arg1 ;
-(void)setBaseWritingDirection:(int)arg1 ;
-(void)moveSelectionToPoint:(CGPoint)arg1 ;
-(id)selectionRects;
-(void)setRangedSelectionBaseToCurrentSelection;
-(void)clearRangedSelectionInitialExtent;
-(void)setRangedSelectionWithExtentPoint:(CGPoint)arg1 ;
-(void)setSelectionWithFirstPoint:(CGPoint)arg1 secondPoint:(CGPoint)arg2 ;
-(void)setRangedSelectionBaseToCurrentSelectionStart;
-(void)setRangedSelectionInitialExtentToCurrentSelectionEnd;
-(void)setRangedSelectionBaseToCurrentSelectionEnd;
-(void)setRangedSelectionInitialExtentToCurrentSelectionStart;
-(void)aggressivelyExpandSelectionToWordContainingCaretSelection;
-(CGRect)closestCaretRectInMarkedTextRangeForPoint:(CGPoint)arg1 ;
-(bool)setRangedSelectionExtentPoint:(CGPoint)arg1 baseIsStart:(bool)arg2 allowFlipping:(bool)arg3 ;
-(id)wordAtPoint:(CGPoint)arg1 ;
-(void)smartExtendRangedSelection:(int)arg1 ;
-(void)moveSelectionToEnd;
-(void)moveSelectionToStart;
-(bool)isSingleLine;
-(Frame*)coreFrame;
-(VisiblePosition*)visiblePositionForPoint:(CGPoint)arg1 ;
-(id)selectionRectsForCoreRange:(Range*)arg1 ;
-(bool)setSelectionWithBasePoint:(CGPoint)arg1 extentPoint:(CGPoint)arg2 baseIsStart:(bool)arg3 allowFlipping:(bool)arg4 ;
-(VisiblePosition*)closestWordBoundary:(VisiblePosition*)arg1 ;
-(void)setIsSingleLine:(bool)arg1 ;
-(void)extendSelection:(bool)arg1 ;
-(bool)setSelectionWithBasePoint:(CGPoint)arg1 extentPoint:(CGPoint)arg2 baseIsStart:(bool)arg3 ;
-(void)ensureRangedSelectionContainsInitialStartPoint:(CGPoint)arg1 initialEndPoint:(CGPoint)arg2 ;
-(void)expandSelectionToSentence;
-(bool)renderedCharactersExceed:(unsigned long long)arg1 ;
-(CGImageRef)imageForNode:(id)arg1 allowDownsampling:(bool)arg2 drawContentBehindTransparentNodes:(bool)arg3 ;
-(id)previousUnperturbedDictationResultBoundaryFromPosition:(id)arg1 ;
-(void)_selectNSRange:(NSRange)arg1 ;
-(void)setNeedsLayout;
-(void)_handleKeyEvent:(id)arg1 ;
-(bool)needsLayout;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(id)characterRangeAtPoint:(CGPoint)arg1 ;
-(int)selectionAffinity;
-(id)selectedDOMRange;
-(void)_setSelectionFromNone;
-(int)preferredHeight;
-(void)updateLayout;
-(void)setSelectionChangeCallbacksDisabled:(bool)arg1 ;
-(void)setDictationPhrases:(id)arg1 metadata:(id)arg2 asChildOfElement:(id)arg3 ;
-(CGRect)rectForScrollToVisible;
-(id)documentView;
-(id)convertNSRangeToDOMRange:(NSRange)arg1 ;
-(CGRect)caretRectAtNode:(id)arg1 offset:(int)arg2 affinity:(int)arg3 ;
-(void)setText:(id)arg1 asChildOfElement:(id)arg2 ;
-(NSRange)_selectedNSRange;
-(void)setSelectedDOMRange:(id)arg1 affinity:(int)arg2 closeTyping:(bool)arg3 ;
-(void)setIsActive:(bool)arg1 ;
-(CGRect)firstRectForDOMRange:(id)arg1 ;
-(CGRect)caretRect;
-(void)_selectAll;
-(void)confirmMarkedText:(id)arg1 ;
-(unsigned short)characterInRelationToCaretSelection:(int)arg1 ;
-(unsigned short)characterBeforeCaretSelection;
-(unsigned short)characterAfterCaretSelection;
-(int)wordOffsetInRange:(id)arg1 ;
-(bool)selectionAtDocumentStart;
-(bool)selectionAtWordStart;
-(id)rangeByMovingCurrentSelection:(int)arg1 ;
-(id)rangeByExtendingCurrentSelection:(int)arg1 ;
-(bool)hasEditableSelection;
-(void)_setLoadsSynchronously:(bool)arg1 ;
-(void)resetTextAutosizingBeforeLayout;
-(void)sendScrollEvent;
-(void)_userScrolled;
-(CGColorRef)_bodyBackgroundColor;
-(bool)_isVisuallyNonEmpty;
-(int)_loadType;
-(bool)hasRichlyEditableSelection;
-(void)_replaceSelectionWithFragment:(id)arg1 selectReplacement:(bool)arg2 smartReplace:(bool)arg3 matchStyle:(bool)arg4 ;
-(void)removeUnchangeableStyles;
-(void)sendOrientationChangeEvent:(int)arg1 ;
-(void)getDictationResultRanges:(id*)arg1 andMetadatas:(id*)arg2 ;
-(id)stringForRange:(id)arg1 ;
-(id)dictationResultMetadataForRange:(id)arg1 ;
-(void)forceLayoutAdjustingViewSize:(bool)arg1 ;
-(id)interpretationsForCurrentRoot;
-(void)selectWithoutClosingTypingNSRange:(NSRange)arg1 ;
-(void)expandSelectionToWordContainingCaretSelection;
-(CTFontRef)fontForSelection:(bool*)arg1 ;
-(void)_replaceSelectionWithWebArchive:(id)arg1 selectReplacement:(bool)arg2 smartReplace:(bool)arg3 ;
-(void)expandSelectionToElementContainingCaretSelection;
-(bool)focusedNodeHasContent;
-(void)prepareForPause;
-(void)setTimeoutsPaused:(bool)arg1 ;
-(void)setPluginsPaused:(bool)arg1 ;
-(void)resumeFromPause;
-(id)markedTextDOMRange;
-(CGRect)renderRectForPoint:(CGPoint)arg1 isReplaced:(bool*)arg2 fontSize:(float*)arg3 ;
-(void)_setProhibitsScrolling:(bool)arg1 ;
-(id)elementRangeContainingCaretSelection;
-(void)revealSelectionAtExtent:(bool)arg1 ;
-(int)innerLineHeight:(id)arg1 ;
-(id)approximateNodeAtViewportLocation:(CGPoint*)arg1 ;
-(id)deepestNodeAtViewportLocation:(CGPoint)arg1 ;
-(id)scrollableNodeAtViewportLocation:(CGPoint)arg1 ;
-(void)_setVisibleSize:(CGSize)arg1 ;
-(id)elementAtPoint:(CGPoint)arg1 ;
-(NSRange)convertDOMRangeToNSRange:(id)arg1 ;
-(void)resetSelection;
-(bool)_isDescendantOfFrame:(id)arg1 ;
-(void)recursiveSetUpdateAppearanceEnabled:(bool)arg1 ;
-(id)_rectsForRange:(id)arg1 ;
-(void)_setTextAutosizingWidth:(double)arg1 ;
-(void)_setShouldCreateRenderers:(bool)arg1 ;
-(bool)_isFrameSet;
-(bool)_firstLayoutDone;
-(bool)_loadsSynchronously;
-(id)_selectionRangeForFirstPoint:(CGPoint)arg1 secondPoint:(CGPoint)arg2 ;
-(id)_selectionRangeForPoint:(CGPoint)arg1 ;
-(unsigned)_pendingFrameUnloadEventCount;
-(unsigned)formElementsCharacterCount;
-(void)selectNSRange:(NSRange)arg1 ;
-(NSRange)selectedNSRange;
-(void)_restoreViewState;
-(void)_saveViewState;
-(CGSize)renderedSizeOfNode:(id)arg1 constrainedToWidth:(float)arg2 ;
-(void)createDefaultFieldEditorDocumentStructure;
-(void)setCaretColor:(CGColorRef)arg1 ;
-(int)layoutCount;
-(bool)isTelephoneNumberParsingAllowed;
-(bool)isTelephoneNumberParsingEnabled;
-(bool)mediaDataLoadsAutomatically;
-(void)setMediaDataLoadsAutomatically:(bool)arg1 ;
-(void)expandSelectionToStartOfWordContainingCaretSelection;
-(id)wordRangeContainingCaretSelection;
-(id)wordInRange:(id)arg1 ;
-(bool)spaceFollowsWordInRange:(id)arg1 ;
-(id)wordsInCurrentParagraph;
-(bool)selectionAtSentenceStart;
-(void)selectNSRange:(NSRange)arg1 onElement:(id)arg2 ;
-(void)setMarkedText:(id)arg1 forCandidates:(bool)arg2 ;
-(void)_replaceSelectionWithText:(id)arg1 selectReplacement:(bool)arg2 smartReplace:(bool)arg3 matchStyle:(bool)arg4 ;
-(void)_replaceSelectionWithText:(id)arg1 selectReplacement:(bool)arg2 smartReplace:(bool)arg3 ;
-(void)_replaceSelectionWithMarkupString:(id)arg1 baseURLString:(id)arg2 selectReplacement:(bool)arg3 smartReplace:(bool)arg4 ;
-(id)_cacheabilityDictionary;
-(bool)_allowsFollowingLink:(id)arg1 ;
-(id)_stringByEvaluatingJavaScriptFromString:(id)arg1 withGlobalObject:(OpaqueJSValueRef)arg2 inScriptWorld:(id)arg3 ;
-(id)_javaScriptContextForScriptWorld:(id)arg1 ;
-(void)setAccessibleName:(id)arg1 ;
-(id)_layerTreeAsText;
-(id)accessibilityRoot;
-(void)_clearOpener;
-(id)_computePageRectsWithPrintScaleFactor:(float)arg1 pageSize:(CGSize)arg2 ;
-(id)_documentFragmentForText:(id)arg1 ;
-(id)_documentFragmentForWebArchive:(id)arg1 ;
-(id)_documentFragmentForImageData:(id)arg1 withRelativeURLPart:(id)arg2 andMIMEType:(id)arg3 ;
-(void)_dispatchDidReceiveTitle:(id)arg1 ;
-(id)_unreachableURL;
-(bool)_isDisplayingStandaloneImage;
-(id)stringByEvaluatingJavaScriptFromString:(id)arg1 forceUserGesture:(bool)arg2 ;
-(OpaqueJSContextRef)_globalContextForScriptWorld:(id)arg1 ;
-(OpaqueJSValueRef)jsWrapperForNode:(id)arg1 inScriptWorld:(id)arg2 ;
-(NSRange)_convertToNSRange:(Range*)arg1 ;
-(PassRefPtr<WebCore::Range>*)_convertToDOMRange:(NSRange)arg1 ;
-(id)_documentFragmentWithMarkupString:(id)arg1 baseURLString:(id)arg2 ;
-(bool)_isIncludedInWebKitStatistics;
-(id)_initWithWebFrameView:(id)arg1 webView:(id)arg2 ;
-(bool)_hasSelection;
-(id)_findFrameWithSelection;
-(void)_clearSelection;
-(id)_nodesFromList:(Vector<WebCore::Node *, 0, WTF::CrashOnOverflow>*)arg1 ;
-(id)_stringWithDocumentTypeStringAndMarkupString:(id)arg1 ;
-(bool)_shouldFlattenCompositingLayers:(CGContextRef)arg1 ;
-(id)_stringByEvaluatingJavaScriptFromString:(id)arg1 forceUserGesture:(bool)arg2 ;
-(CGRect)_firstRectForDOMRange:(id)arg1 ;
-(bool)_canProvideDocumentSource;
-(void)_attachScriptDebugger;
-(void)_detachScriptDebugger;
-(void)_clearCoreFrame;
-(void)_updateBackgroundAndUpdatesWhileOffscreen;
-(void)_setInternalLoadDelegate:(id)arg1 ;
-(id)_internalLoadDelegate;
-(void)_unmarkAllBadGrammar;
-(void)_unmarkAllMisspellings;
-(void)_clearSelectionInOtherFrames;
-(id)_dataSource;
-(bool)_isCommitting;
-(void)_setIsCommitting:(bool)arg1 ;
-(id)_markupStringFromRange:(id)arg1 nodes:(id*)arg2 ;
-(id)_selectedString;
-(id)_stringForRange:(id)arg1 ;
-(void)_drawRect:(CGRect)arg1 contentsOnly:(bool)arg2 ;
-(bool)_getVisibleRect:(CGRect*)arg1 ;
-(id)_stringByEvaluatingJavaScriptFromString:(id)arg1 ;
-(CGRect)_caretRectAtPosition:(const Position*)arg1 affinity:(int)arg2 ;
-(void)_scrollDOMRangeToVisible:(id)arg1 ;
-(void)_scrollDOMRangeToVisible:(id)arg1 withInset:(double)arg2 ;
-(bool)_needsLayout;
-(int)_selectionGranularity;
-(id)_convertNSRangeToDOMRange:(NSRange)arg1 ;
-(NSRange)_convertDOMRangeToNSRange:(id)arg1 ;
-(id)_markDOMRange;
-(id)_smartDeleteRangeForProposedRange:(id)arg1 ;
-(id)_documentFragmentWithNodesAsParagraphs:(id)arg1 ;
-(void)_replaceSelectionWithNode:(id)arg1 selectReplacement:(bool)arg2 smartReplace:(bool)arg3 matchStyle:(bool)arg4 ;
-(void)_insertParagraphSeparatorInQuotedContent;
-(VisiblePosition*)_visiblePositionForPoint:(CGPoint)arg1 ;
-(id)_characterRangeAtPoint:(CGPoint)arg1 ;
-(id)_typingStyle;
-(void)_setTypingStyle:(id)arg1 withUndoAction:(int)arg2 ;
-(bool)_canSaveAsWebArchive;
-(void)_commitData:(id)arg1 ;
-(id)renderTreeAsExternalRepresentationForPrinting:(bool)arg1 ;
-(int)numberOfPagesWithPageWidth:(float)arg1 pageHeight:(float)arg2 ;
-(void)printToCGContext:(CGContextRef)arg1 pageWidth:(float)arg2 pageHeight:(float)arg3 ;
-(void)dealloc;
-(id)init;
-(void)reload;
-(id)dataSource;
-(id)name;
-(id)webView;
-(id)frameView;
-(id)DOMDocument;
-(void)loadRequest:(id)arg1 ;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 ;
-(id)childFrames;
-(void)stopLoading;
-(void)finalize;
-(void)_loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 unreachableURL:(id)arg5 ;
-(void)_loadHTMLString:(id)arg1 baseURL:(id)arg2 unreachableURL:(id)arg3 ;
-(id)initWithName:(id)arg1 webFrameView:(id)arg2 webView:(id)arg3 ;
-(id)frameElement;
-(void)loadAlternateHTMLString:(id)arg1 baseURL:(id)arg2 forUnreachableURL:(id)arg3 ;
-(void)reloadFromOrigin;
-(id)findFrameNamed:(id)arg1 ;
-(id)javaScriptContext;
-(id)provisionalDataSource;
-(OpaqueJSContextRef)globalContext;
-(id)windowObject;
-(void)loadArchive:(id)arg1 ;
-(id)parentFrame;
@end


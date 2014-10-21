/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:12 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIPrintInteractionControllerDelegate;
#import <UIKit/UIKit-Structs.h>
@class UIPrintInfo, UIPrintPageRenderer, UIPrintFormatter, NSArray, UIPrintPaper, PKPrinter;

@interface UIPrintInteractionController : NSObject {

	UIPrintInfo* _printInfo;
	<UIPrintInteractionControllerDelegate>* _delegate;
	bool _showsPageRange;
	bool _hidesNumberOfCopies;
	UIPrintPageRenderer* _printPageRenderer;
	UIPrintFormatter* _printFormatter;
	id _printingItem;
	NSArray* _printingItems;
	UIPrintPaper* _printPaper;
	/*^block*/ id _completionHandler;
	unsigned long long _backgroundTaskIdentifier;
	id _printState;

}

@property (nonatomic,retain) UIPrintInfo * printInfo;                                        //@synthesize printInfo=_printInfo - In the implementation block
@property (assign,nonatomic) <UIPrintInteractionControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) bool showsPageRange;                                            //@synthesize showsPageRange=_showsPageRange - In the implementation block
@property (assign,nonatomic) bool showsNumberOfCopies; 
@property (nonatomic,readonly) UIPrintPaper * printPaper;                                    //@synthesize printPaper=_printPaper - In the implementation block
@property (nonatomic,retain) UIPrintPageRenderer * printPageRenderer;                        //@synthesize printPageRenderer=_printPageRenderer - In the implementation block
@property (nonatomic,retain) UIPrintFormatter * printFormatter;                              //@synthesize printFormatter=_printFormatter - In the implementation block
@property (nonatomic,copy) id printingItem;                                                  //@synthesize printingItem=_printingItem - In the implementation block
@property (nonatomic,copy) NSArray * printingItems;                                          //@synthesize printingItems=_printingItems - In the implementation block
@property (nonatomic,readonly) long long pageCount; 
@property (assign,nonatomic) NSRange pageRange; 
@property (nonatomic,retain) PKPrinter * printer; 
@property (nonatomic,retain) UIPrintPaper * paper; 
+(bool)isPrintingAvailable;
+(id)sharedPrintController;
+(id)printableUTIs;
+(bool)canPrintURL:(id)arg1 ;
+(bool)canPrintData:(id)arg1 ;
-(void)_enableManualPrintPage:(bool)arg1 ;
-(void)_manualPrintPage;
-(void)_cancelManualPrintPage;
-(oneway void)release;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)_init;
-(long long)pageCount;
-(id)printInfo;
-(void)dismissAnimated:(bool)arg1 ;
-(void)setPrintPageRenderer:(id)arg1 ;
-(id)printPageRenderer;
-(id)_currentPrintInfo;
-(void)setPrinter:(id)arg1 ;
-(void)_printPanelDidPresent;
-(void)_printPanelWillDismiss:(bool)arg1 ;
-(void)_printPanelDidDismiss;
-(void)_updatePageCount;
-(NSRange)pageRange;
-(void)setPageRange:(NSRange)arg1 ;
-(CGSize)_printItemContentSize;
-(id)paper;
-(void)setPaper:(id)arg1 ;
-(bool)_canShowDuplex;
-(bool)_canShowPageRange;
-(bool)_canShowCopies;
-(bool)_canShowPaperList;
-(id)printer;
-(void)_cleanPrintState;
-(bool)presentFromRect:(CGRect)arg1 inView:(id)arg2 animated:(bool)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(bool)_setupPrintPanel:(/*^block*/ id)arg1 ;
-(bool)presentAnimated:(bool)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)_updatePrintPaper;
-(void)_endPrintJob:(bool)arg1 error:(id)arg2 ;
-(void)_startPrinting;
-(void)_setPrintInfoState:(int)arg1 ;
-(id)_paperForPDFItem:(id)arg1 withDuplexMode:(long long)arg2 ;
-(id)_paperForContentType:(long long)arg1 ;
-(void)_preparePrintInfo;
-(void)_printPage;
-(id)_printPageRenderer:(id)arg1 ;
-(id)_printItem:(id)arg1 ;
-(void)setPrintingItem:(id)arg1 ;
-(bool)presentFromBarButtonItem:(id)arg1 animated:(bool)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(bool)showsNumberOfCopies;
-(void)setShowsNumberOfCopies:(bool)arg1 ;
-(void)setPrintInfo:(id)arg1 ;
-(bool)showsPageRange;
-(void)setShowsPageRange:(bool)arg1 ;
-(id)printPaper;
-(id)printFormatter;
-(void)setPrintFormatter:(id)arg1 ;
-(id)printingItem;
-(id)printingItems;
-(void)setPrintingItems:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:12 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIPrintPanelViewController, UIPrintingProgress, PKPrinter, UIPrintPaper, PKPrintSettings, UIPrintInfo, UIPrintPageRenderer;

@interface UIPrintInteractionControllerInternals : NSObject {

	long long _pageCount;
	NSRange _pageRange;
	long long _currentPage;
	UIPrintPanelViewController* _printPanelViewController;
	UIPrintingProgress* _printingProgress;
	PKPrinter* _printer;
	UIPrintPaper* _paper;
	PKPrintSettings* _printSettings;
	UIPrintInfo* _activePrintInfo;
	int _printInfoState;
	bool _supressNotifyDismissed;
	UIPrintPageRenderer* _formatterRenderer;
	bool _manualPrintPageEnabled;

}
-(void)dealloc;
@end


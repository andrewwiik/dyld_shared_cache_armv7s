/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:45 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIColor, UIFont;

@interface StocksStyle : NSObject {

	UIColor* _chartHighlightColor;
	UIFont* _mainFont;
	UIFont* _chartLabelFont;

}
+(id)sharedStyle;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
-(id)chartLabelFont;
-(id)lightFontOfSize:(double)arg1 ;
-(id)gainColor;
-(id)lossColor;
-(id)chartHighlightColor;
-(id)fontOfSize:(double)arg1 ;
-(id)mediumFontOfSize:(double)arg1 ;
-(id)boldFontOfSize:(double)arg1 ;
-(void)resetLocale;
@end


/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:23 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Internet Plug-Ins/QuickTime Plugin.webplugin/QuickTime Plugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class FigPluginView;

@interface FPVWebScript : NSObject {

	FigPluginView* _figPluginView;

}
+(id)selectorMap;
+(bool)isSelectorExcludedFromWebScript:(SEL)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(bool)isKeyExcludedFromWebScript:(const char*)arg1 ;
-(void)play;
-(void)setCurrentTime:(id)arg1 ;
-(void)seekToDate:(id)arg1 ;
-(void)setURL:(id)arg1 ;
-(void)stop;
-(void)setFigPluginView:(id)arg1 ;
-(id)getPluginStatus;
-(id)getRate;
-(void)exitFullScreen;
-(id)getCurrentTime;
-(id)getDate;
-(id)getTimeScale;
-(id)getMaxTimeLoaded;
-(id)getMaxBytesLoaded;
-(id)getMovieSize;
-(id)getLastTimedMetadata;
-(id)getAccessLog;
-(id)getErrorLog;
-(id)getURL;
-(id)getDuration;
-(bool)isFullScreen;
-(void)setRate:(id)arg1 ;
@end


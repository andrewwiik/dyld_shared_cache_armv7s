/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:22 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class WebBackForwardListPrivate;

@interface WebBackForwardList : NSObject {

	WebBackForwardListPrivate* _private;

}
+(void)initialize;
-(id)initWithBackForwardList:(PassRefPtr<WebCore::BackForwardListImpl>*)arg1 ;
-(void)setCapacity:(int)arg1 ;
-(void)setPageCacheSize:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)backItem;
-(id)currentItem;
-(void)addItem:(id)arg1 ;
-(void)removeItem:(id)arg1 ;
-(void)goBack;
-(void)goForward;
-(id)dictionaryRepresentation;
-(void)setToMatchDictionaryRepresentation:(id)arg1 ;
-(id)itemAtIndex:(int)arg1 ;
-(int)capacity;
-(void)finalize;
-(bool)containsItem:(id)arg1 ;
-(void)goToItem:(id)arg1 ;
-(id)backListWithLimit:(int)arg1 ;
-(id)forwardListWithLimit:(int)arg1 ;
-(unsigned long long)pageCacheSize;
-(int)backListCount;
-(int)forwardListCount;
-(id)forwardItem;
-(void)_close;
@end


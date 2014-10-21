/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:22 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class WebResource, NSArray;

@interface WebArchivePrivate : NSObject {

	WebResource* cachedMainResource;
	NSArray* cachedSubresources;
	NSArray* cachedSubframeArchives;
	RefPtr<WebCore::LegacyWebArchive>* coreArchive;

}
+(void)initialize;
-(void)dealloc;
-(id)init;
-(id).cxx_construct;
-(void).cxx_destruct;
-(id)initWithCoreArchive:(PassRefPtr<WebCore::LegacyWebArchive>*)arg1 ;
-(LegacyWebArchive*)coreArchive;
-(void)setCoreArchive:(PassRefPtr<WebCore::LegacyWebArchive>*)arg1 ;
@end


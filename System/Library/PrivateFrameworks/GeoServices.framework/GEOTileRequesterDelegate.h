/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:12 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GEOTileRequesterDelegate
@required
-(void)tileRequester:(id)arg1 receivedError:(id)arg2;
-(void)tileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned)arg3 tileSet:(unsigned)arg4 forKey:(GEOTileKey)arg5 userInfo:(id)arg6;
-(void)tileRequesterFinished:(id)arg1;
@end


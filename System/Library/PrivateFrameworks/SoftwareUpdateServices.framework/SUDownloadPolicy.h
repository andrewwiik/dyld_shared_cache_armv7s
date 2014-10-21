/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:42 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SUDownloadPolicy <NSObject>
@property (nonatomic,retain) SUDescriptor * descriptor; 
@required
-(bool)isDownloadable;
-(void)setDescriptor:(id)arg1;
-(id)descriptor;
-(bool)isDownloadFreeForCellular;
-(bool)isPowerRequired;
-(bool)isDownloadAllowableForCellular2G;
-(bool)isDownloadAllowableForCellular;
-(bool)isDownloadAllowableForCellularRoaming;
-(bool)isDownloadAllowableForWiFi;
-(bool)isSamePolicy:(id)arg1;
-(bool)isDownloadableForCurrentNetworkConditions:(long long*)arg1 cellularFeesApply:(bool*)arg2 powerRequired:(bool*)arg3;
-(bool)hasEnoughDiskSpace;
-(id)initWithDescriptor:(id)arg1;
-(bool)isDownloadableForCurrentNetworkConditions:(long long*)arg1 cellularFeesApply:(bool*)arg2;
@end


/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:36 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SASettingAppSettingCommand <SAAceSerializable,SAClientBoundCommand>
@property (nonatomic,copy) NSString * appWithSettingsId; 
@property (nonatomic,copy) NSString * location; 
@required
-(id)location;
-(id)appWithSettingsId;
-(void)setAppWithSettingsId:(id)arg1;
-(void)setLocation:(id)arg1;
@end


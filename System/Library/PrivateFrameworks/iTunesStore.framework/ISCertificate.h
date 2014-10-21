/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:28 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iTunesStore/iTunesStore-Structs.h>
@interface ISCertificate : NSObject {

	SecTrustRef _trust;

}
-(void)dealloc;
-(bool)isValid;
-(void)_invalidate;
-(bool)checkData:(id)arg1 againstSignature:(id)arg2 ;
-(bool)checkData:(id)arg1 againstAppleSignature:(id)arg2 ;
-(void)setCertificateData:(id)arg1 ;
@end


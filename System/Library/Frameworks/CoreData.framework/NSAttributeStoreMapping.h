/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:07 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSPropertyStoreMapping.h>

@interface NSAttributeStoreMapping : NSPropertyStoreMapping {

	int _externalType;
	unsigned _externalPrecision;
	int _externalScale;

}
-(id)sqlType;
-(id)initWithProperty:(id)arg1 ;
-(void)setExternalType:(int)arg1 ;
-(void)setExternalPrecision:(unsigned)arg1 ;
-(void)setExternalScale:(int)arg1 ;
-(int)externalType;
-(unsigned)externalPrecision;
-(int)externalScale;
-(id)attribute;
-(id)columnDefinition;
-(bool)isEqual:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:07 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSStoreMapNode.h>
#import <CoreFoundation/NSCoding.h>

@interface NSDictionaryMapNode : NSStoreMapNode <NSCoding> {

	id* _attributes;
	id _attributesAsEncoded;

}
+(void)initialize;
-(void)_doAttributeDecoding;
-(id)initWithValues:(id*)arg1 objectID:(id)arg2 ;
-(const id*)attributeValues;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
@end


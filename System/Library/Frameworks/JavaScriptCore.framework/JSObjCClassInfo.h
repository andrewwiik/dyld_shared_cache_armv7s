/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:38 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <JavaScriptCore/JavaScriptCore-Structs.h>
@class JSContext;

@interface JSObjCClassInfo : NSObject {

	JSContext* m_context;
	Class m_class;
	bool m_block;
	OpaqueJSClass* m_classRef;
	Weak<JSC::JSObject>* m_prototype;
	Weak<JSC::JSObject>* m_constructor;

}
-(void)allocateConstructorAndPrototypeWithSuperClassInfo:(id)arg1 ;
-(void)reallocateConstructorAndOrPrototype;
-(id)initWithContext:(id)arg1 forClass:(Class)arg2 superClassInfo:(id)arg3 ;
-(id)wrapperForObject:(id)arg1 ;
-(id)constructor;
-(void)dealloc;
-(id).cxx_construct;
-(void).cxx_destruct;
@end

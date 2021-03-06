/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:24 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MIME/MIME-Structs.h>
@class NSString, NSMutableDictionary, MFWeakReferenceHolder, NSURL, MFPartialNetworkDataConsumer, NSData;

@interface MFMimePart : NSObject {

	NSString* _type;
	NSString* _subtype;
	NSMutableDictionary* _bodyParameters;
	NSString* _contentTransferEncoding;
	NSMutableDictionary* _otherIvars;
	NSRange _range;
	MFWeakReferenceHolder* _parent;
	MFWeakReferenceHolder* _body;
	MFMimePart* _nextPart;
	NSURL* _partURL;
	NSURL* _parentPartURL;
	MFPartialNetworkDataConsumer* _partialDataConsumer;
	NSData* _fullData;
	MFWeakReferenceHolder* _decodedData;

}
+(void)initialize;
+(bool)parseContentTypeHeader:(id)arg1 type:(id*)arg2 subtype:(id*)arg3 info:(id*)arg4 ;
+(bool)parseContentTypeHeader:(id)arg1 type:(id*)arg2 subtype:(id*)arg3 ;
+(bool)isRecognizedClassForContent:(id)arg1 ;
+(Class)attachmentClass;
-(id)newSignedPartWithData:(id)arg1 sender:(id)arg2 compositionSpecification:(id)arg3 signatureData:(id*)arg4 ;
-(id)newEncryptedPartWithData:(id)arg1 compositionSpecification:(id)arg2 encryptedData:(id*)arg3 ;
-(bool)_needsSignatureVerification:(id*)arg1 ;
-(void)_setSigners:(id)arg1 ;
-(void)_setSMIMEError:(id)arg1 ;
-(id)decodeMultipartSigned;
-(id)decodeApplicationPkcs7_mime;
-(id)SMIMEError;
-(id)copySigners;
-(id)decodeMultipartRelated;
-(id)decodeMultipartAlternative;
-(id)decodeMultipart;
-(id)decodeApplicationZip;
-(id)decodeApplicationOctet_stream;
-(id)bodyData;
-(id)_fullMimeTypeEvenInsideAppleDouble;
-(id)contentsForTextSystemForcingDownload:(bool)arg1 ;
-(id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(bool)arg3 asHTML:(bool)arg4 isComplete:(bool*)arg5 ;
-(void)_contents:(id*)arg1 toOffset:(unsigned long long)arg2 resultOffset:(unsigned long long*)arg3 downloadIfNecessary:(bool)arg4 asHTML:(bool)arg5 isComplete:(bool*)arg6 ;
-(id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(bool)arg3 asHTML:(bool)arg4 ;
-(id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(bool)arg3 ;
-(id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 ;
-(id)bodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 ;
-(void)decodeIfNecessary;
-(id)decodeText;
-(id)contentsForTextSystem;
-(bool)hasContents;
-(bool)parseIMAPPropertyList:(id)arg1 ;
-(id)partNumber;
-(bool)parseMimeBodyDownloadIfNecessary:(bool)arg1 ;
-(bool)parseMimeBody;
-(void)setContentLocation:(id)arg1 ;
-(void)download;
-(unsigned long long)totalTextSize;
-(id)rfc822DecodedMessageBody;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setType:(id)arg1 ;
-(id)type;
-(id)subtype;
-(void)setSubtype:(id)arg1 ;
-(NSRange)range;
-(void)setIsGenerated:(bool)arg1 ;
-(bool)isGenerated;
-(void)setRange:(NSRange)arg1 ;
-(void)setSubparts:(id)arg1 ;
-(void)setLanguages:(id)arg1 ;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 asHTML:(bool)arg3 ;
-(bool)isRich;
-(id)chosenAlternativePart;
-(id)_partThatIsAttachment;
-(bool)shouldConsiderInlineOverridingExchangeServer;
-(id)startPart;
-(id)subpartAtIndex:(long long)arg1 ;
-(void)_ensureBodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(bool)arg3 isComplete:(bool*)arg4 decoded:(id*)arg5 ;
-(id)bodyDataForcingDownload:(bool)arg1 ;
-(id)bodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(bool)arg3 ;
-(id)preservedHeaderValueForKey:(id)arg1 ;
-(void)setContentDescription:(id)arg1 ;
-(void)_setRFC822DecodedMessageBody:(id)arg1 ;
-(void)clearCachedDescryptedMessageBody;
-(bool)_hasCompleteBodyDataToOffset:(unsigned long long)arg1 ;
-(id)copyBodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 ;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(bool)arg3 asHTML:(bool)arg4 ;
-(void)getNumberOfAttachments:(unsigned*)arg1 isSigned:(bool*)arg2 isEncrypted:(bool*)arg3 ;
-(id)mimeBody;
-(unsigned)numberOfAttachments;
-(void)addSubpart:(id)arg1 ;
-(id)firstChildPart;
-(void)setBodyParameter:(id)arg1 forKey:(id)arg2 ;
-(id)subparts;
-(id)disposition;
-(void)setContentID:(id)arg1 ;
-(id)nextSiblingPart;
-(id)bodyParameterForKey:(id)arg1 ;
-(id)bodyParameterKeys;
-(id)dispositionParameterKeys;
-(id)dispositionParameterForKey:(id)arg1 ;
-(id)contentTransferEncoding;
-(id)contentDescription;
-(id)contentID;
-(id)contentLocation;
-(void)setContentTransferEncoding:(id)arg1 ;
-(bool)isReadableText;
-(id)fileWrapperForcingDownload:(bool)arg1 ;
-(void)setDispositionParameter:(id)arg1 forKey:(id)arg2 ;
-(void)setDisposition:(id)arg1 ;
-(id)attachmentURLs;
-(id)textHtmlPart;
-(bool)isHTML;
-(id)attachmentFilename;
-(id)attachments;
-(void)configureFileWrapper:(id)arg1 ;
-(id)parentPart;
-(id)fileWrapper;
-(id)decodedDataForData:(id)arg1 ;
-(id)copyBodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(bool)arg3 ;
-(id)alternativeAtIndex:(long long)arg1 ;
-(id)copyBodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(bool)arg3 isComplete:(bool*)arg4 ;
-(unsigned)textEncoding;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(bool)arg3 asHTML:(bool)arg4 isComplete:(bool*)arg5 ;
-(id)fileWrapperForDecodedObject:(id)arg1 withFileData:(id*)arg2 ;
-(bool)_shouldContinueDecodingProcess;
-(id)storeData:(id)arg1 inMessage:(id)arg2 isComplete:(bool)arg3 ;
-(unsigned)approximateRawSize;
-(bool)usesKnownSignatureProtocol;
-(id)signedData;
-(id)decryptedMessageBodyIsEncrypted:(bool*)arg1 isSigned:(bool*)arg2 ;
-(void)_setDecryptedMessageBody:(id)arg1 isEncrypted:(bool)arg2 isSigned:(bool)arg3 ;
-(void)setMimeBody:(id)arg1 ;
-(id)partURL;
-(id)languages;
-(long long)numberOfAlternatives;
-(bool)isAttachment;
@end


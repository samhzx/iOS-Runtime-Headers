/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */



@interface GMMSetHttpCookieRequest : PBRequest 
{
    BOOL _gmmInstalled;
    BOOL _hasGmmInstalled;
    BOOL _gmmInvokedViaMimeType;
    BOOL _gmmInvokedViaUrl;
}

@property BOOL gmmInvokedViaUrl;
@property BOOL gmmInvokedViaMimeType;
@property(readonly) BOOL hasGmmInstalled;
@property BOOL gmmInstalled;


- (id)init;
- (void)dealloc;
- (void)setGmmInstalled:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (Class)responseClass;
- (NSUInteger)requestTypeCode;
- (id)description;
- (BOOL)gmmInvokedViaUrl;
- (void)setGmmInvokedViaUrl:(BOOL)arg1;
- (BOOL)gmmInvokedViaMimeType;
- (void)setGmmInvokedViaMimeType:(BOOL)arg1;
- (BOOL)hasGmmInstalled;
- (BOOL)gmmInstalled;

@end
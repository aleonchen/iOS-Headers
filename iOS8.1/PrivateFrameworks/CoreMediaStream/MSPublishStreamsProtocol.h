//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreMediaStream/MSStreamsProtocol.h>

@class NSArray;

@interface MSPublishStreamsProtocol : MSStreamsProtocol
{
    struct __MSPSPCContext {
        struct __MSSPCContext _super;
        CDUnknownFunctionPointerType finishedCallback;
        CDUnknownFunctionPointerType authFailedCallback;
        CDUnknownFunctionPointerType didReceiveServerSideConfigurationVersionCallback;
        CDUnknownFunctionPointerType didReceiveRetryAfterCallback;
    } _context;
    NSArray *_assetCollectionsInFlight;
    struct __MSPSPCUCContext {
        struct __MSSPCContext _super;
        CDUnknownFunctionPointerType finishedCallback;
        CDUnknownFunctionPointerType authFailedCallback;
        CDUnknownFunctionPointerType didReceiveServerSideConfigurationVersionCallback;
    } _UCContext;
}

- (void).cxx_destruct;
- (void)_coreProtocolDidFinishUCResults:(id)arg1 error:(id)arg2;
- (void)_coreProtocolDidFailAuthenticationError:(id)arg1;
- (void)_coreProtocolDidFinishResponse:(id)arg1 error:(id)arg2;
- (void)abort;
- (void)sendUploadCompleteForAssetCollections:(id)arg1;
- (void)sendMetadataForAssetCollections:(id)arg1;
- (id)_metadataDictForAssetCollection:(id)arg1 outError:(id *)arg2;
- (id)_metadataDictForAsset:(id)arg1 outError:(id *)arg2;
- (void)_resetConnectionVariables;
- (BOOL)_insertInfoAboutAsset:(id)arg1 intoDictionary:(id)arg2 outError:(id *)arg3;
- (id)_missingAssetFieldErrorWithFieldName:(id)arg1;
- (void)dealloc;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end

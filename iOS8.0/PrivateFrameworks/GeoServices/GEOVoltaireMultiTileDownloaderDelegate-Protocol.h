//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class GEOVoltaireMultiTileDownloader, NSData, NSError;

@protocol GEOVoltaireMultiTileDownloaderDelegate
- (void)tileDownload:(GEOVoltaireMultiTileDownloader *)arg1 didFailWithError:(NSError *)arg2;
- (void)tileDownloadFinished:(GEOVoltaireMultiTileDownloader *)arg1;
- (void)tileDownload:(GEOVoltaireMultiTileDownloader *)arg1 didReceiveData:(NSData *)arg2 edition:(unsigned int)arg3 forKey:(struct _GEOTileKey)arg4;
@end


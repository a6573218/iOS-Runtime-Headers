/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray, NSMutableSet, NSString, NSURL;

@interface MPItemDownloadProperties : NSObject <SSDownloadManagerObserver, NSCopying> {
    long long _assetFileSize;
    NSURL *_destinationURL;
    BOOL _downloadExists;
    NSString *_downloadIdentifier;
    long long _downloadSizeLimit;
    unsigned long long _downloadToken;
    NSMutableSet *_downloadTokenCompletionHandlers;
    NSArray *_sinfs;
    NSURL *_sourceURL;
}

@property(readonly) long long assetFileSize;
@property(readonly) NSURL * destinationURL;
@property(readonly) BOOL downloadExists;
@property(readonly) NSString * downloadIdentifier;
@property(readonly) long long downloadSizeLimit;
@property unsigned long long downloadToken;
@property(readonly) NSURL * sourceURL;

- (void).cxx_destruct;
- (void)_reloadNetworkConstraints;
- (void)acquireDownloadTokenWithCompletionHandler:(id)arg1;
- (long long)assetFileSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)destinationURL;
- (BOOL)downloadExists;
- (id)downloadIdentifier;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (long long)downloadSizeLimit;
- (unsigned long long)downloadToken;
- (unsigned int)hash;
- (id)initWithDownload:(id)arg1;
- (id)initWithDownloadIdentifier:(long long)arg1;
- (id)initWithMediaItem:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)newAVAssetOptionsWithDownloadStyle:(int)arg1;
- (void)setDownloadToken:(unsigned long long)arg1;
- (id)sourceURL;

@end

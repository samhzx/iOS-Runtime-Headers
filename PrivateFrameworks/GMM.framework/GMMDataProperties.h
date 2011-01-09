/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString, GMMMapPoint;



@interface GMMDataProperties : PBCodable 
{
    BOOL _disabled;
    BOOL _hasDisabled;
    NSInteger _infoLevel;
    BOOL _hasInfoLevel;
    NSInteger _infoValue;
    BOOL _hasInfoValue;
    NSInteger _imageWidth;
    NSInteger _imageHeight;
    NSInteger _tileWidth;
    BOOL _hasTileWidth;
    NSInteger _tileHeight;
    BOOL _hasTileHeight;
    NSString *_panoId;
    NSInteger _numZoomLevels;
    BOOL _hasNumZoomLevels;
    GMMMapPoint *_latLon;
    NSString *_copyright;
    NSString *_text;
    NSString *_streetRange;
    NSInteger _maxZoomLevel;
    NSInteger _radius;
    NSInteger _imageSource;
    BOOL _hasImageSource;
}

@property(readonly) BOOL hasCopyright;
@property(readonly) BOOL hasText;
@property(readonly) BOOL hasStreetRange;
@property(readonly) BOOL hasImageSource;
@property NSInteger imageSource;
@property NSInteger radius;
@property NSInteger maxZoomLevel;
@property(retain) NSString *streetRange;
@property(retain) NSString *text;
@property(retain) NSString *copyright;
@property(retain) GMMMapPoint *latLon;
@property(readonly) BOOL hasNumZoomLevels;
@property NSInteger numZoomLevels;
@property(retain) NSString *panoId;
@property(readonly) BOOL hasTileHeight;
@property NSInteger tileHeight;
@property(readonly) BOOL hasTileWidth;
@property NSInteger tileWidth;
@property NSInteger imageHeight;
@property NSInteger imageWidth;
@property(readonly) BOOL hasInfoValue;
@property NSInteger infoValue;
@property(readonly) BOOL hasInfoLevel;
@property NSInteger infoLevel;
@property(readonly) BOOL hasDisabled;
@property BOOL disabled;


- (id)init;
- (void)dealloc;
- (void)setDisabled:(BOOL)arg1;
- (void)setInfoLevel:(NSInteger)arg1;
- (void)setInfoValue:(NSInteger)arg1;
- (void)setTileWidth:(NSInteger)arg1;
- (void)setTileHeight:(NSInteger)arg1;
- (void)setNumZoomLevels:(NSInteger)arg1;
- (BOOL)hasCopyright;
- (BOOL)hasText;
- (BOOL)hasStreetRange;
- (void)setImageSource:(NSInteger)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasImageSource;
- (NSInteger)imageSource;
- (NSInteger)radius;
- (void)setRadius:(NSInteger)arg1;
- (NSInteger)maxZoomLevel;
- (void)setMaxZoomLevel:(NSInteger)arg1;
- (id)streetRange;
- (void)setStreetRange:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (id)copyright;
- (void)setCopyright:(id)arg1;
- (id)latLon;
- (void)setLatLon:(id)arg1;
- (BOOL)hasNumZoomLevels;
- (NSInteger)numZoomLevels;
- (id)panoId;
- (void)setPanoId:(id)arg1;
- (BOOL)hasTileHeight;
- (NSInteger)tileHeight;
- (BOOL)hasTileWidth;
- (NSInteger)tileWidth;
- (NSInteger)imageHeight;
- (void)setImageHeight:(NSInteger)arg1;
- (NSInteger)imageWidth;
- (void)setImageWidth:(NSInteger)arg1;
- (BOOL)hasInfoValue;
- (NSInteger)infoValue;
- (BOOL)hasInfoLevel;
- (NSInteger)infoLevel;
- (BOOL)hasDisabled;
- (BOOL)disabled;

@end
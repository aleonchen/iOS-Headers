//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DLight.h>

#import "TSCH3DLightDirectional.h"

__attribute__((visibility("hidden")))
@interface TSCH3DDirectionalLight : TSCH3DLight <TSCH3DLightDirectional>
{
    tvec3_17f03ce0 mDirection;
}

+ (Class)effectClass;
+ (id)instanceWithArchive:(const struct Chart3DLightArchive *)arg1 unarchiver:(id)arg2;
@property(nonatomic) tvec3_17f03ce0 direction; // @synthesize direction=mDirection;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (void)saveToArchive:(struct Chart3DLightArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct Chart3DLightArchive *)arg1 unarchiver:(id)arg2;

@end


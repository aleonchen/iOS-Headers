//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeSharing/HSRequest.h>

@interface HSCloudArtworkInfoRequest : HSRequest
{
}

+ (id)requestWithDatabaseID:(unsigned int)arg1 itemID:(unsigned long long)arg2 sessionID:(unsigned int)arg3;
+ (id)requestWithDatabaseID:(unsigned int)arg1 itemID:(unsigned long long)arg2;
- (id)canonicalResponseForResponse:(id)arg1;
- (id)initWithDatabaseID:(unsigned int)arg1 itemID:(unsigned long long)arg2 sessionID:(unsigned int)arg3;
- (id)initWithDatabaseID:(unsigned int)arg1 itemID:(unsigned long long)arg2;

@end

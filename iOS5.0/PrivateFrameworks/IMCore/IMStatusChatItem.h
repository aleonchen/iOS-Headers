/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IMCore/IMChatItem.h>

@class NSArray, NSString;

@interface IMStatusChatItem : IMChatItem
{
}

@property(readonly, nonatomic) int statusType;
- (id)description;
@property(readonly, nonatomic) NSArray *handles;
@property(readonly, nonatomic) NSString *formatString;
@property(readonly, nonatomic) NSString *stringValue;
- (id)initWithFormat:(id)arg1 handles:(id)arg2 date:(id)arg3 statusType:(int)arg4;
- (id)initWithString:(id)arg1 date:(id)arg2 statusType:(int)arg3;

@end


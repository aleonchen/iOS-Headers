/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class MPMediaItem;

@interface SUScriptMediaItem : SUScriptObject
{
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)scriptPropertyForNativeProperty:(id)arg1;
+ (id)scriptMediaTypeForNativeMediaType:(int)arg1;
+ (id)nativePropertyForScriptProperty:(id)arg1;
+ (int)nativeMediaTypesForScriptMediaTypes:(id)arg1;
+ (id)copyScriptMediaTypesForNativeMediaTypes:(int)arg1;
- (id)_copyValueForProperty:(id)arg1;
- (id)_copyImageURLWithWidth:(int)arg1 height:(int)arg2;
- (id)_className;
- (id)valueForProperty:(id)arg1;
- (id)imageURLWithWidth:(id)arg1 height:(id)arg2;
@property(readonly, nonatomic) MPMediaItem *nativeItem;

@end

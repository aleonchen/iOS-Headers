/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSMutableAttributedString.h>

@class NSMutableRLEArray, NSMutableString;

@interface NSConcreteMutableAttributedString : NSMutableAttributedString
{
    NSMutableString *mutableString;
    NSMutableRLEArray *mutableAttributes;
    struct {
        unsigned int attributeFixingDisabled:8;
        unsigned int :24;
    } fields;
}

+ (Class)_mutableStringClass;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (void)edited:(unsigned int)arg1 range:(struct _NSRange)arg2 changeInLength:(int)arg3;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (id)attribute:(id)arg1 atIndex:(unsigned int)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;
- (id)_runArrayHoldingAttributes;
- (id)string;
- (unsigned int)length;
- (id)attribute:(id)arg1 atIndex:(unsigned int)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)attributesAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange *)arg2;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 attributes:(id)arg2;
- (id)initWithAttributedString:(id)arg1;

@end

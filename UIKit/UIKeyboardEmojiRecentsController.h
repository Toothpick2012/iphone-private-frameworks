/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableArray;
@protocol UIKeyboardEmojiController;

@interface UIKeyboardEmojiRecentsController : NSObject {
	id<UIKeyboardEmojiController> _controller;
	int _currentSequence;
	NSMutableArray* _recents;
	NSMutableDictionary* _usageHistory;
}
-(id)initWithController:(id)controller;
-(void)dealloc;
-(void)readDefaultsDictionary:(id)dictionary;
-(BOOL)isAncientSequence:(int)sequence;
-(double)scoreForSequence:(int)sequence;
-(double)scoreForEmoji:(id)emoji;
-(void)emojiUsed:(id)used;
-(void)clearAncientHistory;
-(id)defaultsDictionary;
-(id)recents;
@end

